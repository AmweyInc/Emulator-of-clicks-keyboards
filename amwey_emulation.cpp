#include "Header.h"
#include "Source.h"
#include "keys.h"

int main()
{
	SOURCE source;
	/*
	* created by Amwey
	* 
	* to transmit a key, write source.key(key, delay (in ms));
	* 1 second = 1000 milliseconds (ms)
	* 
	* to start, press x, you can change it in the GetAsyncKeyState (key) method;
	* for additional delay enter Sleep (ms);
	* all available keys can be found in the keys file
	* 
	* version 0.1 alpha
	*/

	while (true)
	{
		if (GetAsyncKeyState(x))
		{
			source.key(w, 8500);
			Sleep(500);
			source.key(a, 1900);
			source.key(w, 500);
			Sleep(500);
			source.key(d, 1800);
			source.key(w, 7000);
		}
	}
}
