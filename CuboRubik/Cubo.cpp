#include "Cubo.h"
#include "ofVec3f.h"





void Cubo::moverCaraX()
{

	ofPushMatrix();
	if (movimientosGuardados.size() >= 0)
	{

		for (int i = 0; i < movimientosGuardados.size(); i++)
		{
			ofRotate(90, movimientosGuardados.operator[](i).x, movimientosGuardados.operator[](i).y, movimientosGuardados.operator[](i).z);
		}

	}

	//cout << "/////////////"<< endl;
	time = time + 0.09;
	angle = time * 30;
	ofRotate(angle, movimientos[0].EjeX, movimientos[0].EjeY, movimientos[0].EjeZ);
	Cube.draw();
	//normal();
	ofPopMatrix();
	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		movimientosGuardados.push_back(ofVec3f(movimientos[0].EjeX, movimientos[0].EjeY, movimientos[0].EjeZ));
		CaraX = false;
		ActualizarMovimientos("X");
	}
}
void Cubo::moverCaraXP()
{
	ofPushMatrix();
	if (movimientosGuardados.size() >= 0)
	{

		for (int i = 0; i < movimientosGuardados.size(); i++)
		{
			ofRotate(90, movimientosGuardados.operator[](i).x, movimientosGuardados.operator[](i).y, movimientosGuardados.operator[](i).z);
		}

	}

	//cout << "/////////////"<< endl;
	time = time + 0.09;
	angle = time * 30;
	ofRotate(angle, movimientos[1].EjeX, movimientos[1].EjeY, movimientos[1].EjeZ);
	Cube.draw();
	//normal();
	ofPopMatrix();
	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		movimientosGuardados.push_back(ofVec3f(movimientos[1].EjeX, movimientos[1].EjeY, movimientos[1].EjeZ));
		CaraXP = false;
		ActualizarMovimientos("XP");
	}
}
void Cubo::moverCaraY()
{
	ofPushMatrix();
	if (movimientosGuardados.size() >= 0)
	{

		for (int i = 0; i < movimientosGuardados.size(); i++)
		{
			ofRotate(90, movimientosGuardados.operator[](i).x, movimientosGuardados.operator[](i).y, movimientosGuardados.operator[](i).z);
		}

	}

	//cout << "/////////////"<< endl;
	time = time + 0.09;
	angle = time * 30;
	ofRotate(angle, movimientos[2].EjeX, movimientos[2].EjeY, movimientos[2].EjeZ);
	Cube.draw();
	//normal();
	ofPopMatrix();
	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		movimientosGuardados.push_back(ofVec3f(movimientos[2].EjeX, movimientos[2].EjeY, movimientos[2].EjeZ));
		CaraY = false;
		ActualizarMovimientos("Y");
	}
}



void Cubo::moverCaraYP()
{
	ofPushMatrix();
	if (movimientosGuardados.size() >= 0)
	{

		for (int i = 0; i < movimientosGuardados.size(); i++)
		{
			ofRotate(90, movimientosGuardados.operator[](i).x, movimientosGuardados.operator[](i).y, movimientosGuardados.operator[](i).z);
		}

	}

	//cout << "/////////////"<< endl;
	time = time + 0.09;
	angle = time * 30;
	ofRotate(angle, movimientos[3].EjeX, movimientos[3].EjeY, movimientos[3].EjeZ);
	Cube.draw();
	ofPopMatrix();
	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		movimientosGuardados.push_back(ofVec3f(movimientos[3].EjeX, movimientos[3].EjeY, movimientos[3].EjeZ));
		CaraYP = false;
		ActualizarMovimientos("YP");
	}
}

