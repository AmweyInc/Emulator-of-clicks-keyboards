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
	* version 0.2 alpha
	* changelog: 
	* Added full support mouse events
	* Optimized alghorith keyboard events
	*/

	while (true)
	{
		if (GetAsyncKeyState(x))
		{
			//Mouse event
			source.mouse_set_inc(1070, 467); // Start fuel
			source.mouse(m_left_d,m_left_u, 1000);
			source.mouse_set_inc(1090, 600);
			source.mouse(m_left_d, m_left_u, 1000);
			source.mouse_set_inc(900, 700);
			Sleep(1000);
			source.mouse(m_left_d, m_left_u, 1000);// Finish fuel

			//Keyboard event
			source.key(w, 8500);
			Sleep(500);
			source.key(a, 1900);
			source.key(w, 500);
			Sleep(500);
			source.key(d, 1800);
			source.key(w, 7000);

			//Keyboard event pair(Async)
			source.key_pair(w, a, 1000);
		}
	}
}
