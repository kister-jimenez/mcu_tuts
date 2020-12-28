# Cross Core Embedded Studio Installation and Setup

## Summary
As a prerequisite to future tutorials, we will need to install and setup [CrossCore Embedded Studio (CCES)](https://wiki.analog.com/resources/tools-software/crosscore/cces/getting-started).

This tutorial will guide you into the installation of Cross Core Embedded Studio and set it up for ADICUP3029.
This includes download and installation of required ADuCM302x Device Family Pack (DFP) ,ADICUP3029 Board Support Pack (BSP), and ARM CMSIS Pack and license activation. This tutorial is to support Windows environment only for the meantime.

For detailed explanation and other useful information, please visit

https://wiki.analog.com/resources/eval/user-guides/eval-adicup3029/introduction

## Download and Install CCES (Windows)

Download latest CCES executable. Recommended is versions 2.6.0 or higher
(As of writing, latest release is 2.9.3)

[CrossCore Embedded Studio 2.9.3 Windows Installer(Executable)](
http://download.analog.com/tools/CrossCoreEmbeddedStudio/Releases/Release_2.9.3/ADI_CrossCoreEmbeddedStudio-Rel2.9.3.exe)

It is best that you save all the files/folders to the default directories recommended by the CrossCore Embedded Studios installer. This way all the instructions and support provided will be easier.

To install CrossCore Embedded Studio, **double-click ADI_CrossCoreEmbeddedStudio-Rel2.8.0.exe**

For detailed installation guide, please refer to https://download.analog.com/tools/CrossCoreEmbeddedStudio/Releases/Release_2.9.3/CCES-InstallationGuide.pdf

#TODO-kim: Insert pictures installation pictures here

After succesfull installation, the following CCES components is installed in your defined installatino directory (or C:\Analog Devices if default):
1. CrossCore Embedded Studio installs to C:\Analog Devices\CrossCore Embedded Studio 2.8.0
2. Eclipse IDE installs to C:\Analog Devices\CrossCore Embedded Studio 2.8.0\Eclipse
3. GNU ARM Embedded Toolchain for Cortex-M installs to C:\Analog Devices\CrossCore Embedded 4.Studio 2.8.0\ARM\gcc-arm-embedded
4. OpenOCD installs to C:\Analog Devices\CrossCore Embedded Studio 2.8.0\ARM\openocd\bin
5. CMSIS Pack files are installed to C:\Analog Devices\CrossCore Embedded Studio 2.8.0\ARM\packs

## Setup for EVAL-ADICUP3029

### License Activation

The first time you launch CrossCore Embedded Studio, you will be prompted to input a serial number, name, and email address. The serial number for ALL EVAL-ADICUP3029 boards is:

`EZK-CCES-QZJ9-PHY8-PWN5-2VEW-YMUB-HUI3-BW01`

The New License Wizard will guide you through the process.

* Select Yes to install a license at this time.
* Choose “I have a serial number that I would like to activate” and click Next.
* Enter the serial number above ( EZK-CCES-QZJ9-PHY8-PWN5-2VEW-YMUB-HUI3-BW01 ) and click Next.
* Choose “Install and activate a license on-line all in one step” and click Next.
* Complete your name and address and click Finish.
* On success, you will be prompted with a dialog that tells you that “Your license has been successfully activated”. Click OK.

Once the serial number has been activated, the CrossCore development tools will allow you full and unlimited access to all the features of the tool when using the Analog Devices family of ARM Cortex Processor.

#TODO-kim: Insert pictures of license activation here.

### Workspace

A CCES workspace is a folder (e.g. c:\Users\anon\cces\2.6.0) that contains project resources and metadata. When projects are created or imported, details about that project are stored in the workspace. The workspace metadata also includes preferences set through the CCES Preferences dialog box and IDE window layouts. By default, CCES creates new projects within your workspace folder.

Each time you start CCES, you will be prompted for a workspace location. You can opt to default to a workspace directory by choosing to use a workspace directory as your default. You will not be prompted the next time you open CCES.

#TODO-kim: Insert pictures workspace startup promt here.

### Install or upgrade the Analog Devices Packs for CCES

CCES 2.6.0 does not comes with the Analog Device specific packs or the ARM CMSIS Pack file pre-installed. The following Packs are required to use the EVAL-ADICUP3029 along with the hardware examples and wireless connectivity.

1. ADuCM302x Device Family Pack (DFP)
2. ADICUP3029 Board Support Pack (BSP)
3. ADI Sensor Software Pack
4. ADI Wi-Fi Software Pack
5. ADI BLE Software Pack
6. ARM CMSIS Pack

#### ADuCM302x Device Family Pack (DFP)
To install the ADuCM302x DFP:

1. Switch to the CMSIS Pack Manager perspective by selecting Window | Perspective | Open Perspective | Other… | CMSIS Pack Manager.
2. Once opened, select Check for Updates on Web ( blue arrows on the toolbar ). This may time a minute or two.
3. Choose Analog Devices and ADuCM302x Series in the Devices View.
4. Select the ADuCM302x CMSIS Pack version (choose version 2.0.0 or higher) from the Packs View.
5. Click the Install Action.

#TODO-kim: Insert pictures of installing DFP here.

#### ADICUP3029 Board Support Pack (BSP)

The ADICUP3029 Board Support Pack (BSP) provides the drivers for off-chip peripherals which are on the ADICUP3029 Evaluation Board and examples for peripherals on the ADUCM3029 processor. The drivers and examples in the BSP are designed to work with CrossCore Embedded Studio and the ADuCM302x Device Family Pack (DFP) 2.0.0.

For more information on the ADICUP3029 BSP, please refer to the User's Guide in the Documents folder (e.g. \<Path to CCES>\ARM\packs\AnalogDevices\EVAL-ADICUP3029_BSP\1.0.0\Documents\EVAL-ADICUP3029_Users_Guide.pdf)

#### ADI Sensor Software Pack
The ADI Sensor Software pack contains various sensor software components and associated examples. The examples in the sensor pack are designed to work with ADICUP3029 board and associated sensor shields. ADI Sensor Software requires CrossCore Embedded Studio 2.6.0 ® , ADuCM302x Device Family Pack 2.0.0 and ADICUP3029 Board Support Package 1.1.0.

For more information on the ADI Sensor Software Pack, please refer to the User's Guide in the Documents folder (e.g. \<Path to CCES>\ARM\packs\AnalogDevices\ADI-SensorSoftware\1.0.0\Documents\SensorSoftware_Users_Guide.pdf)

#### ADI WiFi Software Pack
Wi-Fi software pack contains source code written to interface the ADuCM3029 with the ESP8266 Wi-Fi radio module. This software package acts as a library that can be used with any platform containing the ADuCM3029 and the ESP8266.

ADI WiFi Software requires CrossCore Embedded Studio 2.6.0 ® , ADuCM302x Device Family Pack 2.0.0 and ADICUP3029 Board Support Package 1.1.0.

For more information on the ADI Sensor Software Pack, please refer to the User's Guide in the Documents folder (\<Path to CCES>\ARM\packs\AnalogDevices\ADI-WifiSoftware\1.0.0\Documents\Wifi_Software_Users_Guide.pdf)

#### ADI Bluetooth Software Pack
BLE software pack contains source code written to interface the ADuCM3029 with the EM9304 radio. This software package acts as a library that can be used with any platform containing the ADuCM3029 and the EM9304.

The Software pack also includes the currently version of the IoTNode Android application for Bluetooth Low-Energy host connectivity.

ADI BLE Software requires CrossCore Embedded Studio 2.6.0 ® , ADuCM302x Device Family Pack 2.0.0 and ADICUP3029 Board Support Package 1.1.0.

For more information on the ADI Bluetooth Software Pack, please refer to the User's Guide in the Documents folder (e.g. \<Path to CCES>\ARM\packs\AnalogDevices\ADI-BleSoftware\1.0.0\Documents\BLE_Software_Users_Guide.pdf)

#### ARM CMSIS Pack
To install the ARM 4.5.0 CMSIS Pack(or greater):
Switch to the CMSIS Pack Manager perspective by selecting Window | Perspective | Open Perspective | Other… | CMSIS Pack Manager.
Once opened, select Check for Updates on Web ( blue arrows on the toolbar ), if you have not already done so.
Choose ARM in the Devices View.
Select the Generic and ARM.CMSIS from the Packs View, select version 4.5.0
Click the Install Action.

## Links/References
For detailed explaination of steps taken, please refer to the following link(s):

1. https://wiki.analog.com/resources/tools-software/crosscore/cces/getting-started
2. https://wiki.analog.com/resources/eval/user-guides/eval-adicup3029/introduction
3. https://www.analog.com/en/design-center/evaluation-hardware-and-software/software/adswt-cces.html#software-relatedsoftware
4. https://download.analog.com/tools/CrossCoreEmbeddedStudio/Releases/Release_2.9.3/CCES-InstallationGuide.pdf
5. https://wiki.analog.com/resources/eval/user-guides/eval-adicup3029/tools/cces_user_guide
