#include "config.h"
#include "block.h"
#include "util.h"

Block blocks[] = {
	{"cpubars",  2,   1},
	{"memory",   2,   2},
	{"battery",  5,   3},
	{"internet", 5,   4},
	{"volume",   0,   5},
	{"clock",    60,  6},
};

const unsigned short blockCount = LEN(blocks);
