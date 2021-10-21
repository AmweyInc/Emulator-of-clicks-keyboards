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
	void key(DWORD key, int latency);
private:
	
	int v_check = 1;
};