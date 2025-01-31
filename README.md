# Welcome to BTstack

BTstack is [BlueKitchen's](https://bluekitchen-gmbh.com) implementation of the official Bluetooth stack.
It is well suited for small, resource-constraint devices
such as 8 or 16 bit embedded systems as it is highly configurable and comes with an ultra small memory footprint.

Targeting a variety of platforms is as simple as providing the necessary UART, CPU, and CLOCK implementations. BTstack is currently capable of connecting to Bluetooth-modules via: (H2) HCI USB, (H4) HCI UART + TI's eHCILL, and (H5) HCI Three-Wire UART.

On smaller embedded systems, a minimal run loop implementation allows to use BTstack without a Real Time OS (RTOS).
If a RTOS is already provided, BTstack can be integrated and run as a single thread.

On larger systems, BTstack provides a server that connects to a Bluetooth module.
Multiple applications can communicate with this server over different inter-process communication methods. As sockets are used for client/server communication, it's easy to interact via higher-level level languages, e.g. there's already a Java binding for use in desktop environments.

BTstack supports the Central and the Peripheral Role of Bluetooth 5 Low Energy specification incl. LE Secure Connections, LE Data Channels, and LE Data Length Extension. It can be configured to run as either single-mode stack or a dual-mode stack.

BTstack is free for non-commercial use. However, for commercial use, <a href="mailto:contact@bluekitchen-gmbh.com">tell us</a> a bit about your project to get a quote.

**Documentation:** [HTML](https://bluekitchen-gmbh.com/btstack/develop/), [PDF](https://bluekitchen-gmbh.com/btstack_develop.pdf)

**Third-party libraries (FOSS):** [List of used libraries and their licenses](https://github.com/bluekitchen/btstack/blob/develop/3rd-party/README.md)

**Discussion and Community Support:** [BTstack Google Group](https://groups.google.com/group/btstack-dev)


### Supported Protocols and Profiles

**Protocols:** L2CAP (incl. Enhanced Retransmission Mode, LE Credit-Based Flow-Control Mode and LE Enhanced Credit-Based Flow-Control Mode), RFCOMM, SDP, BNEP, AVDTP, AVCTP, ATT, SM (incl. LE Secure Connections and Cross-Transport Key Derivation).

**Profiles:** A2DP, AVRCP incl. Browsing (CT+TG) and Cover Art (CT), GAP, GATT, HFP, HID, HSP, IOP, MAP, OPP, SPP, PAN, PBAP.

**GATT Service Servers:** Battery (BAS), Bond Management (BMS), Cycling Power (CPS), Cycling Speed and Cadence (CSCS), Device Information (DID), Heart Rate (HRS), HID over GATT (HIDS) Device, Immediate Alert, Link Loss (LLS),
Mesh Provisioning, Mesh Proxy, Nordic SPP, Scan Parameters (SCPS), TX Power (TPS), u-Blox SPP. 

**GATT Service Clients:**: ANCS, Battery (BAS), Device Information (DID), HID-over-GATT (HOGP) Host, Immediate Alert, Link Loss, Scan Parameters (SCPP), TX Power (TXS).

**LE Audio Profiles**: Object Transfer Profile (OTP), Volume Control Profile (VCP), Microphone Control Profile (MICP), Media Control Profile (MCP), Call Control Profile (CCP),
Coordinated Set Identification Profile (CSIP), Basic Audio Profile (BAP), Common Audio Profile (CAP), Hearing Access Profile (HAP), Telephony and Media Audio Profile (TMAP),
Public Broadcast Profile (PBP), Gaming Audio Profile (GMAP)

**LE Audio Services**: Audio Input Control Service (AICS), Volume Offset Control Service (VOCS), Volume Control Service (VCS), Microphone Control Service (MICS),
Media Control Service (MCS), Generic Media Control Service (GMCS), Telephony Bearer Service (TBS), Coordinated Set Identification Service (CSIS), 
Published Audio Capabilities Service (PACS), Audio Stream Control Service (ASCS), Broadcast Audio Scan Service (BASS), Common Audio Service (CAS), and Hearing Access Service (HAS).

GATT Services are in general easy to implement and require short development time. For more GATT Services please contact us, or follow the [implementation guidelines](https://bluekitchen-gmbh.com/btstack/profiles/#gatt-generic-attribute-profile).  

**Qualification**: BTstack been qualified with the Bluetooth SIG (DN Q331293) for ATT, GAP, GATT, IOP, L2CAP, SDP, SM of the Bluetooth Core 6.0 specification as well as 
A2DP 1.4, AICS 1.0, ASCS 1.0.1, AVCTP 1.4, AVDTP 1.3, AVRCP 1.6.3, BAP 1.0.2, BAS 1.1, BASS 1.0, BAU 1.0, BNEP 1.0, CAP 1.0, CAS 1.0, CCP 1.0, CPP 1.1, CPS 1.1, 
CSCP 1.0, CSCS 1.0, CSIP 1.0.1, CSIS 1.0.1, DID 1.3, DIS 1.1, GAVDP 1.3, GMAP 1.0, GMCS 1.0.1, HAP 1.0, HAS 1.0, HFP 1.9, HID 1.1.1, HIDS 1.0, HOGP 1.0, HRP 1.0,
HRS 1.0, HSP 1.2, IAS 1.0, LC3 1.0.1, LLS 1.0, MAP 1.4.2, MCP 1.0, MCS 1.0.1, MICP 1.0, MICS 1.0, OPP 1.2.1, OTP 1.0, OTS 1.0, PACS 1.0.1, PANP 1.0, PBAP 1.2.3,
PBP 1.0, RFCOMM 1.2, SPP 1.2, SPS 1.0, TBS 1.0, TMAP 1.0, TxPS 1.0, VCP 1.0, VCS 1.0, VOCS 1.0.

For information on Apple's MFi/iAP2 and Find My profiles or access to LE Audio, MAP, PBAP Server, please <a href="mailto:contact@bluekitchen-gmbh.com">contact us directly</a>.

## Evaluation Platforms

#### Embedded Platforms:      
| Build Status                                                                                                                                                                                                     | Port                                                                                                                  | Platform                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| [<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-esp32-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-esp32-develop)                                           | [esp32](https://github.com/bluekitchen/btstack/tree/develop/port/esp32)                                               | [Espressif ESP32](https://www.espressif.com/products/hardware/esp32/overview) 2.4 GHz Wi-Fi and Bluetooth Dual-Mode combo chip using [FreeRTOS](https://www.freertos.org)                                                                                                                                                                                                                                                                                       |
| [<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-max32630-fthr-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-max32630-fthr)                                   | [max32630-fthr](https://github.com/bluekitchen/btstack/tree/develop/port/max32630-fthr)                               | [MAX32630FTHR ARM Cortex M4F Board](https://www.maximintegrated.com/en/products/digital/microcontrollers/MAX32630FTHR.html) with onboard [Panasonic PAN1326 module](https://na.industrial.panasonic.com/products/wireless-connectivity/bluetooth/multi-mode/series/pan13261316-series/CS467) containing  [TI CC2564B Bluetooth controller](https://www.ti.com/product/cc2564)                                                                                   |
| [<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-msp432p401lp-cc256x-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-msp432p401lp-cc256x-develop)               | [msp432p401lp-cc256x](https://github.com/bluekitchen/btstack/tree/develop/port/msp432p401lp-cc256x)                   | [TI MSP432P401R LaunchPad](https://www.ti.com/tool/MSP-EXP432P401R) with [CC2564C Dual-mode Bluetooth® Controller Evaluation Module](https://store.ti.com/CC256XCQFN-EM-CC2564C-Dual-Mode-Bluetooth-Controller-Evaluation-Module-P51277.aspx) and [EM Adapter BoosterPack](https://www.ti.com/tool/boost-ccemadapter) with additional 32768Hz quartz oscillator                                                                                                 |
| No build server                                                                                                                                                                                                  | [renesas-ek-ra6m4a-da14531](https://github.com/bluekitchen/btstack/tree/develop/port/renesas-ek-ra6m4a-da14531)       | [Renesas EK-RA6M4](https://www.renesas.com/us/en/products/microcontrollers-microprocessors/ra-cortex-m-mcus/ek-ra6m4-evaluation-kit-ra6m4-mcu-group) with [MikroeE BLE Tiny Click board](https://www.mikroe.com/ble-tiny-click)                                                                                          |
| No build server                                                                                                                                                                                                  | [renesas-tb-s1ja-cc256x](https://github.com/bluekitchen/btstack/tree/develop/port/renesas-tb-s1ja-cc256x)             | [Renesas TB-S1JA](https://www.renesas.com/eu/en/products/synergy/hardware/kits/tb-s1ja.html) with  with [Dual-mode Bluetooth® CC2564 evaluation board](https://www.ti.com/tool/CC256XQFNEM) and [EM Adapter BoosterPack](https://www.ti.com/tool/boost-ccemadapter) with additional 32768Hz quartz oscillator                                                                                                                                                   |
| [<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-samv71-xplained-atwilc3000-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-samv71-xplained-atwilc3000-develop) | [samv71-xplained-atwilc3000](https://github.com/bluekitchen/btstack/tree/develop/port/samv71-xplained-atwilc3000)     | [SAMV71 Ultra Xplained Ultra](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/ATSAMV71-XULT) evaluation kit with [ATWILC3000 SHIELD](https://www.microchip.com/DevelopmentTools/ProductDetails/ATWILC3000-SHLD)                                                                                                                                                                                                                                |
| [<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-stm32-f4discovery-cc256x-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-stm32-f4discovery-cc256x-develop)     | [stm32-f4discovery-cc2564b](https://github.com/bluekitchen/btstack/tree/develop/port/stm32-f4discovery-cc256x)        | [STM32 F4 Discovery Board](https://www.st.com/en/evaluation-tools/stm32f4discovery.html) with [CC256xEM Bluetooth Adapter Kit for ST](https://store.ti.com/CC256XEM-STADAPT-CC256xEM-Bluetooth-Adapter-Kit-P45158.aspx) and [CC2564B Dual-mode Bluetooth® Controller Evaluation Module](https://store.ti.com/cc2564modnem.aspx)                                                                                                                                 |
| [<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-stm32-l073rz-nucleo-em9304-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-stm32-l073rz-nucleo-em9304)         | [stm32-l073rz-nucleo-em9304](https://github.com/bluekitchen/btstack/tree/develop/port/stm32-l073rz-nucleo-em9304)     | EM9304 DVK: [STM32 Nucleo development board NUCELO-L73RZ](https://www.st.com/en/evaluation-tools/nucleo-l073rz.html) with [EM9304 Bluetooth Controller](https://www.emmicroelectronic.com/product/standard-protocols/em9304)                                                                                                                                                                                                                                    |
| No build server                                                                                                                                                                                                  | [stm32-wb55xx-nucleo-freertos](https://github.com/bluekitchen/btstack/tree/develop/port/stm32-wb55xx-nucleo-freertos) | [P-NUCLEO-WB55 kit](https://www.st.com/en/evaluation-tools/p-nucleo-wb55.html)                                                                                                                                                                                                                                                                                                                                                                                  |
| [<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-wiced-h4-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-wiced-h4-develop)                                     | [wiced-h4](https://github.com/bluekitchen/btstack/tree/develop/port/wiced-h4)                                         | Broadcom/Cypress platforms that support the WICED SDK via H4 UART, e.g. [RedBear Duo](https://www.seeedstudio.com/RedBear-DUO-Wi-Fi-BLE-IoT-Board-p-2635.html) (BCM43438 A1), [Inventek Systems ISM4334x](https://www.inventeksys.com/wifi/wifi-modules/ism4343-wmb-l151/) (BCM43438 A1), [Inventek Systems ISM4343](https://www.inventeksys.com/products-page/wifi-modules/serial-wifi/ism43341-m4g-l44-cu-embedded-serial-to-wifi-ble-nfc-module/) (BCM43340) |

#### Other Platforms:     
| Status                                                                                                                                                                       | Port                                                                                                  | Platform                                                                                                   |
|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------|
| No build server                                                                                                                                                              | [freebsd-netgraph](https://github.com/bluekitchen/btstack/tree/develop/port/freebsd-netgraph)         | FreeBSD port that uses kernel netgraph HCI node                                                            |
| [<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-libusb-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-libusb-develop)     | [libusb](https://github.com/bluekitchen/btstack/tree/develop/port/libusb)                             | Unix-based system with dedicated USB Bluetooth dongle                                                      |
| No build server                                                                                                                                                              | [libusb-intel](https://github.com/bluekitchen/btstack/tree/develop/port/libusb-intel)                 | Unix-based system with Intel Wireless 8260/8265 Controller                                                 |
| [<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-posix-h4-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-posix-h4-develop) | [posix-h4](https://github.com/bluekitchen/btstack/tree/develop/port/posix-h4)                         | Unix-based system connected to Bluetooth module via H4 over serial port                                    |
| No build server                                                                                                                                                              | [posix-h4-airoc](https://github.com/bluekitchen/btstack/tree/develop/port/posix-h4-airoc)             | Unix-based system connected to newer Infineon AIROC controllers via H4 over serial port                    |
| No build server                                                                                                                                                              | [posix-h4-da14581](https://github.com/bluekitchen/btstack/tree/develop/port/posix-h4-da14581)         | Unix-based system connected to Dialog Semiconductor DA14581 via H4 over serial port                        |
| No build server                                                                                                                                                              | [posix-h4-da14585](https://github.com/bluekitchen/btstack/tree/develop/port/posix-h4-da14585)         | Unix-based system connected to Dialog Semiconductor DA14585 via H4 over serial port                        |
| No build server                                                                                                                                                              | [posix-h4-nxp](https://github.com/bluekitchen/btstack/tree/develop/port/posix-h4-nxp)                 | Unix-based system connected to NXP controllers via H4 over serial port                                     |
| No build server                                                                                                                                                              | [posix-h4-zephyr](https://github.com/bluekitchen/btstack/tree/develop/port/posix-h4-zephyr)           | Unix-based system connected to Bluetooth module with Zephyr HCI firmware via H4 over serial port           |
| No build server                                                                                                                                                              | [posix-h5](https://github.com/bluekitchen/btstack/tree/develop/port/posix-h5)                         | Unix-based system connected to Bluetooth module via H5 over serial port                                    |
| No build server                                                                                                                                                              | [qt-h4](https://github.com/bluekitchen/btstack/tree/develop/port/qt-h4)                               | Unix- or Win32-based [Qt application](https://qt.io) connected to Bluetooth module via H4 over serial port |
| No build server                                                                                                                                                              | [qt-usb](https://github.com/bluekitchen/btstack/tree/develop/port/qt-usb)                             | Unix- or Win32-based [Qt application](https://qt.io) with dedicated USB Bluetooth dongle                   |
| No build server                                                                                                                                                              | [windows-h4](https://github.com/bluekitchen/btstack/tree/develop/port/windows-h4)                     | Win32-based system connected to Bluetooth module via serial port                                           |
| No build server                                                                                                                                                              | [windows-h4-da14585](https://github.com/bluekitchen/btstack/tree/develop/port/windows-h4-da14585)     | Win32-based system connected to Dialog Semiconductor DA14585 via H4 over serial port                       |
| No build server                                                                                                                                                              | [windows-winusb](https://github.com/bluekitchen/btstack/tree/develop/port/windows-winusb)             | Win32-based system with dedicated USB Bluetooth dongle                                                     |
| No build server                                                                                                                                                              | [windows-winusb-intel](https://github.com/bluekitchen/btstack/tree/develop/port/windows-winusb-intel) | Win32-based system with Intel Wireless 8260/8265 Controller                                                |
| No build server                                                                                                                                                              | [raspi](https://github.com/bluekitchen/btstack/tree/develop/port/raspi)                               | Raspberry Pi 3 or Raspberry Pi Zero W with built-in BCM4343 Bluetooth/Wifi Controller                      |
| [<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-daemon-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-daemon-develop)     | [daemon](https://github.com/bluekitchen/btstack/tree/develop/port/daemon)                             | TCP and Unix domain named socket client-server architecture supporting multiple clients                    |
| [<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/java-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/java-develop)                   | [java](https://github.com/bluekitchen/btstack/tree/develop/platform/daemon/binding/java)              | Java wrapper for daemon                                                                                    |
| [<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-mtk-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-mtk-develop)           | [mtk](https://github.com/bluekitchen/btstack/tree/develop/port/mtk)                                   | daemon for rooted Android devices, based on Mediatek MT65xx processor, Java and C client-server API        |
| No build server                                                                                                                                                              | [freertos](https://github.com/bluekitchen/btstack/tree/develop/platform/freertos)                     | [FreeRTOS](https://www.freertos.org): Run BTstack on a dedicated thread, not thread-safe.                  |

## Supported Chipsets

| Chipset                              | Type             | HCI Transport  | SCO over HCI     | BTstack folder | Comment                                        |
|--------------------------------------|------------------|----------------|------------------|----------------|------------------------------------------------|
| Atmel ATWILC3000                     | LE               | H4             | n.a.             | atwilc3000     | Firmware size: 60 kB                           |
| Broadcom UART                        | Dual mode        | H4, H5         | Probably         | bcm            | Max UART baudrate 2 mbps                       |
| Broadcom USB Dongles                 | Dual mode        | USB            | Yes              | bcm            |                                                |
| CSR UART                             | Dual mode        | H4, H5, BCSP   | No (didn't work) | csr            |                                                |
| CSR USB Dongles                      | Dual mode        | USB            | Yes              | csr            |                                                |
| Infineon CYW207xx                    | Dual mode        | H4, H5, USB    | Probably         | bcm            |                                                |
| Infineon CYW20819                    | Dual mode        | H4, H5, USB    | Probably         | bcm            | Keep CTS high during power cycle               |
| Infineon CYW43xxx                    | Dual mode + Wifi | H4, H5         | Don't know       | bcm            | Bluetooth + Wifi Combo Controller              |
| Infineon CYW5557x                    | Dual mode + Wifi | H4             | Yes              | bcm            | autobaud-mode needed, see posix-h4-bcm         |
| Infineon PSoC 4                      | LE               | H4             | n.a.             |                | HCI Firmware part of PSoC Creator kit examples |
| Dialog Semiconductor DA145xx         | LE               | H4, SPI        | n.a.             | da14581        | Official HCI firmware used                     |
| Dialog Semiconductor DA1469x         | LE               | H4, SPI        | n.a              |                | HCI Firmware part of DA1469x SDK               |
| Espressif ESP32                      | Dual mode + Wifi | VHCI, H4       | Yes              |                | SoC with Bluetooth and Wifi                    |
| Espressif ESP32-S3,C2,C3,C5,C6,H2    | LE + Wifi        | VHCI, H4       | Yes              |                | SoC with Bluetooth and Wifi                    |
| EM 9301, 9304, 9305                  | LE               | SPI            | n.a.             | em9301         | Custom HCI SPI implementation                  |
| Intel Dual Wireless 3165, 8260, 8265 | Dual mode        | USB            | Probably         | intel          | Firmware size: 400 kB                          |
| Nordic nRF                           | LE               | H4             | n.a.             |                | Requires custom HCI firmware                   |
| NXP 88W88997, IW416, IW61x           | Dual mode + Wifi | H4             | Yes              | nxp            | Requires initial firmware                      |
| Realtek RTL8822CS                    | Dual mode + Wifi | H5             | Yes              |                | Requires initial firmware and config           |
| Realtek USB Dongles                  | Dual mode + Wifi | USB            | Yes              | realtek        | Requires initial firmware and config           |
| Renesas RX23W                        | LE               | H4             | n.a.             |                | HCI Firmware part of BTTS                      |
| STM STLC2500D                        | Classic          | H4             | No (didn't try)  | stlc2500d      | Custom deep sleep management not supported     |
| STM32-WB                             | LE               | VHCI           | n.a.             |                | SoC with multi-protocol Radio co-processor     |
| STM32-WB0                            | LE               | H4             | n.a.             |                | HCI Firmware part of STM32WB0 Cube Package     |
| Toshiba TC35661                      | Dual mode        | H4             | No               | tc3566         |                                                |
| TI CC256x, WL183x                    | Dual mode        | H4, H5, eHCILL | Yes              | cc256x         | Also WL185x, WL187x, and WL189x                |

[More infos on supported chipsets](https://bluekitchen-gmbh.com/btstack/develop/#chipsets/)

## Source Tree Overview
| Path				 | Description                                      |
|----------|--------------------------------------------------|
| chipset  | Support for individual Bluetooth chipsets        |
| doc      | Sources for BTstack documentation                |
| example  | Example applications available for all ports     |
| platform | Support for special OSs and/or MCU architectures |
| port     | Complete port for a MCU + Chipset combinations   |
| src      | Bluetooth stack implementation                   |
| test     | Unit and PTS tests                               |
| tool     | Helper tools for BTstack                         |
