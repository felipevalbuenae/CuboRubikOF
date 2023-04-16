#pragma once
#include "ofMain.h";
#include "Movimiento.h";

class Cubo : public ofBaseApp {

public:
	ofMesh Cube;


	BOOLEAN CaraX = false;
	BOOLEAN CaraZ = false;
	BOOLEAN CaraY = false;
	BOOLEAN CaraXP = false;
	BOOLEAN CaraZP = false;
	BOOLEAN CaraYP = false;
	void moverCaraX();
	void moverCaraZ();
	void moverCaraY();
	void moverCaraXP();
	void moverCaraZP();
	void moverCaraYP();

	float time = 0;
	float angle = 0;
	void ActualizarMovimientos(string movimiento);

	vector<ofVec3f> movimientosGuardados;
	ofVec3f PuntosFP[7];
	Movimiento movimientos[5];


	float x, y, z;
	void draw();
	void setup();
	Cubo(float x, float y, float z);
	void normal();
	Cubo();
	~Cubo();
};