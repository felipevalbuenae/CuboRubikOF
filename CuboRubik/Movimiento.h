#pragma once
#include "ofVec3f.h"
class Movimiento
{
public:
	Movimiento();
	Movimiento(int x, int y, int z);
	int EjeX;
	int EjeZ;
	int EjeY;
	~Movimiento();
};
