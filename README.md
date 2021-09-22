<h1>Meaningful Data</h1>

This repository contains examples and instructions touched on during my workshop.

<H2> Helpful Resources </H2>


https://www.arduino.cc/en/reference/firmata<BR>
https://github.com/firmata/protocol/blob/master/protocol.md<BR>
https://www.maxuino.org<br>
http://processing.org/<BR>
  
  
https://publiclab.org<BR>

  
  
https://www.arduino.cc/en/Tutorial/BuiltInExamples/Smoothing

  
  
=============================
  <h2>Puredata on Raspberry Pi with Arduino</h2>
=============================<br>
1. On your computer, download the Rasperry Pi imager from https://www.raspberrypi.org/software/ and connect a suitable SD card.<br>
2. Install full Raspian w/desktop. Insert SD card into RPi and bootup.<br>
3. $ sudo apt-get update<br>
4. $ sudo apt-get install Puredata<br>
5. Once installed, launch the desktop with the command $ Startx. Open Puredata. In PD, Help > find externals, and install the following:<br>
	- zexy<br>
	- speedlim (will show up as 'cyclone')<br>
	- mapping<br>
	- puremapping<br>
	- pduino<br>


6. Download 'comport' folder from this github and put it in Puredata's externals folder on your Pi. Open terminal, run $ make -f makefile, found in the comport folder.<br>
7. Put a copy of ‘arduino.pd’ in root folder of active patch you are working on. This can be found in the pduino external folder you just installed.<br>
8. Burn ‘Standard Firmata’ onto Arduino.<br>
9. Plug Arduino into you Pi and you should be able to read some live data!<br>
	
Try using 'arduino-help.pd' first to get a sense of how to use this protocol. <br>

Troubleshooting:
If 'arduino' patch won't work, Other libraries that may be needed:<br>
iemlib<br>
nilwind<br><br>
	
If alt-get can't find Puredata, you may need to update your clock to current time. Change clock $ date -s ‘month day 00:00:00 year’<br>
