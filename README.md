# Emulator of clicks keyboards
Imitation of keystrokes by means of software is executed at a low level, making detection impossible.
The software is developed solely for educational purposes, the author is not responsible for the use of this software.
This is not the final build, there will be more updates.
The program emulates pressing at the level of the south bridge, due to which detection of the emulator is impossible!

The program works below than winAPI32!

How to use it:
1. First you need to download a visual studio or any other IDE in which C / C ++ compilation is possible.
2. After starting the project, we can see main.cpp, it has an endless while loop, it already has an example of how to use it.
3. To call the button press enter the following command in the while loop: "source.key (you_key, you_latency);"
You can see all the buttons in keys.h, the delay is calculated in ms,
1 second = 1000 ms.


Version 0.2 Alpha

Changelog: 

	Added full support mouse events
  
	Optimized alghorith keyboard events
