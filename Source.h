#pragma once
/*
* created by Amwey
*/
#include "Header.h"
class SOURCE
{
public:
	SOURCE();
	void button(DWORD key);
	void button_ex(DWORD key);
	void m_button(DWORD key);
	void m_button_ex(DWORD key);
	void mouse(DWORD key_d, DWORD key_u, int latency);
	void key(DWORD key, int latency);
	void key_pair(DWORD key, DWORD key_s, int latency);
	void mouse_get();
	void mouse_set_inc(int x, int y);
	void mouse_get_inc(POINT xypos);
private:
	POINT xypos;
	
	int v_check = 1;
};