void Cubo::moverCaraZ()
{
	ofPushMatrix();
	if (movimientosGuardados.size() >= 0)
	{

		for (int i = 0; i < movimientosGuardados.size(); i++)
		{
			ofRotate(90, movimientosGuardados.operator[](i).x, movimientosGuardados.operator[](i).y, movimientosGuardados.operator[](i).z);
		}

	}

	//cout << "/////////////"<< endl;
	time = time + 0.09;
	angle = time * 30;
	ofRotate(angle, movimientos[5].EjeX, movimientos[5].EjeY, movimientos[5].EjeZ);
	Cube.draw();
	ofPopMatrix();
	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		movimientosGuardados.push_back(ofVec3f(movimientos[5].EjeX, movimientos[5].EjeY, movimientos[5].EjeZ));
		CaraZP = false;
		ActualizarMovimientos("ZP");
	}
}
void Cubo::moverCaraZP()
{
	ofPushMatrix();
	if (movimientosGuardados.size() >= 0)
	{

		for (int i = 0; i < movimientosGuardados.size(); i++)
		{
			ofRotate(90, movimientosGuardados.operator[](i).x, movimientosGuardados.operator[](i).y, movimientosGuardados.operator[](i).z);
		}

	}

	time = time + 0.09;
	angle = time * 30;
	ofRotate(angle, movimientos[4].EjeX, movimientos[4].EjeY, movimientos[4].EjeZ);
	Cube.draw();
	ofPopMatrix();
	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		movimientosGuardados.push_back(ofVec3f(movimientos[4].EjeX, movimientos[4].EjeY, movimientos[4].EjeZ));
		CaraZ = false;
		ActualizarMovimientos("Z");
	}

}


void Cubo::ActualizarMovimientos(string movimiento)
{
	Movimiento movTemp[6];
	for (int i = 0; i < 6; i++)
	{

		movTemp[i] = movimientos[i];

	}
	if (movimiento == "X")
	{
		//cout << "X" << endl;
		movimientos[2] = movTemp[5];
		movimientos[3] = movTemp[4];
		movimientos[4] = movTemp[2];
		movimientos[5] = movTemp[3];


	}
	if (movimiento == "Z")
	{
		//cout << "Z" << endl;

		movimientos[0] = movTemp[3];
		movimientos[1] = movTemp[2];
		movimientos[2] = movTemp[0];
		movimientos[3] = movTemp[1];

	}
	if (movimiento == "Y")
	{
		//cout << "Y" << endl;
		movimientos[0] = movTemp[4];
		movimientos[1] = movTemp[5];
		movimientos[4] = movTemp[1];
		movimientos[5] = movTemp[0];


	}
	if (movimiento == "XP")
	{
		//cout << "XP" << endl;

		movimientos[2] = movTemp[4];
		movimientos[3] = movTemp[5];
		movimientos[4] = movTemp[3];
		movimientos[5] = movTemp[2];


	}
	if (movimiento == "YP")
	{
		//cout << "YP" << endl;
		movimientos[0] = movTemp[5];
		movimientos[1] = movTemp[4];
		movimientos[4] = movTemp[0];
		movimientos[5] = movTemp[1];


	}

	if (movimiento == "ZP")
	{
		//cout << "ZP" << endl;
		movimientos[0] = movTemp[2];
		movimientos[1] = movTemp[3];
		movimientos[2] = movTemp[1];
		movimientos[3] = movTemp[0];


	}

}


void Cubo::draw()
{
	if (movimientosGuardados.size() >= 0)
	{
		ofPushMatrix();
		for (int i = 0; i < movimientosGuardados.size(); i++)
		{
			ofRotate(90, movimientosGuardados.operator[](i).x, movimientosGuardados.operator[](i).y, movimientosGuardados.operator[](i).z);
		}
		Cube.draw();
		ofPopMatrix();
	}
	else
	{
		Cube.draw();
	}
	
}

