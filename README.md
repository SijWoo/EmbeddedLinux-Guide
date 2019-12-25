# EmbeddedLinux-Guide
A fool's journey of learning embedded linux on an ARM-CA7 processor.

I wanted to go from an ARM Cortex M microcontroller to an ARM Cortex A processor for more computng power and learn how to use embedded linux.

I'll be using NXP's i.MX7ULP (MCIMX7) processor to learn.

There is no structure to this guide. The following sections are in chronological order of what I learn.

**Take this guide with a grain of salt. I'll always make mistakes. If you see any incorrect information, let me know and I can fix it!**

## References
List of sources I used:
https://armbedded.taskit.de/node/318
https://www.kernel.org/doc/Documentation/rpmsg.txt

## Background
During the time I created this repo, I know the following concepts:
1. ARM-CM4 bare metal programming
2. I/O
3. Low Speed Communication Protocols
4. RTOS / OS
5. Critical Sections
6. Semaphores, Mutex
7. DMA
8. Pipelines
9. Caches
10. Virtual Memory
11. Memory Mapped I/O
12. GCC/GDB
13. Bluetooth
14. WiFi - sort of (still a mystery)

## How to control I/O pins through Linux
I've used an ARM-CM4 microcontroller for all of my projects and the MMU in those microcontrollers did not support virtual memory due to the scope of the tasks they are designed to handle. The programs I wrote used physical addresses. The registers needed to initialize GPIO pins were mapped to physical memory. I could use the registers to access data since I knew the address is directly mapped to it.

With embedded linux, each program I write uses its own virtual address space. This means if a register is defined to point at 0x4000A000 as the following:
```C
#define GPIO_DATA_R (*((volatile uint32_t *)0x4000A000))
```
in two separate programs, it's highly likely dereferencing this register in one process will map to a different physical address than in another process.

One option I found was to create a kernel driver. There are char, block, and network types. This seems like a deep rabbit hole that I currently don't want to deal with so I'll jump into it at a later time.

Other options are calling read/write functions from stdio or call ioctl. Read/write functions only allows half-duplex communication so read and writes cannot be simultaneous. For full-duplex, you need to use ioctl. Ioctl let's you choose your input parameters for freedom of creating your own drivers. Either way, I don't like these options because there's a lot of latency and overhead. As an embedded engineer, it bothers me that the system cannot be truly real-time. For actual pin control, I've decided I can just use the CM4 core with an RTOS.

## How to run both RTOS and Linux simultaneously (RPMsg)
NXP's i.MX7 has an ARM CA7 processor and a CM4 processor. The CA7 can be running Linux whereas the CM4 can be running a RTOS. The CM4 can handle I/O with little overhead whereas the CA7 can handle the UI and complex algorithms.

These two cores are on the same chip (hence System on Chip name). We need some intercommunication protocol to exchange data. There is the Remote Processor Message framework (RPMsg). RPMsg uses the Virtio framework. Basically, each machine has a read and write queue and they can write to the corresponding queues to communicate. This is a drastically simplified explanation. There are more details on how this works in the [OpenAMP repo](https://github.com/OpenAMP/open-amp/wiki/RPMsg-Messaging-Protocol).

For more information on the API on the linux side, look at the Linux documentation/rpmsg.txt (https://www.kernel.org/doc/Documentation/rpmsg.txt)

For the RTOS, NXP provided a multicore library. Writing my own RPMsg API will take more time than I'm willing to put.

## How does Linux know which pins are being used if I use the generic SPI device driver
There are generic IO device drivers that let's us use a peripheral and create our own application specific drivers.
