#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_


/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/* PTA12 (number AG16), BATT_ADC_EN */
#define INIT_GPIO_PINS_BATT_ADC_EN_PERIPHERAL                                PTA   /*!< Device name: PTA */
#define INIT_GPIO_PINS_BATT_ADC_EN_SIGNAL                                   port   /*!< PTA signal: port */
#define INIT_GPIO_PINS_BATT_ADC_EN_CHANNEL                                    12   /*!< PTA port channel: 12 */
#define INIT_GPIO_PINS_BATT_ADC_EN_PIN_NAME                                PTA12   /*!< Pin name */
#define INIT_GPIO_PINS_BATT_ADC_EN_PIN_FUNCTION_ID            IOMUXC_PTA12_PTA12   /*!< Pin function id */
#define INIT_GPIO_PINS_BATT_ADC_EN_LABEL                           "BATT_ADC_EN"   /*!< Label */
#define INIT_GPIO_PINS_BATT_ADC_EN_NAME                            "BATT_ADC_EN"   /*!< Identifier name */
#define INIT_GPIO_PINS_BATT_ADC_EN_DIRECTION                 kGPIO_DigitalOutput   /*!< Direction */

/* PTA13 (number AF16), VOL- */
#define INIT_GPIO_PINS_VOL_DOWN_PERIPHERAL                                   PTA   /*!< Device name: PTA */
#define INIT_GPIO_PINS_VOL_DOWN_SIGNAL                                      port   /*!< PTA signal: port */
#define INIT_GPIO_PINS_VOL_DOWN_CHANNEL                                       13   /*!< PTA port channel: 13 */
#define INIT_GPIO_PINS_VOL_DOWN_PIN_NAME                                   PTA13   /*!< Pin name */
#define INIT_GPIO_PINS_VOL_DOWN_PIN_FUNCTION_ID               IOMUXC_PTA13_PTA13   /*!< Pin function id */
#define INIT_GPIO_PINS_VOL_DOWN_LABEL                                     "VOL-"   /*!< Label */
#define INIT_GPIO_PINS_VOL_DOWN_NAME                                  "VOL_DOWN"   /*!< Identifier name */
#define INIT_GPIO_PINS_VOL_DOWN_DIRECTION                     kGPIO_DigitalInput   /*!< Direction */

/* PTA14 (number AF17), WL_REG_ON */
#define INIT_GPIO_PINS_WL_REG_ON_PERIPHERAL                                  PTA   /*!< Device name: PTA */
#define INIT_GPIO_PINS_WL_REG_ON_SIGNAL                                     port   /*!< PTA signal: port */
#define INIT_GPIO_PINS_WL_REG_ON_CHANNEL                                      14   /*!< PTA port channel: 14 */
#define INIT_GPIO_PINS_WL_REG_ON_PIN_NAME                                  PTA14   /*!< Pin name */
#define INIT_GPIO_PINS_WL_REG_ON_PIN_FUNCTION_ID              IOMUXC_PTA14_PTA14   /*!< Pin function id */
#define INIT_GPIO_PINS_WL_REG_ON_LABEL                               "WL_REG_ON"   /*!< Label */
#define INIT_GPIO_PINS_WL_REG_ON_NAME                                "WL_REG_ON"   /*!< Identifier name */
#define INIT_GPIO_PINS_WL_REG_ON_DIRECTION                   kGPIO_DigitalOutput   /*!< Direction */

/* PTA15 (number AF18), BT_REG_ON */
#define INIT_GPIO_PINS_BT_REG_ON_PERIPHERAL                                  PTA   /*!< Device name: PTA */
#define INIT_GPIO_PINS_BT_REG_ON_SIGNAL                                     port   /*!< PTA signal: port */
#define INIT_GPIO_PINS_BT_REG_ON_CHANNEL                                      15   /*!< PTA port channel: 15 */
#define INIT_GPIO_PINS_BT_REG_ON_PIN_NAME                                  PTA15   /*!< Pin name */
#define INIT_GPIO_PINS_BT_REG_ON_PIN_FUNCTION_ID              IOMUXC_PTA15_PTA15   /*!< Pin function id */
#define INIT_GPIO_PINS_BT_REG_ON_LABEL                               "BT_REG_ON"   /*!< Label */
#define INIT_GPIO_PINS_BT_REG_ON_NAME                                "BT_REG_ON"   /*!< Identifier name */
#define INIT_GPIO_PINS_BT_REG_ON_DIRECTION                   kGPIO_DigitalOutput   /*!< Direction */

/* PTA21 (number AB20), M4_PER_EN */
#define INIT_GPIO_PINS_M4_PER_EN_PERIPHERAL                                  PTA   /*!< Device name: PTA */
#define INIT_GPIO_PINS_M4_PER_EN_SIGNAL                                     port   /*!< PTA signal: port */
#define INIT_GPIO_PINS_M4_PER_EN_CHANNEL                                      21   /*!< PTA port channel: 21 */
#define INIT_GPIO_PINS_M4_PER_EN_PIN_NAME                                  PTA21   /*!< Pin name */
#define INIT_GPIO_PINS_M4_PER_EN_PIN_FUNCTION_ID              IOMUXC_PTA21_PTA21   /*!< Pin function id */
#define INIT_GPIO_PINS_M4_PER_EN_LABEL                               "M4_PER_EN"   /*!< Label */
#define INIT_GPIO_PINS_M4_PER_EN_NAME                                "M4_PER_EN"   /*!< Identifier name */
#define INIT_GPIO_PINS_M4_PER_EN_DIRECTION                   kGPIO_DigitalOutput   /*!< Direction */

/* PTA23 (number AD20), AUD_INT# */
#define INIT_GPIO_PINS_AUD_INT_PERIPHERAL                                    PTA   /*!< Device name: PTA */
#define INIT_GPIO_PINS_AUD_INT_SIGNAL                                       port   /*!< PTA signal: port */
#define INIT_GPIO_PINS_AUD_INT_CHANNEL                                        23   /*!< PTA port channel: 23 */
#define INIT_GPIO_PINS_AUD_INT_PIN_NAME                                    PTA23   /*!< Pin name */
#define INIT_GPIO_PINS_AUD_INT_PIN_FUNCTION_ID                IOMUXC_PTA23_PTA23   /*!< Pin function id */
#define INIT_GPIO_PINS_AUD_INT_LABEL                                  "AUD_INT#"   /*!< Label */
#define INIT_GPIO_PINS_AUD_INT_NAME                                    "AUD_INT"   /*!< Identifier name */
#define INIT_GPIO_PINS_AUD_INT_DIRECTION                      kGPIO_DigitalInput   /*!< Direction */

/* PTA24 (number AF20), AUD_PWR_EN */
#define INIT_GPIO_PINS_AUD_PWR_EN_PERIPHERAL                                 PTA   /*!< Device name: PTA */
#define INIT_GPIO_PINS_AUD_PWR_EN_SIGNAL                                    port   /*!< PTA signal: port */
#define INIT_GPIO_PINS_AUD_PWR_EN_CHANNEL                                     24   /*!< PTA port channel: 24 */
#define INIT_GPIO_PINS_AUD_PWR_EN_PIN_NAME                                 PTA24   /*!< Pin name */
#define INIT_GPIO_PINS_AUD_PWR_EN_PIN_FUNCTION_ID             IOMUXC_PTA24_PTA24   /*!< Pin function id */
#define INIT_GPIO_PINS_AUD_PWR_EN_LABEL                             "AUD_PWR_EN"   /*!< Label */
#define INIT_GPIO_PINS_AUD_PWR_EN_NAME                              "AUD_PWR_EN"   /*!< Identifier name */
#define INIT_GPIO_PINS_AUD_PWR_EN_DIRECTION                  kGPIO_DigitalOutput   /*!< Direction */

/* PTA25 (number AG20), A7_POW_EN# */
#define INIT_GPIO_PINS_A7_POW_EN_PERIPHERAL                                  PTA   /*!< Device name: PTA */
#define INIT_GPIO_PINS_A7_POW_EN_SIGNAL                                     port   /*!< PTA signal: port */
#define INIT_GPIO_PINS_A7_POW_EN_CHANNEL                                      25   /*!< PTA port channel: 25 */
#define INIT_GPIO_PINS_A7_POW_EN_PIN_NAME                                  PTA25   /*!< Pin name */
#define INIT_GPIO_PINS_A7_POW_EN_PIN_FUNCTION_ID              IOMUXC_PTA25_PTA25   /*!< Pin function id */
#define INIT_GPIO_PINS_A7_POW_EN_LABEL                              "A7_POW_EN#"   /*!< Label */
#define INIT_GPIO_PINS_A7_POW_EN_NAME                                "A7_POW_EN"   /*!< Identifier name */
#define INIT_GPIO_PINS_A7_POW_EN_DIRECTION                   kGPIO_DigitalOutput   /*!< Direction */

/* PTA3 (number AF14), VOL+ */
#define INIT_GPIO_PINS_VOL_UP_PERIPHERAL                                     PTA   /*!< Device name: PTA */
#define INIT_GPIO_PINS_VOL_UP_SIGNAL                                        port   /*!< PTA signal: port */
#define INIT_GPIO_PINS_VOL_UP_CHANNEL                                          3   /*!< PTA port channel: 3 */
#define INIT_GPIO_PINS_VOL_UP_PIN_NAME                                      PTA3   /*!< Pin name */
#define INIT_GPIO_PINS_VOL_UP_PIN_FUNCTION_ID                   IOMUXC_PTA3_PTA3   /*!< Pin function id */
#define INIT_GPIO_PINS_VOL_UP_LABEL                                       "VOL+"   /*!< Label */
#define INIT_GPIO_PINS_VOL_UP_NAME                                      "VOL_UP"   /*!< Identifier name */
#define INIT_GPIO_PINS_VOL_UP_DIRECTION                      kGPIO_DigitalOutput   /*!< Direction */

/* PTA31 (number AF24), WL_HOST_WAKE */
#define INIT_GPIO_PINS_WL_HOST_WAKE_PERIPHERAL                               PTA   /*!< Device name: PTA */
#define INIT_GPIO_PINS_WL_HOST_WAKE_SIGNAL                                  port   /*!< PTA signal: port */
#define INIT_GPIO_PINS_WL_HOST_WAKE_CHANNEL                                   31   /*!< PTA port channel: 31 */
#define INIT_GPIO_PINS_WL_HOST_WAKE_PIN_NAME                               PTA31   /*!< Pin name */
#define INIT_GPIO_PINS_WL_HOST_WAKE_PIN_FUNCTION_ID           IOMUXC_PTA31_PTA31   /*!< Pin function id */
#define INIT_GPIO_PINS_WL_HOST_WAKE_LABEL                         "WL_HOST_WAKE"   /*!< Label */
#define INIT_GPIO_PINS_WL_HOST_WAKE_NAME                          "WL_HOST_WAKE"   /*!< Identifier name */
#define INIT_GPIO_PINS_WL_HOST_WAKE_DIRECTION                 kGPIO_DigitalInput   /*!< Direction */

/* PTB6 (number AF5), DDR_SW_EN# */
#define INIT_GPIO_PINS_DDR_SW_EN_PERIPHERAL                                  PTB   /*!< Device name: PTB */
#define INIT_GPIO_PINS_DDR_SW_EN_SIGNAL                                     port   /*!< PTB signal: port */
#define INIT_GPIO_PINS_DDR_SW_EN_CHANNEL                                       6   /*!< PTB port channel: 6 */
#define INIT_GPIO_PINS_DDR_SW_EN_PIN_NAME                                   PTB6   /*!< Pin name */
#define INIT_GPIO_PINS_DDR_SW_EN_PIN_FUNCTION_ID                IOMUXC_PTB6_PTB6   /*!< Pin function id */
#define INIT_GPIO_PINS_DDR_SW_EN_LABEL                              "DDR_SW_EN#"   /*!< Label */
#define INIT_GPIO_PINS_DDR_SW_EN_NAME                                "DDR_SW_EN"   /*!< Identifier name */
#define INIT_GPIO_PINS_DDR_SW_EN_DIRECTION                   kGPIO_DigitalOutput   /*!< Direction */

