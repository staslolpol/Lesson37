#include "logic.h"
#include "ctime"


bool calculet_colors(int x, int y) {
	
	x = x < 0 ? -x : x;
	y = y < 0 ? -y : y;

	if (x > 8 || y > 8) {
		return false;
	}

	return (x + y) % 2;
}