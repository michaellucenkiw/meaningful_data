<h1>Test</h1>

<H2> Helpful Resources </H2>


https://www.arduino.cc/en/reference/firmata<BR>
https://github.com/firmata/protocol/blob/master/protocol.md<BR>
https://www.maxuino.org<br>
http://processing.org/<BR>
  
  
https://publiclab.org<BR>

  
  
https://www.arduino.cc/en/Tutorial/BuiltInExamples/Smoothing

  
  
=============================
  <h2>Puredata on Raspberry Pi with Arduino</h2>
=============================
1. Install full Raspian iso
2. Change clock $ date -s ‘month day 00:00:00 year’
3. $ sudo apt-get update
4. $ sudo apt-get install Puredata
5. In PD, Help > find externals
	zexy
	speedlim (will show up as 'cyclone')
	mapping
	puremapping

**KEY**
Download comport 2 folder, in terminal, locate subfolder and run make -f $filename (Makefile?)

6. Put ‘Arduino’ pd files in root folder of active patch
7. Burn ‘Standard Firmata’ onto Arduino
8. Boot


Finder > Go to Folder > ~/.ssh/ >’known_hosts’

Other libraries that may be needed:
iemlib
nilwind