/* PTB7 (number AF6), BT_HOST_WAKE */
#define INIT_GPIO_PINS_BT_HOST_WAKE_PERIPHERAL                               PTB   /*!< Device name: PTB */
#define INIT_GPIO_PINS_BT_HOST_WAKE_SIGNAL                                  port   /*!< PTB signal: port */
#define INIT_GPIO_PINS_BT_HOST_WAKE_CHANNEL                                    7   /*!< PTB port channel: 7 */
#define INIT_GPIO_PINS_BT_HOST_WAKE_PIN_NAME                                PTB7   /*!< Pin name */
#define INIT_GPIO_PINS_BT_HOST_WAKE_PIN_FUNCTION_ID             IOMUXC_PTB7_PTB7   /*!< Pin function id */
#define INIT_GPIO_PINS_BT_HOST_WAKE_LABEL                         "BT_HOST_WAKE"   /*!< Label */
#define INIT_GPIO_PINS_BT_HOST_WAKE_NAME                          "BT_HOST_WAKE"   /*!< Identifier name */
#define INIT_GPIO_PINS_BT_HOST_WAKE_DIRECTION                 kGPIO_DigitalInput   /*!< Direction */

/* PTB9 (number AD7), SEN_INT# */
#define INIT_GPIO_PINS_SEN_INT_PERIPHERAL                                    PTB   /*!< Device name: PTB */
#define INIT_GPIO_PINS_SEN_INT_SIGNAL                                       port   /*!< PTB signal: port */
#define INIT_GPIO_PINS_SEN_INT_CHANNEL                                         9   /*!< PTB port channel: 9 */
#define INIT_GPIO_PINS_SEN_INT_PIN_NAME                                     PTB9   /*!< Pin name */
#define INIT_GPIO_PINS_SEN_INT_PIN_FUNCTION_ID                  IOMUXC_PTB9_PTB9   /*!< Pin function id */
#define INIT_GPIO_PINS_SEN_INT_LABEL                                  "SEN_INT#"   /*!< Label */
#define INIT_GPIO_PINS_SEN_INT_NAME                                    "SEN_INT"   /*!< Identifier name */
#define INIT_GPIO_PINS_SEN_INT_DIRECTION                      kGPIO_DigitalInput   /*!< Direction */

/* PTB11 (number AB7), PMIC_INT# */
#define INIT_GPIO_PINS_PMIC_INT_PERIPHERAL                                   PTB   /*!< Device name: PTB */
#define INIT_GPIO_PINS_PMIC_INT_SIGNAL                                      port   /*!< PTB signal: port */
#define INIT_GPIO_PINS_PMIC_INT_CHANNEL                                       11   /*!< PTB port channel: 11 */
#define INIT_GPIO_PINS_PMIC_INT_PIN_NAME                                   PTB11   /*!< Pin name */
#define INIT_GPIO_PINS_PMIC_INT_PIN_FUNCTION_ID               IOMUXC_PTB11_PTB11   /*!< Pin function id */
#define INIT_GPIO_PINS_PMIC_INT_LABEL                                "PMIC_INT#"   /*!< Label */
#define INIT_GPIO_PINS_PMIC_INT_NAME                                  "PMIC_INT"   /*!< Identifier name */
#define INIT_GPIO_PINS_PMIC_INT_DIRECTION                     kGPIO_DigitalInput   /*!< Direction */

/* PTC0 (coord D18), USB_OTG_PWR_EN */
#define INIT_GPIO_PINS_USB_OTG_PWR_EN_PERIPHERAL                             PTC   /*!< Device name: PTC */
#define INIT_GPIO_PINS_USB_OTG_PWR_EN_SIGNAL                                port   /*!< PTC signal: port */
#define INIT_GPIO_PINS_USB_OTG_PWR_EN_CHANNEL                                  0   /*!< PTC port channel: 0 */
#define INIT_GPIO_PINS_USB_OTG_PWR_EN_PIN_NAME                              PTC0   /*!< Pin name */
#define INIT_GPIO_PINS_USB_OTG_PWR_EN_PIN_FUNCTION_ID           IOMUXC_PTC0_PTC0   /*!< Pin function id */
#define INIT_GPIO_PINS_USB_OTG_PWR_EN_LABEL                     "USB_OTG_PWR_EN"   /*!< Label */
#define INIT_GPIO_PINS_USB_OTG_PWR_EN_NAME                      "USB_OTG_PWR_EN"   /*!< Identifier name */
#define INIT_GPIO_PINS_USB_OTG_PWR_EN_DIRECTION              kGPIO_DigitalOutput   /*!< Direction */

/* PTC10 (coord B15), SD0_CD */
#define INIT_GPIO_PINS_SD0_CD_PERIPHERAL                                     PTC   /*!< Device name: PTC */
#define INIT_GPIO_PINS_SD0_CD_SIGNAL                                        port   /*!< PTC signal: port */
#define INIT_GPIO_PINS_SD0_CD_CHANNEL                                         10   /*!< PTC port channel: 10 */
#define INIT_GPIO_PINS_SD0_CD_PIN_NAME                                     PTC10   /*!< Pin name */
#define INIT_GPIO_PINS_SD0_CD_PIN_FUNCTION_ID                 IOMUXC_PTC10_PTC10   /*!< Pin function id */
#define INIT_GPIO_PINS_SD0_CD_LABEL                                     "SD0_CD"   /*!< Label */
#define INIT_GPIO_PINS_SD0_CD_NAME                                      "SD0_CD"   /*!< Identifier name */
#define INIT_GPIO_PINS_SD0_CD_DIRECTION                       kGPIO_DigitalInput   /*!< Direction */

/* PTC11 (coord B14), USB_CC_SEL */
#define INIT_GPIO_PINS_USB_CC_SEL_PERIPHERAL                                 PTC   /*!< Device name: PTC */
#define INIT_GPIO_PINS_USB_CC_SEL_SIGNAL                                    port   /*!< PTC signal: port */
#define INIT_GPIO_PINS_USB_CC_SEL_CHANNEL                                     11   /*!< PTC port channel: 11 */
#define INIT_GPIO_PINS_USB_CC_SEL_PIN_NAME                                 PTC11   /*!< Pin name */
#define INIT_GPIO_PINS_USB_CC_SEL_PIN_FUNCTION_ID             IOMUXC_PTC11_PTC11   /*!< Pin function id */
#define INIT_GPIO_PINS_USB_CC_SEL_LABEL                             "USB_CC_SEL"   /*!< Label */
#define INIT_GPIO_PINS_USB_CC_SEL_NAME                              "USB_CC_SEL"   /*!< Identifier name */
#define INIT_GPIO_PINS_USB_CC_SEL_DIRECTION                   kGPIO_DigitalInput   /*!< Direction */

/* PTC12 (coord A14), USB_INT_B */
#define INIT_GPIO_PINS_USB_INT_B_PERIPHERAL                                  PTC   /*!< Device name: PTC */
#define INIT_GPIO_PINS_USB_INT_B_SIGNAL                                     port   /*!< PTC signal: port */
#define INIT_GPIO_PINS_USB_INT_B_CHANNEL                                      12   /*!< PTC port channel: 12 */
#define INIT_GPIO_PINS_USB_INT_B_PIN_NAME                                  PTC12   /*!< Pin name */
#define INIT_GPIO_PINS_USB_INT_B_PIN_FUNCTION_ID              IOMUXC_PTC12_PTC12   /*!< Pin function id */
#define INIT_GPIO_PINS_USB_INT_B_LABEL                               "USB_INT_B"   /*!< Label */
#define INIT_GPIO_PINS_USB_INT_B_NAME                                "USB_INT_B"   /*!< Identifier name */
#define INIT_GPIO_PINS_USB_INT_B_DIRECTION                    kGPIO_DigitalInput   /*!< Direction */

/* PTC14 (coord E13), PTC14 */
#define INIT_GPIO_PINS_PTC14_PERIPHERAL                                      PTC   /*!< Device name: PTC */
#define INIT_GPIO_PINS_PTC14_SIGNAL                                         port   /*!< PTC signal: port */
#define INIT_GPIO_PINS_PTC14_CHANNEL                                          14   /*!< PTC port channel: 14 */
#define INIT_GPIO_PINS_PTC14_PIN_NAME                                      PTC14   /*!< Pin name */
#define INIT_GPIO_PINS_PTC14_PIN_FUNCTION_ID                  IOMUXC_PTC14_PTC14   /*!< Pin function id */
#define INIT_GPIO_PINS_PTC14_LABEL                                       "PTC14"   /*!< Label */
#define INIT_GPIO_PINS_PTC14_NAME                                        "PTC14"   /*!< Identifier name */
#define INIT_GPIO_PINS_PTC14_DIRECTION                       kGPIO_DigitalOutput   /*!< Direction */

/* PTC15 (coord F13), PTC15 */
#define INIT_GPIO_PINS_PTC15_PERIPHERAL                                      PTC   /*!< Device name: PTC */
#define INIT_GPIO_PINS_PTC15_SIGNAL                                         port   /*!< PTC signal: port */
#define INIT_GPIO_PINS_PTC15_CHANNEL                                          15   /*!< PTC port channel: 15 */
#define INIT_GPIO_PINS_PTC15_PIN_NAME                                      PTC15   /*!< Pin name */
#define INIT_GPIO_PINS_PTC15_PIN_FUNCTION_ID                  IOMUXC_PTC15_PTC15   /*!< Pin function id */
#define INIT_GPIO_PINS_PTC15_LABEL                                       "PTC15"   /*!< Label */
#define INIT_GPIO_PINS_PTC15_NAME                                        "PTC15"   /*!< Identifier name */
#define INIT_GPIO_PINS_PTC15_DIRECTION                       kGPIO_DigitalOutput   /*!< Direction */

/* PTC17 (coord G12), PTC17 */
#define INIT_GPIO_PINS_PTC17_PERIPHERAL                                      PTC   /*!< Device name: PTC */
#define INIT_GPIO_PINS_PTC17_SIGNAL                                         port   /*!< PTC signal: port */
#define INIT_GPIO_PINS_PTC17_CHANNEL                                          17   /*!< PTC port channel: 17 */
#define INIT_GPIO_PINS_PTC17_PIN_NAME                                      PTC17   /*!< Pin name */
#define INIT_GPIO_PINS_PTC17_PIN_FUNCTION_ID                  IOMUXC_PTC17_PTC17   /*!< Pin function id */
#define INIT_GPIO_PINS_PTC17_LABEL                                       "PTC17"   /*!< Label */
#define INIT_GPIO_PINS_PTC17_NAME                                        "PTC17"   /*!< Identifier name */
#define INIT_GPIO_PINS_PTC17_DIRECTION                       kGPIO_DigitalOutput   /*!< Direction */

/* PTC18 (coord F12), DSI_HDMI_INT# */
#define INIT_GPIO_PINS_DSI_HDMI_INT_PERIPHERAL                               PTC   /*!< Device name: PTC */
#define INIT_GPIO_PINS_DSI_HDMI_INT_SIGNAL                                  port   /*!< PTC signal: port */
#define INIT_GPIO_PINS_DSI_HDMI_INT_CHANNEL                                   18   /*!< PTC port channel: 18 */
#define INIT_GPIO_PINS_DSI_HDMI_INT_PIN_NAME                               PTC18   /*!< Pin name */
#define INIT_GPIO_PINS_DSI_HDMI_INT_PIN_FUNCTION_ID           IOMUXC_PTC18_PTC18   /*!< Pin function id */
#define INIT_GPIO_PINS_DSI_HDMI_INT_LABEL                        "DSI_HDMI_INT#"   /*!< Label */
#define INIT_GPIO_PINS_DSI_HDMI_INT_NAME                          "DSI_HDMI_INT"   /*!< Identifier name */
#define INIT_GPIO_PINS_DSI_HDMI_INT_DIRECTION                 kGPIO_DigitalInput   /*!< Direction */

