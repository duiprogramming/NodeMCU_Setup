# NodeMCU_Setup
This repository contains NodeMCU programming setup with Arduino IDE.

These are the steps you need to follow for this,

1. Initially your computer not able to detect NodeMCU board, You need to download and install drivers from below url or available at my GIT repository (CP210x_Windows_Drivers.zip).

  Driver download URL,
	https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers
  
  GitHub Repository,
	https://github.com/duiprogramming/NodeMCU_Setup

2. Add additional board manager url,
  http://arduino.esp8266.com/stable/package_esp8266com_index.json
  
  Add above url in "File" > "Preferences" > "Additional Boards Manager URLs"
  
3. Install NodeMCU in Boards Manager,
  "Tools" > "Board" > "Boards Manager"
  Search for "node". If "esp8266" not installed then install it.
  
4. Then program in Arduino IDE and compile and upload to NodeMCU board.


YouTube URL,
https://youtu.be/ykhfyIOjP9c

