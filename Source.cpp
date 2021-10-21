#include "Source.h"
/*
* created by Amwey
*/
SOURCE::SOURCE() {
	std::cout << "RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE//RAMPAGE" << std::endl;
	
}

void SOURCE::m_button(DWORD key) {
	mouse_event(key, 0, 0, 0, 0);
}

void SOURCE::m_button_ex(DWORD key) {
	mouse_event(key, 0, 0, 0, 0);
}

void SOURCE::mouse(DWORD key_d, DWORD key_u, int latency)
{
	m_button(key_d);
	Sleep(latency);
	m_button_ex(key_u);
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
void SOURCE::key_pair(DWORD key, DWORD key_s,int latency) {
	button(key);
	button(key_s);
	Sleep(latency);
	button_ex(key);
	button_ex(key_s);
}
void SOURCE::mouse_get_inc(POINT xypos)
{
	GetCursorPos(&xypos);
	std::cout << "X: " << xypos.x << " Y: " << xypos.y << std::endl;
}

void SOURCE::mouse_get() {
	mouse_get_inc(xypos);
}

void SOURCE::mouse_set_inc(int x, int y) {
	SetCursorPos(x, y);
}