/* PTC19 (coord E12), MIPI_RESET_B */
#define INIT_GPIO_PINS_MIPI_RESET_B_PERIPHERAL                               PTC   /*!< Device name: PTC */
#define INIT_GPIO_PINS_MIPI_RESET_B_SIGNAL                                  port   /*!< PTC signal: port */
#define INIT_GPIO_PINS_MIPI_RESET_B_CHANNEL                                   19   /*!< PTC port channel: 19 */
#define INIT_GPIO_PINS_MIPI_RESET_B_PIN_NAME                               PTC19   /*!< Pin name */
#define INIT_GPIO_PINS_MIPI_RESET_B_PIN_FUNCTION_ID           IOMUXC_PTC19_PTC19   /*!< Pin function id */
#define INIT_GPIO_PINS_MIPI_RESET_B_LABEL                         "MIPI_RESET_B"   /*!< Label */
#define INIT_GPIO_PINS_MIPI_RESET_B_NAME                          "MIPI_RESET_B"   /*!< Identifier name */
#define INIT_GPIO_PINS_MIPI_RESET_B_DIRECTION                kGPIO_DigitalOutput   /*!< Direction */

/* PTE12 (coord B8), BT_DEV_WAKE */
#define INIT_GPIO_PINS_BT_DEV_WAKE_PERIPHERAL                                PTE   /*!< Device name: PTE */
#define INIT_GPIO_PINS_BT_DEV_WAKE_SIGNAL                                   port   /*!< PTE signal: port */
#define INIT_GPIO_PINS_BT_DEV_WAKE_CHANNEL                                    12   /*!< PTE port channel: 12 */
#define INIT_GPIO_PINS_BT_DEV_WAKE_PIN_NAME                                PTE12   /*!< Pin name */
#define INIT_GPIO_PINS_BT_DEV_WAKE_PIN_FUNCTION_ID            IOMUXC_PTE12_PTE12   /*!< Pin function id */
#define INIT_GPIO_PINS_BT_DEV_WAKE_LABEL                           "BT_DEV_WAKE"   /*!< Label */
#define INIT_GPIO_PINS_BT_DEV_WAKE_NAME                            "BT_DEV_WAKE"   /*!< Identifier name */
#define INIT_GPIO_PINS_BT_DEV_WAKE_DIRECTION                 kGPIO_DigitalOutput   /*!< Direction */

/* PTF0 (coord D2), TOUCH_INT# */
#define INIT_GPIO_PINS_TOUCH_INT_PERIPHERAL                                  PTF   /*!< Device name: PTF */
#define INIT_GPIO_PINS_TOUCH_INT_SIGNAL                                     port   /*!< PTF signal: port */
#define INIT_GPIO_PINS_TOUCH_INT_CHANNEL                                       0   /*!< PTF port channel: 0 */
#define INIT_GPIO_PINS_TOUCH_INT_PIN_NAME                                   PTF0   /*!< Pin name */
#define INIT_GPIO_PINS_TOUCH_INT_PIN_FUNCTION_ID                IOMUXC_PTF0_PTF0   /*!< Pin function id */
#define INIT_GPIO_PINS_TOUCH_INT_LABEL                              "TOUCH_INT#"   /*!< Label */
#define INIT_GPIO_PINS_TOUCH_INT_NAME                                "TOUCH_INT"   /*!< Identifier name */
#define INIT_GPIO_PINS_TOUCH_INT_DIRECTION                    kGPIO_DigitalInput   /*!< Direction */

/* PTF1 (coord B2), TOUCH_RST_B */
#define INIT_GPIO_PINS_TOUCH_RST_B_PERIPHERAL                                PTF   /*!< Device name: PTF */
#define INIT_GPIO_PINS_TOUCH_RST_B_SIGNAL                                   port   /*!< PTF signal: port */
#define INIT_GPIO_PINS_TOUCH_RST_B_CHANNEL                                     1   /*!< PTF port channel: 1 */
#define INIT_GPIO_PINS_TOUCH_RST_B_PIN_NAME                                 PTF1   /*!< Pin name */
#define INIT_GPIO_PINS_TOUCH_RST_B_PIN_FUNCTION_ID              IOMUXC_PTF1_PTF1   /*!< Pin function id */
#define INIT_GPIO_PINS_TOUCH_RST_B_LABEL                           "TOUCH_RST_B"   /*!< Label */
#define INIT_GPIO_PINS_TOUCH_RST_B_NAME                            "TOUCH_RST_B"   /*!< Identifier name */
#define INIT_GPIO_PINS_TOUCH_RST_B_DIRECTION                 kGPIO_DigitalOutput   /*!< Direction */

/* PTF10 (coord G5), PTF10 */
#define INIT_GPIO_PINS_PTF10_PERIPHERAL                                      PTF   /*!< Device name: PTF */
#define INIT_GPIO_PINS_PTF10_SIGNAL                                         port   /*!< PTF signal: port */
#define INIT_GPIO_PINS_PTF10_CHANNEL                                          10   /*!< PTF port channel: 10 */
#define INIT_GPIO_PINS_PTF10_PIN_NAME                                      PTF10   /*!< Pin name */
#define INIT_GPIO_PINS_PTF10_PIN_FUNCTION_ID                  IOMUXC_PTF10_PTF10   /*!< Pin function id */
#define INIT_GPIO_PINS_PTF10_LABEL                                       "PTF10"   /*!< Label */
#define INIT_GPIO_PINS_PTF10_NAME                                        "PTF10"   /*!< Identifier name */
#define INIT_GPIO_PINS_PTF10_DIRECTION                       kGPIO_DigitalOutput   /*!< Direction */

/* PTF11 (coord G6), PTF11 */
#define INIT_GPIO_PINS_PTF11_PERIPHERAL                                      PTF   /*!< Device name: PTF */
#define INIT_GPIO_PINS_PTF11_SIGNAL                                         port   /*!< PTF signal: port */
#define INIT_GPIO_PINS_PTF11_CHANNEL                                          11   /*!< PTF port channel: 11 */
#define INIT_GPIO_PINS_PTF11_PIN_NAME                                      PTF11   /*!< Pin name */
#define INIT_GPIO_PINS_PTF11_PIN_FUNCTION_ID                  IOMUXC_PTF11_PTF11   /*!< Pin function id */
#define INIT_GPIO_PINS_PTF11_LABEL                                       "PTF11"   /*!< Label */
#define INIT_GPIO_PINS_PTF11_NAME                                        "PTF11"   /*!< Identifier name */
#define INIT_GPIO_PINS_PTF11_DIRECTION                       kGPIO_DigitalOutput   /*!< Direction */

/* PTA2 (number AG14), I2S0_RXD0 */
#define INIT_I2S_PINS_I2S0_RXD0_PERIPHERAL                                  I2S0   /*!< Device name: I2S0 */
#define INIT_I2S_PINS_I2S0_RXD0_SIGNAL                                   i2s_rxd   /*!< I2S0 signal: i2s_rxd */
#define INIT_I2S_PINS_I2S0_RXD0_CHANNEL                                        0   /*!< I2S0 i2s_rxd channel: 0 */
#define INIT_I2S_PINS_I2S0_RXD0_PIN_NAME                                    PTA2   /*!< Pin name */
#define INIT_I2S_PINS_I2S0_RXD0_PIN_FUNCTION_ID            IOMUXC_PTA2_I2S0_RXD0   /*!< Pin function id */
#define INIT_I2S_PINS_I2S0_RXD0_LABEL                                "I2S0_RXD0"   /*!< Label */
#define INIT_I2S_PINS_I2S0_RXD0_NAME                                 "I2S0_RXD0"   /*!< Identifier name */

/* PTA4 (number AD15), I2S0_MCLK */
#define INIT_I2S_PINS_I2S0_MCLK_PERIPHERAL                                  I2S0   /*!< Device name: I2S0 */
#define INIT_I2S_PINS_I2S0_MCLK_SIGNAL                                  i2s_mclk   /*!< I2S0 signal: i2s_mclk */
#define INIT_I2S_PINS_I2S0_MCLK_PIN_NAME                                    PTA4   /*!< Pin name */
#define INIT_I2S_PINS_I2S0_MCLK_PIN_FUNCTION_ID            IOMUXC_PTA4_I2S0_MCLK   /*!< Pin function id */
#define INIT_I2S_PINS_I2S0_MCLK_LABEL                                "I2S0_MCLK"   /*!< Label */
#define INIT_I2S_PINS_I2S0_MCLK_NAME                                 "I2S0_MCLK"   /*!< Identifier name */

/* PTA5 (number AC15), I2S0_TX_BCLK */
#define INIT_I2S_PINS_I2S0_TX_BCLK_PERIPHERAL                               I2S0   /*!< Device name: I2S0 */
#define INIT_I2S_PINS_I2S0_TX_BCLK_SIGNAL                            i2s_tx_bclk   /*!< I2S0 signal: i2s_tx_bclk */
#define INIT_I2S_PINS_I2S0_TX_BCLK_PIN_NAME                                 PTA5   /*!< Pin name */
#define INIT_I2S_PINS_I2S0_TX_BCLK_PIN_FUNCTION_ID      IOMUXC_PTA5_I2S0_TX_BCLK   /*!< Pin function id */
#define INIT_I2S_PINS_I2S0_TX_BCLK_LABEL                          "I2S0_TX_BCLK"   /*!< Label */
#define INIT_I2S_PINS_I2S0_TX_BCLK_NAME                           "I2S0_TX_BCLK"   /*!< Identifier name */

/* PTA6 (number AB15), I2S0_TX_FS */
#define INIT_I2S_PINS_I2S0_TX_FS_PERIPHERAL                                 I2S0   /*!< Device name: I2S0 */
#define INIT_I2S_PINS_I2S0_TX_FS_SIGNAL                                i2s_tx_fs   /*!< I2S0 signal: i2s_tx_fs */
#define INIT_I2S_PINS_I2S0_TX_FS_PIN_NAME                                   PTA6   /*!< Pin name */
#define INIT_I2S_PINS_I2S0_TX_FS_PIN_FUNCTION_ID          IOMUXC_PTA6_I2S0_TX_FS   /*!< Pin function id */
#define INIT_I2S_PINS_I2S0_TX_FS_LABEL                              "I2S0_TX_FS"   /*!< Label */
#define INIT_I2S_PINS_I2S0_TX_FS_NAME                               "I2S0_TX_FS"   /*!< Identifier name */

/* PTA7 (number AD14), I2S0_TXD0 */
#define INIT_I2S_PINS_I2S0_TXD0_PERIPHERAL                                  I2S0   /*!< Device name: I2S0 */
#define INIT_I2S_PINS_I2S0_TXD0_SIGNAL                                   i2s_txd   /*!< I2S0 signal: i2s_txd */
#define INIT_I2S_PINS_I2S0_TXD0_CHANNEL                                        0   /*!< I2S0 i2s_txd channel: 0 */
#define INIT_I2S_PINS_I2S0_TXD0_PIN_NAME                                    PTA7   /*!< Pin name */
#define INIT_I2S_PINS_I2S0_TXD0_PIN_FUNCTION_ID            IOMUXC_PTA7_I2S0_TXD0   /*!< Pin function id */
#define INIT_I2S_PINS_I2S0_TXD0_LABEL                                "I2S0_TXD0"   /*!< Label */
#define INIT_I2S_PINS_I2S0_TXD0_NAME                                 "I2S0_TXD0"   /*!< Identifier name */

/* PTB1 (number AF2), I2S1_TX_BCLK */
#define INIT_I2S_PINS_I2S1_TX_BCLK_PERIPHERAL                               I2S1   /*!< Device name: I2S1 */
#define INIT_I2S_PINS_I2S1_TX_BCLK_SIGNAL                            i2s_tx_bclk   /*!< I2S1 signal: i2s_tx_bclk */
#define INIT_I2S_PINS_I2S1_TX_BCLK_PIN_NAME                                 PTB1   /*!< Pin name */
#define INIT_I2S_PINS_I2S1_TX_BCLK_PIN_FUNCTION_ID      IOMUXC_PTB1_I2S1_TX_BCLK   /*!< Pin function id */
#define INIT_I2S_PINS_I2S1_TX_BCLK_LABEL                          "I2S1_TX_BCLK"   /*!< Label */
#define INIT_I2S_PINS_I2S1_TX_BCLK_NAME                           "I2S1_TX_BCLK"   /*!< Identifier name */