void Cubo::setup()
{

	
	int contador = 0;
	//Puntos cara Frontal y posterior
	for (float pz = z; pz < z + 2; pz++)
	{
		for (float px = x; px < x + 2; px++)
		{
			for (float py = y; py < y + 2; py++)
			{
				PuntosFP[contador] = ofVec3f(px * 25, py * 25, pz * 25);
				
				contador++;
			}
		}
	}


	//Cara frontal y posterior
	for (int i = 1; i <= 2; i++)
	{
		BOOLEAN bandera = false;
		int Cont = 4;
		Cont = (Cont*i) - 4;


		while (bandera == false)
		{
			if (Cont < 4 * i)
			{

				Cube.addVertex(PuntosFP[Cont]);
				if (i == 1 && (PuntosFP[Cont].z == -1.6 * 25) && (PuntosFP[Cont].x >= -1.6 * 25) && (PuntosFP[Cont].y >= -1.6 * 25))
				{
					
					Cube.addColor(ofColor::orange);
				}
				else {
					if (i == 2 && PuntosFP[Cont].z == 1.6 * 25 && PuntosFP[Cont].x >= -1.6 * 25 && PuntosFP[Cont].y >= -1.6 * 25)
					{
					
						Cube.addColor(ofColor::red);
					}
					else
					{
						
						Cube.addColor(ofColor::black);
					}

				}

				Cont++;



			}
			else
			{
				Cont = Cont--;
				int Pib2 = Cont - 2;
				while (Cont > Pib2)
				{
					Cont--;

					Cube.addVertex(PuntosFP[Cont]);
					if (i == 1 && (PuntosFP[Cont].z == -1.6 * 25) && (PuntosFP[Cont].x >= -1.6 * 25) && (PuntosFP[Cont].y >= -1.6 * 25))
					{
						
						Cube.addColor(ofColor::orange);
					}
					else {
						if (i == 2 && PuntosFP[Cont].z == 1.6 * 25 && PuntosFP[Cont].x >= -1.6 * 25 && PuntosFP[Cont].y >= -1.6 * 25)
						{
							
							Cube.addColor(ofColor::red);
						}
						else
						{
							
							Cube.addColor(ofColor::black);
						}

					}
					//Cube.addColor(ofColor::red);
					bandera = true;

				}

			}
		}

	}

	//cara lateral izquierda y derecha

	for (int i = 1; i <= 2; i++)
	{
		BOOLEAN bandera = false;
		ofVec3f Contador[3];
		int Cont = 0;
		int p;
		while (bandera == false)
		{
			if (Cont < 4)
			{

				if (Cont < 2)
				{
					int p1 = 0;
					if (i > 1)
					{
						p1 = Cont + i;
						Cube.addVertex(PuntosFP[p1]);
						if (i == 1 && PuntosFP[p1].x == -1.6 * 25 && PuntosFP[p1].z >= -1.6 * 25 && PuntosFP[p1].y >= -1.6 * 25)
						{
							Cube.addColor(ofColor::green);
						}
						else {
							if (i == 2 && PuntosFP[p1].x == 1.6 * 25 && PuntosFP[p1].z >= -1.6 * 25 && PuntosFP[p1].y >= -1.6 * 25)
							{
								Cube.addColor(ofColor::blue);
							}
							else
							{
								Cube.addColor(ofColor::black);
							}

						}


						Cont++;
					}
					else
					{
						Cube.addVertex(PuntosFP[Cont]);
						if (i == 1 && PuntosFP[Cont].x == -1.6 * 25 && PuntosFP[Cont].z >= -1.6 * 25 && PuntosFP[Cont].y >= -1.6 * 25)
						{
							Cube.addColor(ofColor::green);
						}
						else {
							if (i == 2 && PuntosFP[Cont].x == 1.6 * 25 && PuntosFP[Cont].z >= -1.6 * 25 && PuntosFP[Cont].y >= -1.6 * 25)
							{
								Cube.addColor(ofColor::blue);
							}
							else
							{
								Cube.addColor(ofColor::black);
							}

						}

						Cont++;
					}


				}
				else {

					p = Cont + 2 * i;
					Cube.addVertex(PuntosFP[p]);
					if (i == 1 && PuntosFP[p].x == -1.6 * 25 && PuntosFP[p].z >= -1.6 * 25 && PuntosFP[p].y >= -1.6 * 25)
					{
						Cube.addColor(ofColor::green);
					}
					else {
						if (i == 2 && PuntosFP[p].x == 1.6 * 25 && PuntosFP[p].z >= -1.6 * 25 && PuntosFP[p].y >= -1.6 * 25)
						{
							Cube.addColor(ofColor::blue);
						}
						else
						{
							Cube.addColor(ofColor::black);
						}

					}


					Cont++;
				}
			}
			else
			{
				p = p - 1;

				while (p > 0)
				{

					Cube.addVertex(PuntosFP[p]);
					if (i == 1 && PuntosFP[p].x == -1.6 * 25 && PuntosFP[p].z >= -1.6 * 25 && PuntosFP[p].y >= -1.6 * 25)
					{
						Cube.addColor(ofColor::green);
					}
					else {
						if (i == 2 && PuntosFP[p].x == 1.6 * 25 && PuntosFP[p].z >= -1.6 * 25 && PuntosFP[p].y >= -1.6 * 25)
						{
							Cube.addColor(ofColor::blue);
						}
						else
						{
							Cube.addColor(ofColor::black);
						}

					}
					p = p - 3;

				}
				bandera = true;
			}
		}
	}


	//Tapa de arriba y de abajo
	for (int i = 0; i <= 1; i++)
	{
		BOOLEAN bandera = false;
		int p = i;
		int contador = 0;
		while (bandera == false) {
			if (contador < 4) {
				Cube.addVertex(PuntosFP[p]);
				if (i == 0 && PuntosFP[p].y == -1.6 * 25 && PuntosFP[p].x >= -1.6 * 25 && PuntosFP[p].z >= -1.6 * 25)
				{
					Cube.addColor(ofColor::yellow);
				}
				else {
					if (i == 1 && PuntosFP[p].y == 1.6 * 25 && PuntosFP[p].x >= -1.6 * 25 && PuntosFP[p].z >= -1.6 * 25)
					{
						Cube.addColor(ofColor::white);
					}
					else
					{
						Cube.addColor(ofColor::black);
					}

				}
				p = p + 2;
				contador++;

			}
			else {
				p = p - 2;
				while (contador > 2) {
					contador--;
					p = p - 2;
					Cube.addVertex(PuntosFP[p]);
					if (i == 0 && PuntosFP[p].y == -1.6 * 25 && PuntosFP[p].x >= -1.6 * 25 && PuntosFP[p].z >= -1.6 * 25)
					{
						Cube.addColor(ofColor::yellow);
					}
					else {
						if (i == 1 && PuntosFP[p].y == 1.6 * 25 && PuntosFP[p].x >= -1.6 * 25 && PuntosFP[p].z >= -1.6 * 25)
						{
							Cube.addColor(ofColor::white);
						}
						else
						{
							Cube.addColor(ofColor::black);
						}

					}

				}
				bandera = true;
			}

		}
	}
	//normal();
	movimientos[0] = Movimiento::Movimiento(0, 0, -1);
	movimientos[1] = Movimiento::Movimiento(0, 0, 1);
	movimientos[2] = Movimiento::Movimiento(0, -1, 0);
	movimientos[3] = Movimiento::Movimiento(0, 1, 0);
	movimientos[4] = Movimiento::Movimiento(-1, 0, 0);
	movimientos[5] = Movimiento::Movimiento(1, 0, 0);
}



Cubo::Cubo(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;

}

void Cubo::normal()
{
	//Número de vértices
	int nV = Cube.getNumVertices();

	//Número de triángulos
	int nT = Cube.getNumIndices() / 3;
	ofVec3f * norms = new ofVec3f[nV];

	for (int t = 0; t < nT; t++) {

		int i1 = Cube.getIndex(3 * t);
		int i2 = Cube.getIndex(3 * t + 1);
		int i3 = Cube.getIndex(3 * t + 2);

		const ofPoint &v1 = Cube.getVertex(i1);
		const ofPoint &v2 = Cube.getVertex(i2);
		const ofPoint &v3 = Cube.getVertex(i3);

		//Normal
		ofPoint dir = ((v1 - v2).crossed(v3 - v1).normalized());

		//acumular
		norms[i1] += dir;
		norms[i2] += dir;
		norms[i3] += dir;

	}

	Cube.clearNormals();

	for (int i = 0; i < nV; i++) {
		Cube.addNormal(norms[i].normalize());
	}
}

Cubo::Cubo()
{

}

Cubo::~Cubo()
{
}