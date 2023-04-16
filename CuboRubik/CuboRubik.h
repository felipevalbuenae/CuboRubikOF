#pragma once
#include "Cubo.h";
class CuboRubik
{
public:

	void TransformarMatriz(string movimiento, int matriz[3][3]);
	void definirMatrizCaras();
	void DibujarCuboEstatico();

	BOOLEAN CaraR = false;
	BOOLEAN CaraF = false;
	BOOLEAN CaraU = false;

	BOOLEAN CaraL = false;
	BOOLEAN CaraB = false;
	BOOLEAN CaraD = false;

	BOOLEAN CaraM = false;
	BOOLEAN CaraE = false;
	BOOLEAN CaraS = false;

	BOOLEAN CaraRP = false;
	BOOLEAN CaraFP = false;
	BOOLEAN CaraUP = false;

	BOOLEAN CaraLP = false;
	BOOLEAN CaraBP = false;
	BOOLEAN CaraDP = false;

	BOOLEAN CaraMP = false;
	BOOLEAN CaraEP = false;
	BOOLEAN CaraSP = false;

	void moverCaraR();
	void moverCaraF();
	void moverCaraU();

	void moverCaraL();
	void moverCaraB();
	void moverCaraBP();
	void moverCaraD();

	void moverCaraM();
	void moverCaraE();
	void moverCaraS();

	void moverCaraRP();
	void moverCaraFP();
	void moverCaraUP();

	void moverCaraLP();

	void moverCaraDP();

	void moverCaraMP();
	void moverCaraEP();
	void moverCaraSP();

	float time = 0;
	float angle = 0;


	int matrizCara3[3][3];
	int matrizCara2[3][3];
	int matrizCara1[3][3];

	Cubo cubos[27];
	CuboRubik();
	~CuboRubik();


};