/* PTB2 (number AE3), I2S1_TX_FS */
#define INIT_I2S_PINS_I2S1_TX_FS_PERIPHERAL                                 I2S1   /*!< Device name: I2S1 */
#define INIT_I2S_PINS_I2S1_TX_FS_SIGNAL                                i2s_tx_fs   /*!< I2S1 signal: i2s_tx_fs */
#define INIT_I2S_PINS_I2S1_TX_FS_PIN_NAME                                   PTB2   /*!< Pin name */
#define INIT_I2S_PINS_I2S1_TX_FS_PIN_FUNCTION_ID          IOMUXC_PTB2_I2S1_TX_FS   /*!< Pin function id */
#define INIT_I2S_PINS_I2S1_TX_FS_LABEL                              "I2S1_TX_FS"   /*!< Label */
#define INIT_I2S_PINS_I2S1_TX_FS_NAME                               "I2S1_TX_FS"   /*!< Identifier name */

/* PTB3 (number AE4), I2S1_TXD0 */
#define INIT_I2S_PINS_I2S1_TXD0_PERIPHERAL                                  I2S1   /*!< Device name: I2S1 */
#define INIT_I2S_PINS_I2S1_TXD0_SIGNAL                                   i2s_txd   /*!< I2S1 signal: i2s_txd */
#define INIT_I2S_PINS_I2S1_TXD0_CHANNEL                                        0   /*!< I2S1 i2s_txd channel: 0 */
#define INIT_I2S_PINS_I2S1_TXD0_PIN_NAME                                    PTB3   /*!< Pin name */
#define INIT_I2S_PINS_I2S1_TXD0_PIN_FUNCTION_ID            IOMUXC_PTB3_I2S1_TXD0   /*!< Pin function id */
#define INIT_I2S_PINS_I2S1_TXD0_LABEL                                "I2S1_TXD0"   /*!< Label */
#define INIT_I2S_PINS_I2S1_TXD0_NAME                                 "I2S1_TXD0"   /*!< Identifier name */

/* PTB10 (number AC7), I2S1_RXD0 */
#define INIT_I2S_PINS_I2S1_RXD0_PERIPHERAL                                  I2S1   /*!< Device name: I2S1 */
#define INIT_I2S_PINS_I2S1_RXD0_SIGNAL                                   i2s_rxd   /*!< I2S1 signal: i2s_rxd */
#define INIT_I2S_PINS_I2S1_RXD0_CHANNEL                                        0   /*!< I2S1 i2s_rxd channel: 0 */
#define INIT_I2S_PINS_I2S1_RXD0_PIN_NAME                                   PTB10   /*!< Pin name */
#define INIT_I2S_PINS_I2S1_RXD0_PIN_FUNCTION_ID           IOMUXC_PTB10_I2S1_RXD0   /*!< Pin function id */
#define INIT_I2S_PINS_I2S1_RXD0_LABEL                                "I2S1_RXD0"   /*!< Label */
#define INIT_I2S_PINS_I2S1_RXD0_NAME                                 "I2S1_RXD0"   /*!< Identifier name */

/* PTA8 (number AB16), UART2_CTS */
#define INIT_UART_PINS_UART2_CTS_PERIPHERAL                              LPUART2   /*!< Device name: LPUART2 */
#define INIT_UART_PINS_UART2_CTS_SIGNAL                             lpuart_cts_b   /*!< LPUART2 signal: lpuart_cts_b */
#define INIT_UART_PINS_UART2_CTS_PIN_NAME                                   PTA8   /*!< Pin name */
#define INIT_UART_PINS_UART2_CTS_PIN_FUNCTION_ID       IOMUXC_PTA8_LPUART2_CTS_B   /*!< Pin function id */
#define INIT_UART_PINS_UART2_CTS_LABEL                               "UART2_CTS"   /*!< Label */
#define INIT_UART_PINS_UART2_CTS_NAME                                "UART2_CTS"   /*!< Identifier name */

/* PTA9 (number AC16), UART2_RTS */
#define INIT_UART_PINS_UART2_RTS_PERIPHERAL                              LPUART2   /*!< Device name: LPUART2 */
#define INIT_UART_PINS_UART2_RTS_SIGNAL                             lpuart_rts_b   /*!< LPUART2 signal: lpuart_rts_b */
#define INIT_UART_PINS_UART2_RTS_PIN_NAME                                   PTA9   /*!< Pin name */
#define INIT_UART_PINS_UART2_RTS_PIN_FUNCTION_ID       IOMUXC_PTA9_LPUART2_RTS_B   /*!< Pin function id */
#define INIT_UART_PINS_UART2_RTS_LABEL                               "UART2_RTS"   /*!< Label */
#define INIT_UART_PINS_UART2_RTS_NAME                                "UART2_RTS"   /*!< Identifier name */

/* PTA10 (number AD16), UART2_TX */
#define INIT_UART_PINS_UART2_TX_PERIPHERAL                               LPUART2   /*!< Device name: LPUART2 */
#define INIT_UART_PINS_UART2_TX_SIGNAL                                 lpuart_tx   /*!< LPUART2 signal: lpuart_tx */
#define INIT_UART_PINS_UART2_TX_PIN_NAME                                   PTA10   /*!< Pin name */
#define INIT_UART_PINS_UART2_TX_PIN_FUNCTION_ID          IOMUXC_PTA10_LPUART2_TX   /*!< Pin function id */
#define INIT_UART_PINS_UART2_TX_LABEL                                 "UART2_TX"   /*!< Label */
#define INIT_UART_PINS_UART2_TX_NAME                                  "UART2_TX"   /*!< Identifier name */

/* PTA11 (number AD18), UART2_RX */
#define INIT_UART_PINS_UART2_RX_PERIPHERAL                               LPUART2   /*!< Device name: LPUART2 */
#define INIT_UART_PINS_UART2_RX_SIGNAL                                 lpuart_rx   /*!< LPUART2 signal: lpuart_rx */
#define INIT_UART_PINS_UART2_RX_PIN_NAME                                   PTA11   /*!< Pin name */
#define INIT_UART_PINS_UART2_RX_PIN_FUNCTION_ID          IOMUXC_PTA11_LPUART2_RX   /*!< Pin function id */
#define INIT_UART_PINS_UART2_RX_LABEL                                 "UART2_RX"   /*!< Label */
#define INIT_UART_PINS_UART2_RX_NAME                                  "UART2_RX"   /*!< Identifier name */

/* PTA18 (number AC19), UART0_TX */
#define INIT_UART_PINS_UART0_TX_PERIPHERAL                               LPUART0   /*!< Device name: LPUART0 */
#define INIT_UART_PINS_UART0_TX_SIGNAL                                 lpuart_tx   /*!< LPUART0 signal: lpuart_tx */
#define INIT_UART_PINS_UART0_TX_PIN_NAME                                   PTA18   /*!< Pin name */
#define INIT_UART_PINS_UART0_TX_PIN_FUNCTION_ID          IOMUXC_PTA18_LPUART0_TX   /*!< Pin function id */
#define INIT_UART_PINS_UART0_TX_LABEL                                 "UART0_TX"   /*!< Label */
#define INIT_UART_PINS_UART0_TX_NAME                                  "UART0_TX"   /*!< Identifier name */

/* PTA19 (number AB19), UART0_RX */
#define INIT_UART_PINS_UART0_RX_PERIPHERAL                               LPUART0   /*!< Device name: LPUART0 */
#define INIT_UART_PINS_UART0_RX_SIGNAL                                 lpuart_rx   /*!< LPUART0 signal: lpuart_rx */
#define INIT_UART_PINS_UART0_RX_PIN_NAME                                   PTA19   /*!< Pin name */
#define INIT_UART_PINS_UART0_RX_PIN_FUNCTION_ID          IOMUXC_PTA19_LPUART0_RX   /*!< Pin function id */
#define INIT_UART_PINS_UART0_RX_LABEL                                 "UART0_RX"   /*!< Label */
#define INIT_UART_PINS_UART0_RX_NAME                                  "UART0_RX"   /*!< Identifier name */

/* PTC2 (coord F17), UART4_TX */
#define INIT_UART_PINS_UART4_TX_PERIPHERAL                               LPUART4   /*!< Device name: LPUART4 */
#define INIT_UART_PINS_UART4_TX_SIGNAL                                 lpuart_tx   /*!< LPUART4 signal: lpuart_tx */
#define INIT_UART_PINS_UART4_TX_PIN_NAME                                    PTC2   /*!< Pin name */
#define INIT_UART_PINS_UART4_TX_PIN_FUNCTION_ID           IOMUXC_PTC2_LPUART4_TX   /*!< Pin function id */
#define INIT_UART_PINS_UART4_TX_LABEL                                 "UART4_TX"   /*!< Label */
#define INIT_UART_PINS_UART4_TX_NAME                                  "UART4_TX"   /*!< Identifier name */

/* PTC3 (coord G17), UART4_RX */
#define INIT_UART_PINS_UART4_RX_PERIPHERAL                               LPUART4   /*!< Device name: LPUART4 */
#define INIT_UART_PINS_UART4_RX_SIGNAL                                 lpuart_rx   /*!< LPUART4 signal: lpuart_rx */
#define INIT_UART_PINS_UART4_RX_PIN_NAME                                    PTC3   /*!< Pin name */
#define INIT_UART_PINS_UART4_RX_PIN_FUNCTION_ID           IOMUXC_PTC3_LPUART4_RX   /*!< Pin function id */
#define INIT_UART_PINS_UART4_RX_LABEL                                 "UART4_RX"   /*!< Label */
#define INIT_UART_PINS_UART4_RX_NAME                                  "UART4_RX"   /*!< Identifier name */

/* PTE8 (coord F9), UART6_CTS */
#define INIT_UART_PINS_UART6_CTS_PERIPHERAL                              LPUART6   /*!< Device name: LPUART6 */
#define INIT_UART_PINS_UART6_CTS_SIGNAL                             lpuart_cts_b   /*!< LPUART6 signal: lpuart_cts_b */
#define INIT_UART_PINS_UART6_CTS_PIN_NAME                                   PTE8   /*!< Pin name */
#define INIT_UART_PINS_UART6_CTS_PIN_FUNCTION_ID       IOMUXC_PTE8_LPUART6_CTS_B   /*!< Pin function id */
#define INIT_UART_PINS_UART6_CTS_LABEL                               "UART6_CTS"   /*!< Label */
#define INIT_UART_PINS_UART6_CTS_NAME                                "UART6_CTS"   /*!< Identifier name */

/* PTE9 (coord G9), UART6_RTS */
#define INIT_UART_PINS_UART6_RTS_PERIPHERAL                              LPUART6   /*!< Device name: LPUART6 */
#define INIT_UART_PINS_UART6_RTS_SIGNAL                             lpuart_rts_b   /*!< LPUART6 signal: lpuart_rts_b */
#define INIT_UART_PINS_UART6_RTS_PIN_NAME                                   PTE9   /*!< Pin name */
#define INIT_UART_PINS_UART6_RTS_PIN_FUNCTION_ID       IOMUXC_PTE9_LPUART6_RTS_B   /*!< Pin function id */
#define INIT_UART_PINS_UART6_RTS_LABEL                               "UART6_RTS"   /*!< Label */
#define INIT_UART_PINS_UART6_RTS_NAME                                "UART6_RTS"   /*!< Identifier name */

/* PTE10 (coord D8), UART6_TX */
#define INIT_UART_PINS_UART6_TX_PERIPHERAL                               LPUART6   /*!< Device name: LPUART6 */
#define INIT_UART_PINS_UART6_TX_SIGNAL                                 lpuart_tx   /*!< LPUART6 signal: lpuart_tx */
#define INIT_UART_PINS_UART6_TX_PIN_NAME                                   PTE10   /*!< Pin name */
#define INIT_UART_PINS_UART6_TX_PIN_FUNCTION_ID          IOMUXC_PTE10_LPUART6_TX   /*!< Pin function id */
#define INIT_UART_PINS_UART6_TX_LABEL                                 "UART6_TX"   /*!< Label */
#define INIT_UART_PINS_UART6_TX_NAME                                  "UART6_TX"   /*!< Identifier name */

