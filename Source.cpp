#include "Source.h"
/*
* created by Amwey
*/
SOURCE::SOURCE() {
	std::cout << "RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE" << std::endl;
	
}
void SOURCE::button(DWORD key) {
	keybd_event(key, 0, KEYEVENTF_EXTENDEDKEY, 0);
}
void SOURCE::button_ex(DWORD key) {
	keybd_event(key, 0, KEYEVENTF_KEYUP, 0);
}
void SOURCE::key(DWORD key, int latency) {
	button(key);
	Sleep(latency);
	button_ex(key);
}