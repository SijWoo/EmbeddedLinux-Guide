# EmbeddedLinux-Guide
A fool's journey of learning embedded linux on an ARM-A7 processor.

I wanted to go from an ARM Cortex M microcontroller to an ARM Cortex A processor for more computng power and learn how to use embedded linux.

I'll be using NXP's i.MX7ULP (MCIMX7) processor to learn.

There is no structure to this guide. The following sections are in chronological order of what I learn.

## References
List of sources I used:
https://armbedded.taskit.de/node/318

## Background
During the time I created this repo, I know the following concepts:
1. ARM-M4 bare metal programming
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

## Start of the Journey - How to control I/O pins
I've used an ARM-M4 microcontroller for all of my projects and the MMU in those microcontrollers did not support virtual memory due to the scope of the tasks they are designed to handle. The programs I wrote used physical addresses. The registers needed to initialize GPIO pins were mapped to physical memory. I could use the registers to access data since I knew the address is directly mapped to it.

With embedded linux, each program I write uses its own virtual address space. This means if a register is defined to point at 0x4000A000 as the following:
'''
#define GPIO_DATA_R (*((volatile uint32_t *)0x4000A000))
'''
in two separate programs, it's highly likely dereferencing this register in one process will map to a different physical address than in another process.

One option I found was to create a kernel driver. This seams like a deep rabbit hole that I currently don't want to deal with so I'll jump in it at a later time.

...