/* PTE11 (coord A8), UART6_RX */
#define INIT_UART_PINS_UART6_RX_PERIPHERAL                               LPUART6   /*!< Device name: LPUART6 */
#define INIT_UART_PINS_UART6_RX_SIGNAL                                 lpuart_rx   /*!< LPUART6 signal: lpuart_rx */
#define INIT_UART_PINS_UART6_RX_PIN_NAME                                   PTE11   /*!< Pin name */
#define INIT_UART_PINS_UART6_RX_PIN_FUNCTION_ID          IOMUXC_PTE11_LPUART6_RX   /*!< Pin function id */
#define INIT_UART_PINS_UART6_RX_LABEL                                 "UART6_RX"   /*!< Label */
#define INIT_UART_PINS_UART6_RX_NAME                                  "UART6_RX"   /*!< Identifier name */

/* PTA16 (number AG18), I2C0_SCL */
#define INIT_I2C_PINS_I2C0_SCL_PERIPHERAL                                 LPI2C0   /*!< Device name: LPI2C0 */
#define INIT_I2C_PINS_I2C0_SCL_SIGNAL                                  lpi2c_scl   /*!< LPI2C0 signal: lpi2c_scl */
#define INIT_I2C_PINS_I2C0_SCL_PIN_NAME                                    PTA16   /*!< Pin name */
#define INIT_I2C_PINS_I2C0_SCL_PIN_FUNCTION_ID           IOMUXC_PTA16_LPI2C0_SCL   /*!< Pin function id */
#define INIT_I2C_PINS_I2C0_SCL_LABEL                                  "I2C0_SCL"   /*!< Label */
#define INIT_I2C_PINS_I2C0_SCL_NAME                                   "I2C0_SCL"   /*!< Identifier name */

/* PTA17 (number AD19), I2C0_SDA */
#define INIT_I2C_PINS_I2C0_SDA_PERIPHERAL                                 LPI2C0   /*!< Device name: LPI2C0 */
#define INIT_I2C_PINS_I2C0_SDA_SIGNAL                                  lpi2c_sda   /*!< LPI2C0 signal: lpi2c_sda */
#define INIT_I2C_PINS_I2C0_SDA_PIN_NAME                                    PTA17   /*!< Pin name */
#define INIT_I2C_PINS_I2C0_SDA_PIN_FUNCTION_ID           IOMUXC_PTA17_LPI2C0_SDA   /*!< Pin function id */
#define INIT_I2C_PINS_I2C0_SDA_LABEL                                  "I2C0_SDA"   /*!< Label */
#define INIT_I2C_PINS_I2C0_SDA_NAME                                   "I2C0_SDA"   /*!< Identifier name */

/* PTB12 (number AC8), I2C3_SCL */
#define INIT_I2C_PINS_I2C3_SCL_PERIPHERAL                                 LPI2C3   /*!< Device name: LPI2C3 */
#define INIT_I2C_PINS_I2C3_SCL_SIGNAL                                  lpi2c_scl   /*!< LPI2C3 signal: lpi2c_scl */
#define INIT_I2C_PINS_I2C3_SCL_PIN_NAME                                    PTB12   /*!< Pin name */
#define INIT_I2C_PINS_I2C3_SCL_PIN_FUNCTION_ID           IOMUXC_PTB12_LPI2C3_SCL   /*!< Pin function id */
#define INIT_I2C_PINS_I2C3_SCL_LABEL                                  "I2C3_SCL"   /*!< Label */
#define INIT_I2C_PINS_I2C3_SCL_NAME                                   "I2C3_SCL"   /*!< Identifier name */

/* PTB13 (number AD8), I2C3_SDA */
#define INIT_I2C_PINS_I2C3_SDA_PERIPHERAL                                 LPI2C3   /*!< Device name: LPI2C3 */
#define INIT_I2C_PINS_I2C3_SDA_SIGNAL                                  lpi2c_sda   /*!< LPI2C3 signal: lpi2c_sda */
#define INIT_I2C_PINS_I2C3_SDA_PIN_NAME                                    PTB13   /*!< Pin name */
#define INIT_I2C_PINS_I2C3_SDA_PIN_FUNCTION_ID           IOMUXC_PTB13_LPI2C3_SDA   /*!< Pin function id */
#define INIT_I2C_PINS_I2C3_SDA_LABEL                                  "I2C3_SDA"   /*!< Label */
#define INIT_I2C_PINS_I2C3_SDA_NAME                                   "I2C3_SDA"   /*!< Identifier name */

/* PTC4 (coord F16), I2C5_SCL */
#define INIT_I2C_PINS_I2C5_SCL_PERIPHERAL                                 LPI2C5   /*!< Device name: LPI2C5 */
#define INIT_I2C_PINS_I2C5_SCL_SIGNAL                                  lpi2c_scl   /*!< LPI2C5 signal: lpi2c_scl */
#define INIT_I2C_PINS_I2C5_SCL_PIN_NAME                                     PTC4   /*!< Pin name */
#define INIT_I2C_PINS_I2C5_SCL_PIN_FUNCTION_ID            IOMUXC_PTC4_LPI2C5_SCL   /*!< Pin function id */
#define INIT_I2C_PINS_I2C5_SCL_LABEL                                  "I2C5_SCL"   /*!< Label */
#define INIT_I2C_PINS_I2C5_SCL_NAME                                   "I2C5_SCL"   /*!< Identifier name */

/* PTC5 (coord D17), I2C5_SDA */
#define INIT_I2C_PINS_I2C5_SDA_PERIPHERAL                                 LPI2C5   /*!< Device name: LPI2C5 */
#define INIT_I2C_PINS_I2C5_SDA_SIGNAL                                  lpi2c_sda   /*!< LPI2C5 signal: lpi2c_sda */
#define INIT_I2C_PINS_I2C5_SDA_PIN_NAME                                     PTC5   /*!< Pin name */
#define INIT_I2C_PINS_I2C5_SDA_PIN_FUNCTION_ID            IOMUXC_PTC5_LPI2C5_SDA   /*!< Pin function id */
#define INIT_I2C_PINS_I2C5_SDA_LABEL                                  "I2C5_SDA"   /*!< Label */
#define INIT_I2C_PINS_I2C5_SDA_NAME                                   "I2C5_SDA"   /*!< Identifier name */

/* PTF12 (coord H7), I2C7_SCL */
#define INIT_I2C_PINS_I2C7_SCL_PERIPHERAL                                 LPI2C7   /*!< Device name: LPI2C7 */
#define INIT_I2C_PINS_I2C7_SCL_SIGNAL                                  lpi2c_scl   /*!< LPI2C7 signal: lpi2c_scl */
#define INIT_I2C_PINS_I2C7_SCL_PIN_NAME                                    PTF12   /*!< Pin name */
#define INIT_I2C_PINS_I2C7_SCL_PIN_FUNCTION_ID           IOMUXC_PTF12_LPI2C7_SCL   /*!< Pin function id */
#define INIT_I2C_PINS_I2C7_SCL_LABEL                                  "I2C7_SCL"   /*!< Label */
#define INIT_I2C_PINS_I2C7_SCL_NAME                                   "I2C7_SCL"   /*!< Identifier name */

/* PTF13 (coord H6), I2C7_SDA */
#define INIT_I2C_PINS_I2C7_SDA_PERIPHERAL                                 LPI2C7   /*!< Device name: LPI2C7 */
#define INIT_I2C_PINS_I2C7_SDA_SIGNAL                                  lpi2c_sda   /*!< LPI2C7 signal: lpi2c_sda */
#define INIT_I2C_PINS_I2C7_SDA_PIN_NAME                                    PTF13   /*!< Pin name */
#define INIT_I2C_PINS_I2C7_SDA_PIN_FUNCTION_ID           IOMUXC_PTF13_LPI2C7_SDA   /*!< Pin function id */
#define INIT_I2C_PINS_I2C7_SDA_LABEL                                  "I2C7_SDA"   /*!< Label */
#define INIT_I2C_PINS_I2C7_SDA_NAME                                   "I2C7_SDA"   /*!< Identifier name */

/* PTA20 (number AD22), BATT_ADC_IN */
#define INIT_ADC_PINS_BATT_ADC_IN_PERIPHERAL                                ADC0   /*!< Device name: ADC0 */
#define INIT_ADC_PINS_BATT_ADC_IN_SIGNAL                               adc_ch10a   /*!< ADC0 signal: adc_ch10a */
#define INIT_ADC_PINS_BATT_ADC_IN_PIN_NAME                                 PTA20   /*!< Pin name */
#define INIT_ADC_PINS_BATT_ADC_IN_PIN_FUNCTION_ID        IOMUXC_PTA20_ADC0_CH10A   /*!< Pin function id */
#define INIT_ADC_PINS_BATT_ADC_IN_LABEL                            "BATT_ADC_IN"   /*!< Label */
#define INIT_ADC_PINS_BATT_ADC_IN_NAME                             "BATT_ADC_IN"   /*!< Identifier name */

/* PTA8 (number AB16), UART2_CTS */
#define INIT_ADC_PINS_ADC1_CH5A_PERIPHERAL                                  ADC1   /*!< Device name: ADC1 */
#define INIT_ADC_PINS_ADC1_CH5A_SIGNAL                                  adc_ch5a   /*!< ADC1 signal: adc_ch5a */
#define INIT_ADC_PINS_ADC1_CH5A_PIN_NAME                                    PTA8   /*!< Pin name */
#define INIT_ADC_PINS_ADC1_CH5A_PIN_FUNCTION_ID            IOMUXC_PTA8_ADC1_CH5A   /*!< Pin function id */
#define INIT_ADC_PINS_ADC1_CH5A_LABEL                                "UART2_CTS"   /*!< Label */
#define INIT_ADC_PINS_ADC1_CH5A_NAME                                 "ADC1_CH5A"   /*!< Identifier name */

/* PTA9 (number AC16), UART2_RTS */
#define INIT_ADC_PINS_ADC1_CH5B_PERIPHERAL                                  ADC1   /*!< Device name: ADC1 */
#define INIT_ADC_PINS_ADC1_CH5B_SIGNAL                                  adc_ch5b   /*!< ADC1 signal: adc_ch5b */
#define INIT_ADC_PINS_ADC1_CH5B_PIN_NAME                                    PTA9   /*!< Pin name */
#define INIT_ADC_PINS_ADC1_CH5B_PIN_FUNCTION_ID            IOMUXC_PTA9_ADC1_CH5B   /*!< Pin function id */
#define INIT_ADC_PINS_ADC1_CH5B_LABEL                                "UART2_RTS"   /*!< Label */
#define INIT_ADC_PINS_ADC1_CH5B_NAME                                 "ADC1_CH5B"   /*!< Identifier name */

/* PTA10 (number AD16), UART2_TX */
#define INIT_ADC_PINS_ADC1_CH6A_PERIPHERAL                                  ADC1   /*!< Device name: ADC1 */
#define INIT_ADC_PINS_ADC1_CH6A_SIGNAL                                  adc_ch6a   /*!< ADC1 signal: adc_ch6a */
#define INIT_ADC_PINS_ADC1_CH6A_PIN_NAME                                   PTA10   /*!< Pin name */
#define INIT_ADC_PINS_ADC1_CH6A_PIN_FUNCTION_ID           IOMUXC_PTA10_ADC1_CH6A   /*!< Pin function id */
#define INIT_ADC_PINS_ADC1_CH6A_LABEL                                 "UART2_TX"   /*!< Label */
#define INIT_ADC_PINS_ADC1_CH6A_NAME                                 "ADC1_CH6A"   /*!< Identifier name */

