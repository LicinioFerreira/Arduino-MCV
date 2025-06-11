
<h4>Model-View-Controller Pattern in C++ (for Arduino)</h4>


The **Model–View–Controller** (MVC) pattern is a way of organizing code into **three** distinct components, each with a single responsibility:

![test](https://github.com/user-attachments/assets/6e0a82ce-acb0-4629-9991-11e7d71bef05)

**Figure 1.** MVC design. 


**Model**

What it is: The “**_data_**” layer. It knows nothing about the user interface or how data is presented.

**Responsibilities:**

  - Store and manage application state.

  - Provide getters/setters (or more complex data‐access methods).

  - Enforce business rules or validation if needed.

**View**

What it is: The “**_presentation_**” layer. It knows how to show data to the user but doesn’t know where the data comes from or how it’s processed.

**Responsibilities:**

  - Render the current state of the model.

  - Listen for updates (in more advanced frameworks this might involve event subscriptions).

**Controller**

What it is: The “**_glue_**” between Model and View. It interprets user actions (or other inputs), manipulates the model, and tells the view to refresh.

**Responsibilities:**

  - Receive and process input (e.g., serial text, button presses…).

  - Apply any necessary business logic or transformations.

  - Update the model.

  - Trigger view updates.


<h5>Add the classes for the project</h5>

The following images show how to add the implementatation and header files in the Arduino's IDE:

![0](https://github.com/user-attachments/assets/bcc182fb-a867-4777-b9a9-285ccc5c6e0a)

**Figure 2.** Add the implementatation and header files. 


![1](https://github.com/user-attachments/assets/49008c6f-c550-469b-86d1-683cf4c42fe4)

**Figure 3.** Add the implementatation and header files. 

![2](https://github.com/user-attachments/assets/7fd9ef6c-33bb-4dfb-aa6f-a29b133ed1ad)

**Figure 4.** Verbose mode.


After compiling, the output is: 

QBN: arduino:avr:uno
Using board 'uno' from platform in folder: C:\Users\test2\AppData\Local\Arduino15\packages\arduino\hardware\avr\1.8.6
Using core 'arduino' from platform in folder: C:\Users\test2\AppData\Local\Arduino15\packages\arduino\hardware\avr\1.8.6

Detecting libraries used...
C:\Users\test2\AppData\Local\Arduino15\packages\arduino\tools\avr-gcc\7.3.0-atmel3.6.1-arduino7/bin/**avr-g++** -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -flto -w -x c++ -E -CC -mmcu=**atmega328p** -DF_CPU=16000000L -DARDUINO=10607 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR -IC:\Users\test2\AppData\Local\Arduino15\packages\arduino\hardware\avr\1.8.6\cores\arduino -IC:\Users\test2\AppData\Local\Arduino15\packages\arduino\hardware\avr\1.8.6\variants\standard C:\Users\test2\AppData\Local\arduino\sketches\2FFF8DBCF43B0A149D22D525B7B49FAE\sketch\MVC.ino.cpp -o nul
Using cached library dependencies for file: C:\Users\test2\AppData\Local\arduino\sketches\2FFF8DBCF43B0A149D22D525B7B49FAE\sketch\Model.cpp
C:\Users\test2\AppData\Local\Arduino15\packages\arduino\tools\avr-gcc\7.3.0-atmel3.6.1-arduino7/bin/**avr-g++** -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -flto -w -x c++ -E -CC -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10607 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR -IC:\Users\test2\AppData\Local\Arduino15\packages\arduino\hardware\avr\1.8.6\cores\arduino -IC:\Users\test2\AppData\Local\Arduino15\packages\arduino\hardware\avr\1.8.6\variants\standard C:\Users\test2\AppData\Local\arduino\sketches\2FFF8DBCF43B0A149D22D525B7B49FAE\sketch\Motor.cpp -o nul
Generating function prototypes...
C:\Users\test2\AppData\Local\Arduino15\packages\arduino\tools\avr-gcc\7.3.0-atmel3.6.1-arduino7/bin/**avr-g++** -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -flto -w -x c++ -E -CC -mmcu=**atmega328p** -DF_CPU=16000000L -DARDUINO=10607 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR -IC:\Users\test2\AppData\Local\Arduino15\packages\arduino\hardware\avr\1.8.6\cores\arduino -IC:\Users\test2\AppData\Local\Arduino15\packages\arduino\hardware\avr\1.8.6\variants\standard C:\Users\test2\AppData\Local\arduino\sketches\2FFF8DBCF43B0A149D22D525B7B49FAE\sketch\MVC.ino.cpp -o C:\Users\test2\AppData\Local\Temp\3222712578\sketch_merged.cpp
C:\Users\test2\AppData\Local\Arduino15\packages\builtin\tools\ctags\5.8-arduino11/ctags -u --language-force=c++ -f - --c++-kinds=svpf --fields=KSTtzns --line-directives C:\Users\test2\AppData\Local\Temp\3222712578\sketch_merged.cpp

Compiling sketch...
"C:\\Users\\test2\\AppData\\Local\\Arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7/bin/**avr-g++**" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=**atmega328p** -DF_CPU=16000000L -DARDUINO=10607 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR "-IC:\\Users\\test2\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino" "-IC:\\Users\\test2\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\variants\\standard" "C:\\Users\\test2\\AppData\\Local\\arduino\\sketches\\2FFF8DBCF43B0A149D22D525B7B49FAE\\sketch\\Motor.cpp" -o "C:\\Users\\test2\\AppData\\Local\\arduino\\sketches\\2FFF8DBCF43B0A149D22D525B7B49FAE\\sketch\\Motor.cpp.o"
Using previously compiled file: C:\Users\test2\AppData\Local\arduino\sketches\2FFF8DBCF43B0A149D22D525B7B49FAE\sketch\Model.cpp.o
"C:\\Users\\test2\\AppData\\Local\\Arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7/bin/**avr-g++**" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=**atmega328p** -DF_CPU=16000000L -DARDUINO=10607 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR "-IC:\\Users\\test2\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\cores\\arduino" "-IC:\\Users\\test2\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.8.6\\variants\\standard" "C:\\Users\\test2\\AppData\\Local\\arduino\\sketches\\2FFF8DBCF43B0A149D22D525B7B49FAE\\sketch\\MVC.ino.cpp" -o "C:\\Users\\test2\\AppData\\Local\\arduino\\sketches\\2FFF8DBCF43B0A149D22D525B7B49FAE\\sketch\\MVC.ino.cpp.o"
Compiling libraries...
Compiling core...
Using precompiled core: C:\Users\test2\AppData\Local\arduino\cores\arduino_avr_uno_bad42cc3cbb355f3d07638281f055109\core.a
Linking everything together...
"C:\\Users\\test2\\AppData\\Local\\Arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7/bin/**avr-gcc**" -Wall -Wextra -Os -g -flto -fuse-linker-plugin -Wl,--gc-sections -mmcu=**atmega328p** -o "C:\\Users\\test2\\AppData\\Local\\arduino\\sketches\\2FFF8DBCF43B0A149D22D525B7B49FAE/MVC.ino.elf" "C:\\Users\\test2\\AppData\\Local\\arduino\\sketches\\2FFF8DBCF43B0A149D22D525B7B49FAE\\sketch\\MVC.ino.cpp.o" "C:\\Users\\test2\\AppData\\Local\\arduino\\sketches\\2FFF8DBCF43B0A149D22D525B7B49FAE\\sketch\\Model.cpp.o" "C:\\Users\\test2\\AppData\\Local\\arduino\\sketches\\2FFF8DBCF43B0A149D22D525B7B49FAE\\sketch\\Motor.cpp.o" "C:\\Users\\test2\\AppData\\Local\\arduino\\sketches\\2FFF8DBCF43B0A149D22D525B7B49FAE/..\\..\\cores\\arduino_avr_uno_bad42cc3cbb355f3d07638281f055109\\core.a" "-LC:\\Users\\test2\\AppData\\Local\\arduino\\sketches\\2FFF8DBCF43B0A149D22D525B7B49FAE" -lm
"C:\\Users\\test2\\AppData\\Local\\Arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7/bin/avr-objcopy" -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0 "C:\\Users\\test2\\AppData\\Local\\arduino\\sketches\\2FFF8DBCF43B0A149D22D525B7B49FAE/MVC.ino.elf" "C:\\Users\\test2\\AppData\\Local\\arduino\\sketches\\2FFF8DBCF43B0A149D22D525B7B49FAE/MVC.ino.eep"
"C:\\Users\\test2\\AppData\\Local\\Arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7/bin/avr-objcopy" -O ihex -R .eeprom "C:\\Users\\test2\\AppData\\Local\\arduino\\sketches\\2FFF8DBCF43B0A149D22D525B7B49FAE/MVC.ino.elf" "C:\\Users\\test2\\AppData\\Local\\arduino\\sketches\\2FFF8DBCF43B0A149D22D525B7B49FAE/MVC.ino.hex"
"C:\\Users\\test2\\AppData\\Local\\Arduino15\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7/bin/avr-size" -A "C:\\Users\\test2\\AppData\\Local\\arduino\\sketches\\2FFF8DBCF43B0A149D22D525B7B49FAE/MVC.ino.elf"
Sketch uses 3676 bytes (11%) of program storage space. Maximum is 32256 bytes.
Global variables use 223 bytes (10%) of dynamic memory, leaving 1825 bytes for local variables. Maximum is 2048 bytes.
"C:\Users\test2\AppData\Local\Arduino15\packages\arduino\tools\avrdude\6.3.0-arduino17/bin/avrdude" "-CC:\Users\test2\AppData\Local\Arduino15\packages\arduino\tools\avrdude\6.3.0-arduino17/etc/avrdude.conf" -v  -patmega328p -carduino "-PCOM3" -b115200 -D "-Uflash:w:C:\Users\test2\AppData\Local\arduino\sketches\2FFF8DBCF43B0A149D22D525B7B49FAE/MVC.ino.hex:i"

avrdude: Version 6.3-20190619
         Copyright (c) 2000-2005 Brian Dean, http://www.bdmicro.com/
         Copyright (c) 2007-2014 Joerg Wunsch

         System wide configuration file is "C:\Users\test2\AppData\Local\Arduino15\packages\arduino\tools\avrdude\6.3.0-arduino17/etc/avrdude.conf"

         Using Port                    : COM3
         Using Programmer              : arduino
         Overriding Baud Rate          : 115200
         AVR Part                      : ATmega328P
         Chip Erase delay              : 9000 us
         PAGEL                         : PD7
         BS2                           : PC2
         RESET disposition             : dedicated
         RETRY pulse                   : SCK
         serial program mode           : yes
         parallel program mode         : yes
         Timeout                       : 200
         StabDelay                     : 100
         CmdexeDelay                   : 25
         SyncLoops                     : 32
         ByteDelay                     : 0
         PollIndex                     : 3
         PollValue                     : 0x53
         Memory Detail                 :

                                  Block Poll               Page                       Polled
           Memory Type Mode Delay Size  Indx Paged  Size   Size #Pages MinW  MaxW   ReadBack
           ----------- ---- ----- ----- ---- ------ ------ ---- ------ ----- ----- ---------
           eeprom        65    20     4    0 no       1024    4      0  3600  3600 0xff 0xff
           flash         65     6   128    0 yes     32768  128    256  4500  4500 0xff 0xff
           lfuse          0     0     0    0 no          1    0      0  4500  4500 0x00 0x00
           hfuse          0     0     0    0 no          1    0      0  4500  4500 0x00 0x00
           efuse          0     0     0    0 no          1    0      0  4500  4500 0x00 0x00
           lock           0     0     0    0 no          1    0      0  4500  4500 0x00 0x00
           calibration    0     0     0    0 no          1    0      0     0     0 0x00 0x00
           signature      0     0     0    0 no          3    0      0     0     0 0x00 0x00

         Programmer Type : Arduino
         Description     : Arduino
         Hardware Version: 3
         Firmware Version: 4.4
         Vtarget         : 0.3 V
         Varef           : 0.3 V
         Oscillator      : 28.800 kHz
         SCK period      : 3.3 us

avrdude: AVR device initialized and ready to accept instructions

Reading | ################################################## | 100% 0.00s

avrdude: Device signature = 0x1e950f (probably m328p)
avrdude: reading input file "C:\Users\test2\AppData\Local\arduino\sketches\2FFF8DBCF43B0A149D22D525B7B49FAE/MVC.ino.hex"
avrdude: writing flash (3676 bytes):

Writing | ################################################## | 100% 0.59s

avrdude: 3676 bytes of flash written
avrdude: verifying flash memory against C:\Users\test2\AppData\Local\arduino\sketches\2FFF8DBCF43B0A149D22D525B7B49FAE/MVC.ino.hex:
avrdude: load data flash data from input file C:\Users\test2\AppData\Local\arduino\sketches\2FFF8DBCF43B0A149D22D525B7B49FAE/MVC.ino.hex:
avrdude: input file C:\Users\test2\AppData\Local\arduino\sketches\2FFF8DBCF43B0A149D22D525B7B49FAE/MVC.ino.hex contains 3676 bytes
avrdude: reading on-chip flash data:

Reading | ################################################## | 100% 0.47s

avrdude: verifying ...
avrdude: 3676 bytes of flash verified

avrdude done.  Thank you.