/* PTA11 (number AD18), UART2_RX */
#define INIT_ADC_PINS_ADC1_CH6B_PERIPHERAL                                  ADC1   /*!< Device name: ADC1 */
#define INIT_ADC_PINS_ADC1_CH6B_SIGNAL                                  adc_ch6b   /*!< ADC1 signal: adc_ch6b */
#define INIT_ADC_PINS_ADC1_CH6B_PIN_NAME                                   PTA11   /*!< Pin name */
#define INIT_ADC_PINS_ADC1_CH6B_PIN_FUNCTION_ID           IOMUXC_PTA11_ADC1_CH6B   /*!< Pin function id */
#define INIT_ADC_PINS_ADC1_CH6B_LABEL                                 "UART2_RX"   /*!< Label */
#define INIT_ADC_PINS_ADC1_CH6B_NAME                                 "ADC1_CH6B"   /*!< Identifier name */

/* PTA22 (number AC20), EWM_OUT_B */
#define INIT_EWM_PINS_EWM_OUT_B_PERIPHERAL                                   EWM   /*!< Device name: EWM */
#define INIT_EWM_PINS_EWM_OUT_B_SIGNAL                                 ewm_out_b   /*!< EWM signal: ewm_out_b */
#define INIT_EWM_PINS_EWM_OUT_B_PIN_NAME                                   PTA22   /*!< Pin name */
#define INIT_EWM_PINS_EWM_OUT_B_PIN_FUNCTION_ID           IOMUXC_PTA22_EWM_OUT_B   /*!< Pin function id */
#define INIT_EWM_PINS_EWM_OUT_B_LABEL                                "EWM_OUT_B"   /*!< Label */
#define INIT_EWM_PINS_EWM_OUT_B_NAME                                 "EWM_OUT_B"   /*!< Identifier name */

/* PTA26 (number AF21), JTAG_TMS/SWD_DIO */
#define INIT_SJC_PINS_JTAG_TMS_PERIPHERAL                                   JTAG   /*!< Device name: JTAG */
#define INIT_SJC_PINS_JTAG_TMS_SIGNAL                                   jtag_tms   /*!< JTAG signal: jtag_tms */
#define INIT_SJC_PINS_JTAG_TMS_PIN_NAME                                    PTA26   /*!< Pin name */
#define INIT_SJC_PINS_JTAG_TMS_PIN_FUNCTION_ID     IOMUXC_PTA26_JTAG_TMS_SWD_DIO   /*!< Pin function id */
#define INIT_SJC_PINS_JTAG_TMS_LABEL                          "JTAG_TMS/SWD_DIO"   /*!< Label */
#define INIT_SJC_PINS_JTAG_TMS_NAME                                   "JTAG_TMS"   /*!< Identifier name */

/* PTA27 (number AF22), JTAG_TDO */
#define INIT_SJC_PINS_JTAG_TDO_PERIPHERAL                                   JTAG   /*!< Device name: JTAG */
#define INIT_SJC_PINS_JTAG_TDO_SIGNAL                                   jtag_tdo   /*!< JTAG signal: jtag_tdo */
#define INIT_SJC_PINS_JTAG_TDO_PIN_NAME                                    PTA27   /*!< Pin name */
#define INIT_SJC_PINS_JTAG_TDO_PIN_FUNCTION_ID             IOMUXC_PTA27_JTAG_TDO   /*!< Pin function id */
#define INIT_SJC_PINS_JTAG_TDO_LABEL                                  "JTAG_TDO"   /*!< Label */
#define INIT_SJC_PINS_JTAG_TDO_NAME                                   "JTAG_TDO"   /*!< Identifier name */

/* PTA28 (number AG22), JTAG_TDI */
#define INIT_SJC_PINS_JTAG_TDI_PERIPHERAL                                   JTAG   /*!< Device name: JTAG */
#define INIT_SJC_PINS_JTAG_TDI_SIGNAL                                   jtag_tdi   /*!< JTAG signal: jtag_tdi */
#define INIT_SJC_PINS_JTAG_TDI_PIN_NAME                                    PTA28   /*!< Pin name */
#define INIT_SJC_PINS_JTAG_TDI_PIN_FUNCTION_ID             IOMUXC_PTA28_JTAG_TDI   /*!< Pin function id */
#define INIT_SJC_PINS_JTAG_TDI_LABEL                                  "JTAG_TDI"   /*!< Label */
#define INIT_SJC_PINS_JTAG_TDI_NAME                                   "JTAG_TDI"   /*!< Identifier name */

/* PTA29 (number AD23), JTAG_TCLK/SWD_CLK */
#define INIT_SJC_PINS_JTAG_TCLK_PERIPHERAL                                  JTAG   /*!< Device name: JTAG */
#define INIT_SJC_PINS_JTAG_TCLK_SIGNAL                                 jtag_tclk   /*!< JTAG signal: jtag_tclk */
#define INIT_SJC_PINS_JTAG_TCLK_PIN_NAME                                   PTA29   /*!< Pin name */
#define INIT_SJC_PINS_JTAG_TCLK_PIN_FUNCTION_ID   IOMUXC_PTA29_JTAG_TCLK_SWD_CLK   /*!< Pin function id */
#define INIT_SJC_PINS_JTAG_TCLK_LABEL                        "JTAG_TCLK/SWD_CLK"   /*!< Label */
#define INIT_SJC_PINS_JTAG_TCLK_NAME                                 "JTAG_TCLK"   /*!< Identifier name */

/* PTA30 (number AD24), JTAG_TRST_B */
#define INIT_SJC_PINS_JTAG_TRST_B_PERIPHERAL                                JTAG   /*!< Device name: JTAG */
#define INIT_SJC_PINS_JTAG_TRST_B_SIGNAL                             jtag_trst_b   /*!< JTAG signal: jtag_trst_b */
#define INIT_SJC_PINS_JTAG_TRST_B_PIN_NAME                                 PTA30   /*!< Pin name */
#define INIT_SJC_PINS_JTAG_TRST_B_PIN_FUNCTION_ID       IOMUXC_PTA30_JTAG_TRST_B   /*!< Pin function id */
#define INIT_SJC_PINS_JTAG_TRST_B_LABEL                            "JTAG_TRST_B"   /*!< Label */
#define INIT_SJC_PINS_JTAG_TRST_B_NAME                             "JTAG_TRST_B"   /*!< Identifier name */

/* PTB8 (number AG6), QSPIA_SS0_B */
#define INIT_QSPI_PINS_QSPIA_SS0_B_PERIPHERAL                              QSPIA   /*!< Device name: QSPIA */
#define INIT_QSPI_PINS_QSPIA_SS0_B_SIGNAL                             qspia_ss_b   /*!< QSPIA signal: qspia_ss_b */
#define INIT_QSPI_PINS_QSPIA_SS0_B_CHANNEL                                     0   /*!< QSPIA qspia_ss_b channel: 0 */
#define INIT_QSPI_PINS_QSPIA_SS0_B_PIN_NAME                                 PTB8   /*!< Pin name */
#define INIT_QSPI_PINS_QSPIA_SS0_B_PIN_FUNCTION_ID       IOMUXC_PTB8_QSPIA_SS0_B   /*!< Pin function id */
#define INIT_QSPI_PINS_QSPIA_SS0_B_LABEL                           "QSPIA_SS0_B"   /*!< Label */
#define INIT_QSPI_PINS_QSPIA_SS0_B_NAME                            "QSPIA_SS0_B"   /*!< Identifier name */

/* PTB15 (number AF8), QSPIA_SCLK */
#define INIT_QSPI_PINS_QSPIA_SCLK_PERIPHERAL                               QSPIA   /*!< Device name: QSPIA */
#define INIT_QSPI_PINS_QSPIA_SCLK_SIGNAL                              qspia_sclk   /*!< QSPIA signal: qspia_sclk */
#define INIT_QSPI_PINS_QSPIA_SCLK_PIN_NAME                                 PTB15   /*!< Pin name */
#define INIT_QSPI_PINS_QSPIA_SCLK_PIN_FUNCTION_ID        IOMUXC_PTB15_QSPIA_SCLK   /*!< Pin function id */
#define INIT_QSPI_PINS_QSPIA_SCLK_LABEL                             "QSPIA_SCLK"   /*!< Label */
#define INIT_QSPI_PINS_QSPIA_SCLK_NAME                              "QSPIA_SCLK"   /*!< Identifier name */

/* PTB16 (number AF9), QSPIA_DATA3 */
#define INIT_QSPI_PINS_QSPIA_DATA3_PERIPHERAL                              QSPIA   /*!< Device name: QSPIA */
#define INIT_QSPI_PINS_QSPIA_DATA3_SIGNAL                             qspia_data   /*!< QSPIA signal: qspia_data */
#define INIT_QSPI_PINS_QSPIA_DATA3_CHANNEL                                     3   /*!< QSPIA qspia_data channel: 3 */
#define INIT_QSPI_PINS_QSPIA_DATA3_PIN_NAME                                PTB16   /*!< Pin name */
#define INIT_QSPI_PINS_QSPIA_DATA3_PIN_FUNCTION_ID      IOMUXC_PTB16_QSPIA_DATA3   /*!< Pin function id */
#define INIT_QSPI_PINS_QSPIA_DATA3_LABEL                           "QSPIA_DATA3"   /*!< Label */
#define INIT_QSPI_PINS_QSPIA_DATA3_NAME                            "QSPIA_DATA3"   /*!< Identifier name */

/* PTB17 (number AF10), QSPIA_DATA2 */
#define INIT_QSPI_PINS_QSPIA_DATA2_PERIPHERAL                              QSPIA   /*!< Device name: QSPIA */
#define INIT_QSPI_PINS_QSPIA_DATA2_SIGNAL                             qspia_data   /*!< QSPIA signal: qspia_data */
#define INIT_QSPI_PINS_QSPIA_DATA2_CHANNEL                                     2   /*!< QSPIA qspia_data channel: 2 */
#define INIT_QSPI_PINS_QSPIA_DATA2_PIN_NAME                                PTB17   /*!< Pin name */
#define INIT_QSPI_PINS_QSPIA_DATA2_PIN_FUNCTION_ID      IOMUXC_PTB17_QSPIA_DATA2   /*!< Pin function id */
#define INIT_QSPI_PINS_QSPIA_DATA2_LABEL                           "QSPIA_DATA2"   /*!< Label */
#define INIT_QSPI_PINS_QSPIA_DATA2_NAME                            "QSPIA_DATA2"   /*!< Identifier name */

/* PTB18 (number AG10), QSPIA_DATA1 */
#define INIT_QSPI_PINS_QSPIA_DATA1_PERIPHERAL                              QSPIA   /*!< Device name: QSPIA */
#define INIT_QSPI_PINS_QSPIA_DATA1_SIGNAL                             qspia_data   /*!< QSPIA signal: qspia_data */
#define INIT_QSPI_PINS_QSPIA_DATA1_CHANNEL                                     1   /*!< QSPIA qspia_data channel: 1 */
#define INIT_QSPI_PINS_QSPIA_DATA1_PIN_NAME                                PTB18   /*!< Pin name */
#define INIT_QSPI_PINS_QSPIA_DATA1_PIN_FUNCTION_ID      IOMUXC_PTB18_QSPIA_DATA1   /*!< Pin function id */
#define INIT_QSPI_PINS_QSPIA_DATA1_LABEL                           "QSPIA_DATA1"   /*!< Label */
#define INIT_QSPI_PINS_QSPIA_DATA1_NAME                            "QSPIA_DATA1"   /*!< Identifier name */

/* PTB19 (number AD10), QSPIA_DATA0 */
#define INIT_QSPI_PINS_QSPIA_DATA0_PERIPHERAL                              QSPIA   /*!< Device name: QSPIA */
#define INIT_QSPI_PINS_QSPIA_DATA0_SIGNAL                             qspia_data   /*!< QSPIA signal: qspia_data */
#define INIT_QSPI_PINS_QSPIA_DATA0_CHANNEL                                     0   /*!< QSPIA qspia_data channel: 0 */
#define INIT_QSPI_PINS_QSPIA_DATA0_PIN_NAME                                PTB19   /*!< Pin name */
#define INIT_QSPI_PINS_QSPIA_DATA0_PIN_FUNCTION_ID      IOMUXC_PTB19_QSPIA_DATA0   /*!< Pin function id */
#define INIT_QSPI_PINS_QSPIA_DATA0_LABEL                           "QSPIA_DATA0"   /*!< Label */
#define INIT_QSPI_PINS_QSPIA_DATA0_NAME                            "QSPIA_DATA0"   /*!< Identifier name */

/* PTB14 (number AG8), RTC_CLK */
#define INIT_RTC_PINS_RTC_CLK_PERIPHERAL                                     RTC   /*!< Device name: RTC */
#define INIT_RTC_PINS_RTC_CLK_SIGNAL                                  rtc_clkout   /*!< RTC signal: rtc_clkout */
#define INIT_RTC_PINS_RTC_CLK_PIN_NAME                                     PTB14   /*!< Pin name */
#define INIT_RTC_PINS_RTC_CLK_PIN_FUNCTION_ID            IOMUXC_PTB14_RTC_CLKOUT   /*!< Pin function id */
#define INIT_RTC_PINS_RTC_CLK_LABEL                                    "RTC_CLK"   /*!< Label */
#define INIT_RTC_PINS_RTC_CLK_NAME                                     "RTC_CLK"   /*!< Identifier name */

/* PTC13 (coord D13), USB_OTG_ID */
#define INIT_USB_PINS_USB_OTG_ID_PERIPHERAL                                 USB0   /*!< Device name: USB0 */
#define INIT_USB_PINS_USB_OTG_ID_SIGNAL                                  usb0_id   /*!< USB0 signal: usb0_id */
#define INIT_USB_PINS_USB_OTG_ID_PIN_NAME                                  PTC13   /*!< Pin name */
#define INIT_USB_PINS_USB_OTG_ID_PIN_FUNCTION_ID            IOMUXC_PTC13_USB0_ID   /*!< Pin function id */
#define INIT_USB_PINS_USB_OTG_ID_LABEL                              "USB_OTG_ID"   /*!< Label */
#define INIT_USB_PINS_USB_OTG_ID_NAME                               "USB_OTG_ID"   /*!< Identifier name */

/* PTC16 (coord G13), USB_OTG_OC */
#define INIT_USB_PINS_USB_OTG_OC_PERIPHERAL                                 USB1   /*!< Device name: USB1 */
#define INIT_USB_PINS_USB_OTG_OC_SIGNAL                                  usb1_oc   /*!< USB1 signal: usb1_oc */
#define INIT_USB_PINS_USB_OTG_OC_CHANNEL                                       2   /*!< USB1 usb1_oc channel: 2 */
#define INIT_USB_PINS_USB_OTG_OC_PIN_NAME                                  PTC16   /*!< Pin name */
#define INIT_USB_PINS_USB_OTG_OC_PIN_FUNCTION_ID           IOMUXC_PTC16_USB1_OC2   /*!< Pin function id */
#define INIT_USB_PINS_USB_OTG_OC_LABEL                              "USB_OTG_OC"   /*!< Label */
#define INIT_USB_PINS_USB_OTG_OC_NAME                               "USB_OTG_OC"   /*!< Identifier name */

/* PTD0 (coord A24), SD0_nRST */
#define INIT_SDHC_PINS_SD0_nRST_PERIPHERAL                                 SDHC0   /*!< Device name: SDHC0 */
#define INIT_SDHC_PINS_SD0_nRST_SIGNAL                              sdhc_reset_b   /*!< SDHC0 signal: sdhc_reset_b */
#define INIT_SDHC_PINS_SD0_nRST_PIN_NAME                                    PTD0   /*!< Pin name */
#define INIT_SDHC_PINS_SD0_nRST_PIN_FUNCTION_ID        IOMUXC_PTD0_SDHC0_RESET_B   /*!< Pin function id */
#define INIT_SDHC_PINS_SD0_nRST_LABEL                                 "SD0_nRST"   /*!< Label */
#define INIT_SDHC_PINS_SD0_nRST_NAME                                  "SD0_nRST"   /*!< Identifier name */

/* PTD1 (coord B24), SD0_CMD */
#define INIT_SDHC_PINS_SD0_CMD_PERIPHERAL                                  SDHC0   /*!< Device name: SDHC0 */
#define INIT_SDHC_PINS_SD0_CMD_SIGNAL                                   sdhc_cmd   /*!< SDHC0 signal: sdhc_cmd */
#define INIT_SDHC_PINS_SD0_CMD_PIN_NAME                                     PTD1   /*!< Pin name */
#define INIT_SDHC_PINS_SD0_CMD_PIN_FUNCTION_ID             IOMUXC_PTD1_SDHC0_CMD   /*!< Pin function id */
#define INIT_SDHC_PINS_SD0_CMD_LABEL                                   "SD0_CMD"   /*!< Label */
#define INIT_SDHC_PINS_SD0_CMD_NAME                                    "SD0_CMD"   /*!< Identifier name */

/* PTD2 (coord B23), SD0_CLK */
#define INIT_SDHC_PINS_SD0_CLK_PERIPHERAL                                  SDHC0   /*!< Device name: SDHC0 */
#define INIT_SDHC_PINS_SD0_CLK_SIGNAL                                   sdhc_clk   /*!< SDHC0 signal: sdhc_clk */
#define INIT_SDHC_PINS_SD0_CLK_PIN_NAME                                     PTD2   /*!< Pin name */
#define INIT_SDHC_PINS_SD0_CLK_PIN_FUNCTION_ID             IOMUXC_PTD2_SDHC0_CLK   /*!< Pin function id */
#define INIT_SDHC_PINS_SD0_CLK_LABEL                                   "SD0_CLK"   /*!< Label */
#define INIT_SDHC_PINS_SD0_CLK_NAME                                    "SD0_CLK"   /*!< Identifier name */

/* PTD3 (coord B22), SD0_DATA7 */
#define INIT_SDHC_PINS_SD0_DATA7_PERIPHERAL                                SDHC0   /*!< Device name: SDHC0 */
#define INIT_SDHC_PINS_SD0_DATA7_SIGNAL                                   sdhc_d   /*!< SDHC0 signal: sdhc_d */
#define INIT_SDHC_PINS_SD0_DATA7_CHANNEL                                       7   /*!< SDHC0 sdhc_d channel: 7 */
#define INIT_SDHC_PINS_SD0_DATA7_PIN_NAME                                   PTD3   /*!< Pin name */
#define INIT_SDHC_PINS_SD0_DATA7_PIN_FUNCTION_ID            IOMUXC_PTD3_SDHC0_D7   /*!< Pin function id */
#define INIT_SDHC_PINS_SD0_DATA7_LABEL                               "SD0_DATA7"   /*!< Label */
#define INIT_SDHC_PINS_SD0_DATA7_NAME                                "SD0_DATA7"   /*!< Identifier name */

/* PTD4 (coord A22), SD0_DATA6 */
#define INIT_SDHC_PINS_SD0_DATA6_PERIPHERAL                                SDHC0   /*!< Device name: SDHC0 */
#define INIT_SDHC_PINS_SD0_DATA6_SIGNAL                                   sdhc_d   /*!< SDHC0 signal: sdhc_d */
#define INIT_SDHC_PINS_SD0_DATA6_CHANNEL                                       6   /*!< SDHC0 sdhc_d channel: 6 */
#define INIT_SDHC_PINS_SD0_DATA6_PIN_NAME                                   PTD4   /*!< Pin name */
#define INIT_SDHC_PINS_SD0_DATA6_PIN_FUNCTION_ID            IOMUXC_PTD4_SDHC0_D6   /*!< Pin function id */
#define INIT_SDHC_PINS_SD0_DATA6_LABEL                               "SD0_DATA6"   /*!< Label */
#define INIT_SDHC_PINS_SD0_DATA6_NAME                                "SD0_DATA6"   /*!< Identifier name */

/* PTD5 (coord D21), SD0_DATA5 */
#define INIT_SDHC_PINS_SD0_DATA5_PERIPHERAL                                SDHC0   /*!< Device name: SDHC0 */
#define INIT_SDHC_PINS_SD0_DATA5_SIGNAL                                   sdhc_d   /*!< SDHC0 signal: sdhc_d */
#define INIT_SDHC_PINS_SD0_DATA5_CHANNEL                                       5   /*!< SDHC0 sdhc_d channel: 5 */
#define INIT_SDHC_PINS_SD0_DATA5_PIN_NAME                                   PTD5   /*!< Pin name */
#define INIT_SDHC_PINS_SD0_DATA5_PIN_FUNCTION_ID            IOMUXC_PTD5_SDHC0_D5   /*!< Pin function id */
#define INIT_SDHC_PINS_SD0_DATA5_LABEL                               "SD0_DATA5"   /*!< Label */
#define INIT_SDHC_PINS_SD0_DATA5_NAME                                "SD0_DATA5"   /*!< Identifier name */

/* PTD6 (coord D22), SD0_DATA4 */
#define INIT_SDHC_PINS_SD0_DATA4_PERIPHERAL                                SDHC0   /*!< Device name: SDHC0 */
#define INIT_SDHC_PINS_SD0_DATA4_SIGNAL                                   sdhc_d   /*!< SDHC0 signal: sdhc_d */
#define INIT_SDHC_PINS_SD0_DATA4_CHANNEL                                       4   /*!< SDHC0 sdhc_d channel: 4 */
#define INIT_SDHC_PINS_SD0_DATA4_PIN_NAME                                   PTD6   /*!< Pin name */
#define INIT_SDHC_PINS_SD0_DATA4_PIN_FUNCTION_ID            IOMUXC_PTD6_SDHC0_D4   /*!< Pin function id */
#define INIT_SDHC_PINS_SD0_DATA4_LABEL                               "SD0_DATA4"   /*!< Label */
#define INIT_SDHC_PINS_SD0_DATA4_NAME                                "SD0_DATA4"   /*!< Identifier name */

/* PTD7 (coord A20), SD0_DATA3 */
#define INIT_SDHC_PINS_SD0_DATA3_PERIPHERAL                                SDHC0   /*!< Device name: SDHC0 */
#define INIT_SDHC_PINS_SD0_DATA3_SIGNAL                                   sdhc_d   /*!< SDHC0 signal: sdhc_d */
#define INIT_SDHC_PINS_SD0_DATA3_CHANNEL                                       3   /*!< SDHC0 sdhc_d channel: 3 */
#define INIT_SDHC_PINS_SD0_DATA3_PIN_NAME                                   PTD7   /*!< Pin name */
#define INIT_SDHC_PINS_SD0_DATA3_PIN_FUNCTION_ID            IOMUXC_PTD7_SDHC0_D3   /*!< Pin function id */
#define INIT_SDHC_PINS_SD0_DATA3_LABEL                               "SD0_DATA3"   /*!< Label */
#define INIT_SDHC_PINS_SD0_DATA3_NAME                                "SD0_DATA3"   /*!< Identifier name */

/* PTD8 (coord B20), SD0_DATA2 */
#define INIT_SDHC_PINS_SD0_DATA2_PERIPHERAL                                SDHC0   /*!< Device name: SDHC0 */
#define INIT_SDHC_PINS_SD0_DATA2_SIGNAL                                   sdhc_d   /*!< SDHC0 signal: sdhc_d */
#define INIT_SDHC_PINS_SD0_DATA2_CHANNEL                                       2   /*!< SDHC0 sdhc_d channel: 2 */
#define INIT_SDHC_PINS_SD0_DATA2_PIN_NAME                                   PTD8   /*!< Pin name */
#define INIT_SDHC_PINS_SD0_DATA2_PIN_FUNCTION_ID            IOMUXC_PTD8_SDHC0_D2   /*!< Pin function id */
#define INIT_SDHC_PINS_SD0_DATA2_LABEL                               "SD0_DATA2"   /*!< Label */
#define INIT_SDHC_PINS_SD0_DATA2_NAME                                "SD0_DATA2"   /*!< Identifier name */

/* PTD9 (coord B19), SD0_DATA1 */
#define INIT_SDHC_PINS_SD0_DATA1_PERIPHERAL                                SDHC0   /*!< Device name: SDHC0 */
#define INIT_SDHC_PINS_SD0_DATA1_SIGNAL                                   sdhc_d   /*!< SDHC0 signal: sdhc_d */
#define INIT_SDHC_PINS_SD0_DATA1_CHANNEL                                       1   /*!< SDHC0 sdhc_d channel: 1 */
#define INIT_SDHC_PINS_SD0_DATA1_PIN_NAME                                   PTD9   /*!< Pin name */
#define INIT_SDHC_PINS_SD0_DATA1_PIN_FUNCTION_ID            IOMUXC_PTD9_SDHC0_D1   /*!< Pin function id */
#define INIT_SDHC_PINS_SD0_DATA1_LABEL                               "SD0_DATA1"   /*!< Label */
#define INIT_SDHC_PINS_SD0_DATA1_NAME                                "SD0_DATA1"   /*!< Identifier name */

/* PTD10 (coord B18), SD0_DATA0 */
#define INIT_SDHC_PINS_SD0_DATA0_PERIPHERAL                                SDHC0   /*!< Device name: SDHC0 */
#define INIT_SDHC_PINS_SD0_DATA0_SIGNAL                                   sdhc_d   /*!< SDHC0 signal: sdhc_d */
#define INIT_SDHC_PINS_SD0_DATA0_CHANNEL                                       0   /*!< SDHC0 sdhc_d channel: 0 */
#define INIT_SDHC_PINS_SD0_DATA0_PIN_NAME                                  PTD10   /*!< Pin name */
#define INIT_SDHC_PINS_SD0_DATA0_PIN_FUNCTION_ID           IOMUXC_PTD10_SDHC0_D0   /*!< Pin function id */
#define INIT_SDHC_PINS_SD0_DATA0_LABEL                               "SD0_DATA0"   /*!< Label */
#define INIT_SDHC_PINS_SD0_DATA0_NAME                                "SD0_DATA0"   /*!< Identifier name */

/* PTD11 (coord A18), SD0_DQS */
#define INIT_SDHC_PINS_SD0_DQS_PERIPHERAL                                  SDHC0   /*!< Device name: SDHC0 */
#define INIT_SDHC_PINS_SD0_DQS_SIGNAL                                   sdhc_dqs   /*!< SDHC0 signal: sdhc_dqs */
#define INIT_SDHC_PINS_SD0_DQS_PIN_NAME                                    PTD11   /*!< Pin name */
#define INIT_SDHC_PINS_SD0_DQS_PIN_FUNCTION_ID            IOMUXC_PTD11_SDHC0_DQS   /*!< Pin function id */
#define INIT_SDHC_PINS_SD0_DQS_LABEL                                   "SD0_DQS"   /*!< Label */
#define INIT_SDHC_PINS_SD0_DQS_NAME                                    "SD0_DQS"   /*!< Identifier name */

/* PTE0 (coord D12), WL_SD1_DATA1 */
#define INIT_SDHC_PINS_WL_SD1_DATA1_PERIPHERAL                             SDHC1   /*!< Device name: SDHC1 */
#define INIT_SDHC_PINS_WL_SD1_DATA1_SIGNAL                                sdhc_d   /*!< SDHC1 signal: sdhc_d */
#define INIT_SDHC_PINS_WL_SD1_DATA1_CHANNEL                                    1   /*!< SDHC1 sdhc_d channel: 1 */
#define INIT_SDHC_PINS_WL_SD1_DATA1_PIN_NAME                                PTE0   /*!< Pin name */
#define INIT_SDHC_PINS_WL_SD1_DATA1_PIN_FUNCTION_ID         IOMUXC_PTE0_SDHC1_D1   /*!< Pin function id */
#define INIT_SDHC_PINS_WL_SD1_DATA1_LABEL                         "WL_SD1_DATA1"   /*!< Label */
#define INIT_SDHC_PINS_WL_SD1_DATA1_NAME                          "WL_SD1_DATA1"   /*!< Identifier name */

/* PTE1 (coord A12), WL_SD1_DATA0 */
#define INIT_SDHC_PINS_WL_SD1_DATA0_PERIPHERAL                             SDHC1   /*!< Device name: SDHC1 */
#define INIT_SDHC_PINS_WL_SD1_DATA0_SIGNAL                                sdhc_d   /*!< SDHC1 signal: sdhc_d */
#define INIT_SDHC_PINS_WL_SD1_DATA0_CHANNEL                                    0   /*!< SDHC1 sdhc_d channel: 0 */
#define INIT_SDHC_PINS_WL_SD1_DATA0_PIN_NAME                                PTE1   /*!< Pin name */
#define INIT_SDHC_PINS_WL_SD1_DATA0_PIN_FUNCTION_ID         IOMUXC_PTE1_SDHC1_D0   /*!< Pin function id */
#define INIT_SDHC_PINS_WL_SD1_DATA0_LABEL                         "WL_SD1_DATA0"   /*!< Label */
#define INIT_SDHC_PINS_WL_SD1_DATA0_NAME                          "WL_SD1_DATA0"   /*!< Identifier name */

/* PTE2 (coord B12), WL_SD1_CLK */
#define INIT_SDHC_PINS_WL_SD1_CLK_PERIPHERAL                               SDHC1   /*!< Device name: SDHC1 */
#define INIT_SDHC_PINS_WL_SD1_CLK_SIGNAL                                sdhc_clk   /*!< SDHC1 signal: sdhc_clk */
#define INIT_SDHC_PINS_WL_SD1_CLK_PIN_NAME                                  PTE2   /*!< Pin name */
#define INIT_SDHC_PINS_WL_SD1_CLK_PIN_FUNCTION_ID          IOMUXC_PTE2_SDHC1_CLK   /*!< Pin function id */
#define INIT_SDHC_PINS_WL_SD1_CLK_LABEL                             "WL_SD1_CLK"   /*!< Label */
#define INIT_SDHC_PINS_WL_SD1_CLK_NAME                              "WL_SD1_CLK"   /*!< Identifier name */

/* PTE3 (coord B11), WL_SD1_CMD */
#define INIT_SDHC_PINS_WL_SD1_CMD_PERIPHERAL                               SDHC1   /*!< Device name: SDHC1 */
#define INIT_SDHC_PINS_WL_SD1_CMD_SIGNAL                                sdhc_cmd   /*!< SDHC1 signal: sdhc_cmd */
#define INIT_SDHC_PINS_WL_SD1_CMD_PIN_NAME                                  PTE3   /*!< Pin name */
#define INIT_SDHC_PINS_WL_SD1_CMD_PIN_FUNCTION_ID          IOMUXC_PTE3_SDHC1_CMD   /*!< Pin function id */
#define INIT_SDHC_PINS_WL_SD1_CMD_LABEL                             "WL_SD1_CMD"   /*!< Label */
#define INIT_SDHC_PINS_WL_SD1_CMD_NAME                              "WL_SD1_CMD"   /*!< Identifier name */

/* PTE4 (coord B10), WL_SD1_DATA3 */
#define INIT_SDHC_PINS_WL_SD1_DATA3_PERIPHERAL                             SDHC1   /*!< Device name: SDHC1 */
#define INIT_SDHC_PINS_WL_SD1_DATA3_SIGNAL                                sdhc_d   /*!< SDHC1 signal: sdhc_d */
#define INIT_SDHC_PINS_WL_SD1_DATA3_CHANNEL                                    3   /*!< SDHC1 sdhc_d channel: 3 */
#define INIT_SDHC_PINS_WL_SD1_DATA3_PIN_NAME                                PTE4   /*!< Pin name */
#define INIT_SDHC_PINS_WL_SD1_DATA3_PIN_FUNCTION_ID         IOMUXC_PTE4_SDHC1_D3   /*!< Pin function id */
#define INIT_SDHC_PINS_WL_SD1_DATA3_LABEL                         "WL_SD1_DATA3"   /*!< Label */
#define INIT_SDHC_PINS_WL_SD1_DATA3_NAME                          "WL_SD1_DATA3"   /*!< Identifier name */

/* PTE5 (coord A10), WL_SD1_DATA2 */
#define INIT_SDHC_PINS_WL_SD1_DATA2_PERIPHERAL                             SDHC1   /*!< Device name: SDHC1 */
#define INIT_SDHC_PINS_WL_SD1_DATA2_SIGNAL                                sdhc_d   /*!< SDHC1 signal: sdhc_d */
#define INIT_SDHC_PINS_WL_SD1_DATA2_CHANNEL                                    2   /*!< SDHC1 sdhc_d channel: 2 */
#define INIT_SDHC_PINS_WL_SD1_DATA2_PIN_NAME                                PTE5   /*!< Pin name */
#define INIT_SDHC_PINS_WL_SD1_DATA2_PIN_FUNCTION_ID         IOMUXC_PTE5_SDHC1_D2   /*!< Pin function id */
#define INIT_SDHC_PINS_WL_SD1_DATA2_LABEL                         "WL_SD1_DATA2"   /*!< Label */
#define INIT_SDHC_PINS_WL_SD1_DATA2_NAME                          "WL_SD1_DATA2"   /*!< Identifier name */

/* PTE14 (coord B6), SD1_VSEL */
#define INIT_SDHC_PINS_SD1_VSEL_PERIPHERAL                                 SDHC1   /*!< Device name: SDHC1 */
#define INIT_SDHC_PINS_SD1_VSEL_SIGNAL                                   sdhc_vs   /*!< SDHC1 signal: sdhc_vs */
#define INIT_SDHC_PINS_SD1_VSEL_PIN_NAME                                   PTE14   /*!< Pin name */
#define INIT_SDHC_PINS_SD1_VSEL_PIN_FUNCTION_ID            IOMUXC_PTE14_SDHC1_VS   /*!< Pin function id */
#define INIT_SDHC_PINS_SD1_VSEL_LABEL                                 "SD1_VSEL"   /*!< Label */
#define INIT_SDHC_PINS_SD1_VSEL_NAME                                  "SD1_VSEL"   /*!< Identifier name */

/* PTF2 (coord B3), LED_PWM_EN */
#define INIT_TPM_PINS_LED_PWM_EN_PERIPHERAL                                 TPM4   /*!< Device name: TPM4 */
#define INIT_TPM_PINS_LED_PWM_EN_SIGNAL                                   tpm_ch   /*!< TPM4 signal: tpm_ch */
#define INIT_TPM_PINS_LED_PWM_EN_CHANNEL                                       1   /*!< TPM4 tpm_ch channel: 1 */
#define INIT_TPM_PINS_LED_PWM_EN_PIN_NAME                                   PTF2   /*!< Pin name */
#define INIT_TPM_PINS_LED_PWM_EN_PIN_FUNCTION_ID            IOMUXC_PTF2_TPM4_CH1   /*!< Pin function id */
#define INIT_TPM_PINS_LED_PWM_EN_LABEL                              "LED_PWM_EN"   /*!< Label */
#define INIT_TPM_PINS_LED_PWM_EN_NAME                               "LED_PWM_EN"   /*!< Identifier name */

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif


/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void init_gpio_pins(void);                                 /*!< Function assigned for the core: Cortex-M4[cm4] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void init_i2s_pins(void);                                  /*!< Function assigned for the core: Cortex-M4[cm4] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void init_uart_pins(void);                                 /*!< Function assigned for the core: Cortex-M4[cm4] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void init_i2c_pins(void);                                  /*!< Function assigned for the core: Cortex-M4[cm4] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void init_adc_pins(void);                                  /*!< Function assigned for the core: Cortex-M4[cm4] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void init_ewm_pins(void);                                  /*!< Function assigned for the core: Cortex-M4[cm4] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void init_sjc_pins(void);                                  /*!< Function assigned for the core: Cortex-M4[cm4] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void init_qspi_pins(void);                                 /*!< Function assigned for the core: Cortex-M4[cm4] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void init_rtc_pins(void);                                  /*!< Function assigned for the core: Cortex-M4[cm4] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void init_usb_pins(void);                                  /*!< Function assigned for the core: Cortex-M4[cm4] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void init_sdhc_pins(void);                                 /*!< Function assigned for the core: Cortex-M4[cm4] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void init_tpm_pins(void);                                  /*!< Function assigned for the core: Cortex-M4[cm4] */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
