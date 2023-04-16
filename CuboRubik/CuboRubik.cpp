#include "CuboRubik.h"



void CuboRubik::TransformarMatriz(string movimiento, int matriz[3][3])
{
	if (movimiento == "CR")
	{
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (j == 0) {
					matriz[i][j] = matrizTemp[2][i];
				}
				if (j == 1) {
					matriz[i][j] = matrizTemp[1][i];
				}
				if (j == 2) {
					matriz[i][j] = matrizTemp[0][i];
				}
			}
			cout << endl;

		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizCara1[i][j] = matriz[i][j];
				cout << matrizCara1[i][j];
			}
			cout << endl;
		}
	}

	if (movimiento == "CRP")
	{
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0) {
					matriz[i][j] = matrizTemp[j][2];
				}
				if (i == 1) {
					matriz[i][j] = matrizTemp[j][1];
				}
				if (i == 2) {
					matriz[i][j] = matrizTemp[j][0];
				}
			}
			cout << endl;
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizCara1[i][j] = matriz[i][j];
				cout << matrizCara1[i][j];
			}
			cout << endl;
		}

	}
	if (movimiento == "CM")
	{
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (j == 0) {
					matriz[i][j] = matrizTemp[2][i];
				}
				if (j == 1) {
					matriz[i][j] = matrizTemp[1][i];
				}
				if (j == 2) {
					matriz[i][j] = matrizTemp[0][i];
				}
			}
			cout << endl;

		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizCara2[i][j] = matriz[i][j];
				cout << matrizCara2[i][j];
			}
			cout << endl;
		}
	}

	if (movimiento == "CMP")
	{
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0) {
					matriz[i][j] = matrizTemp[j][2];
				}
				if (i == 1) {
					matriz[i][j] = matrizTemp[j][1];
				}
				if (i == 2) {
					matriz[i][j] = matrizTemp[j][0];
				}
			}
			cout << endl;
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizCara2[i][j] = matriz[i][j];
				cout << matrizCara2[i][j];
			}
			cout << endl;
		}

	}


	if (movimiento == "CL")
	{
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0) {
					matriz[i][j] = matrizTemp[j][2];
				}
				if (i == 1) {
					matriz[i][j] = matrizTemp[j][1];
				}
				if (i == 2) {
					matriz[i][j] = matrizTemp[j][0];
				}
			}
			cout << endl;
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizCara3[i][j] = matriz[i][j];
				cout << matrizCara3[i][j];
			}
			cout << endl;
		}

	}
	if (movimiento == "CLP")
	{
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (j == 0) {
					matriz[i][j] = matrizTemp[2][i];
				}
				if (j == 1) {
					matriz[i][j] = matrizTemp[1][i];
				}
				if (j == 2) {
					matriz[i][j] = matrizTemp[0][i];
				}
			}
			cout << endl;

		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizCara3[i][j] = matriz[i][j];
				cout << matrizCara3[i][j];
			}
			cout << endl;
		}
	}

	if (movimiento == "CF")
	{
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (j == 0) {
					matriz[i][j] = matrizTemp[2][i];
				}
				if (j == 1) {
					matriz[i][j] = matrizTemp[1][i];
				}
				if (j == 2) {
					matriz[i][j] = matrizTemp[0][i];
				}
			}
			cout << endl;

		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0)
				{
					matrizCara1[j][0] = matriz[j][2];
				}
				if (i == 1)
				{
					matrizCara2[j][0] = matriz[j][1];
				}
				if (i == 2)
				{

					matrizCara3[j][0] = matriz[j][0];
				}
			}
			cout << endl;
		}
	}
	if (movimiento == "CFP") {
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0) {
					matriz[i][j] = matrizTemp[j][2];
				}
				if (i == 1) {
					matriz[i][j] = matrizTemp[j][1];
				}
				if (i == 2) {
					matriz[i][j] = matrizTemp[j][0];
				}
			}
			cout << endl;
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0)
				{
					matrizCara1[j][0] = matriz[j][2];
				}
				if (i == 1)
				{
					matrizCara2[j][0] = matriz[j][1];
				}
				if (i == 2)
				{

					matrizCara3[j][0] = matriz[j][0];
				}
			}
			cout << endl;
		}

	}

	if (movimiento == "CS")
	{
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (j == 0) {
					matriz[i][j] = matrizTemp[2][i];
				}
				if (j == 1) {
					matriz[i][j] = matrizTemp[1][i];
				}
				if (j == 2) {
					matriz[i][j] = matrizTemp[0][i];
				}
			}
			cout << endl;

		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0)
				{
					matrizCara1[j][1] = matriz[j][2];
				}
				if (i == 1)
				{
					matrizCara2[j][1] = matriz[j][1];
				}
				if (i == 2)
				{

					matrizCara3[j][1] = matriz[j][0];
				}
			}
			cout << endl;
		}
	}
	if (movimiento == "CSP")
	{
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0) {
					matriz[i][j] = matrizTemp[j][2];
				}
				if (i == 1) {
					matriz[i][j] = matrizTemp[j][1];
				}
				if (i == 2) {
					matriz[i][j] = matrizTemp[j][0];
				}
			}
			cout << endl;
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0)
				{
					matrizCara1[j][1] = matriz[j][2];
				}
				if (i == 1)
				{
					matrizCara2[j][1] = matriz[j][1];
				}
				if (i == 2)
				{
					matrizCara3[j][1] = matriz[j][0];
				}
			}
			cout << endl;
		}

	}
	if (movimiento == "CBP")
	{
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (j == 0) {
					matriz[i][j] = matrizTemp[2][i];
				}
				if (j == 1) {
					matriz[i][j] = matrizTemp[1][i];
				}
				if (j == 2) {
					matriz[i][j] = matrizTemp[0][i];
				}
			}
			cout << endl;

		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0)
				{
					matrizCara1[j][2] = matriz[j][2];
				}
				if (i == 1)
				{
					matrizCara2[j][2] = matriz[j][1];
				}
				if (i == 2)
				{

					matrizCara3[j][2] = matriz[j][0];
				}
			}
			cout << endl;
		}
	}
	if (movimiento == "CB") {
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0) {
					matriz[i][j] = matrizTemp[j][2];
				}
				if (i == 1) {
					matriz[i][j] = matrizTemp[j][1];
				}
				if (i == 2) {
					matriz[i][j] = matrizTemp[j][0];
				}
			}
			cout << endl;
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0)
				{
					matrizCara1[j][2] = matriz[j][2];
				}
				if (i == 1)
				{
					matrizCara2[j][2] = matriz[j][1];
				}
				if (i == 2)
				{

					matrizCara3[j][2] = matriz[j][0];
				}
			}
			cout << endl;
		}

	}
	if (movimiento == "CU")
	{
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (j == 0) {
					matriz[i][j] = matrizTemp[2][i];
				}
				if (j == 1) {
					matriz[i][j] = matrizTemp[1][i];
				}
				if (j == 2) {
					matriz[i][j] = matrizTemp[0][i];
				}
			}
			cout << endl;

		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0)
				{
					matrizCara1[0][j] = matriz[2][j];
				}
				if (i == 1)
				{
					matrizCara2[0][j] = matriz[1][j];
				}
				if (i == 2)
				{

					matrizCara3[0][j] = matriz[0][j];
				}
			}
			cout << endl;
		}
	}
	if (movimiento == "CUP") {
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0) {
					matriz[i][j] = matrizTemp[j][2];
				}
				if (i == 1) {
					matriz[i][j] = matrizTemp[j][1];
				}
				if (i == 2) {
					matriz[i][j] = matrizTemp[j][0];
				}
			}
			cout << endl;

		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0)
				{
					matrizCara1[0][j] = matriz[2][j];
				}
				if (i == 1)
				{
					matrizCara2[0][j] = matriz[1][j];
				}
				if (i == 2)
				{

					matrizCara3[0][j] = matriz[0][j];
				}
			}
			cout << endl;
		}
	}
	if (movimiento == "CDP")
	{
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (j == 0) {
					matriz[i][j] = matrizTemp[2][i];
				}
				if (j == 1) {
					matriz[i][j] = matrizTemp[1][i];
				}
				if (j == 2) {
					matriz[i][j] = matrizTemp[0][i];
				}
			}
			cout << endl;

		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0)
				{
					matrizCara1[2][j] = matriz[2][j];
				}
				if (i == 1)
				{
					matrizCara2[2][j] = matriz[1][j];
				}
				if (i == 2)
				{

					matrizCara3[2][j] = matriz[0][j];
				}
			}
			cout << endl;
		}
	}
	if (movimiento == "CD") {
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0) {
					matriz[i][j] = matrizTemp[j][2];
				}
				if (i == 1) {
					matriz[i][j] = matrizTemp[j][1];
				}
				if (i == 2) {
					matriz[i][j] = matrizTemp[j][0];
				}
			}
			cout << endl;

		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0)
				{
					matrizCara1[2][j] = matriz[2][j];
				}
				if (i == 1)
				{
					matrizCara2[2][j] = matriz[1][j];
				}
				if (i == 2)
				{

					matrizCara3[2][j] = matriz[0][j];
				}
			}
			cout << endl;
		}
	}

	//
	if (movimiento == "CEP")
	{
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (j == 0) {
					matriz[i][j] = matrizTemp[2][i];
				}
				if (j == 1) {
					matriz[i][j] = matrizTemp[1][i];
				}
				if (j == 2) {
					matriz[i][j] = matrizTemp[0][i];
				}
			}
			cout << endl;

		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0)
				{
					matrizCara1[1][j] = matriz[2][j];
				}
				if (i == 1)
				{
					matrizCara2[1][j] = matriz[1][j];
				}
				if (i == 2)
				{

					matrizCara3[1][j] = matriz[0][j];
				}
			}
			cout << endl;
		}
	}
	if (movimiento == "CE") {
		int matrizTemp[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrizTemp[i][j] = matriz[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0) {
					matriz[i][j] = matrizTemp[j][2];
				}
				if (i == 1) {
					matriz[i][j] = matrizTemp[j][1];
				}
				if (i == 2) {
					matriz[i][j] = matrizTemp[j][0];
				}
			}
			cout << endl;

		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 0)
				{
					matrizCara1[1][j] = matriz[2][j];
				}
				if (i == 1)
				{
					matrizCara2[1][j] = matriz[1][j];
				}
				if (i == 2)
				{

					matrizCara3[1][j] = matriz[0][j];
				}
			}
			cout << endl;
		}
	}
}

void CuboRubik::definirMatrizCaras()
{
	int contador = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrizCara1[i][j] = contador;
			cout << matrizCara1[i][j] << endl;
			contador++;
		}

	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			
			matrizCara2[i][j] = contador;
			cout << matrizCara2[i][j] << endl;
			contador++;
		}

	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrizCara3[i][j] = contador;
			cout << matrizCara3[i][j] << endl;
			contador++;
		}

	}
}

void CuboRubik::DibujarCuboEstatico()
{

	for (int i = 0; i < 27; i++)
	{

		cubos[i].draw();
		
	}
	
}

void CuboRubik::moverCaraR()
{
	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizCara1[i][j]].moverCaraX();

		}

	}

	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizCara2[i][j]].draw();
		}

	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{

			cubos[matrizCara3[i][j]].draw();


		}

	}
	
	if (angle >= 90)
	{

		angle = 0;
		time = 0;
		TransformarMatriz("CR", matrizCara1);
		CaraR = false;
	}


}
void CuboRubik::moverCaraF()
{
	int matrizTemp1[3][3];
	int matrizTemp2[3][3];
	int matrizTemp3[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 0)
			{
				matrizTemp1[j][i] = matrizCara3[j][0];
				matrizTemp2[j][i] = matrizCara3[j][1];
				matrizTemp3[j][i] = matrizCara3[j][2];
			}
			if (i == 1)
			{
				matrizTemp1[j][i] = matrizCara2[j][0];
				matrizTemp2[j][i] = matrizCara2[j][1];
				matrizTemp3[j][i] = matrizCara2[j][2];
			}
			if (i == 2)
			{
				matrizTemp1[j][i] = matrizCara1[j][0];
				matrizTemp2[j][i] = matrizCara1[j][1];
				matrizTemp3[j][i] = matrizCara1[j][2];
			}
		}
	}

	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp1[i][j]].moverCaraZ();
		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp2[i][j]].draw();

		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp3[i][j]].draw();

		}
	}

	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		TransformarMatriz("CF", matrizTemp1);
		CaraF = false;
	}

}
void CuboRubik::moverCaraU()
{
	int matrizTemp1[3][3];
	int matrizTemp2[3][3];
	int matrizTemp3[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 0)
			{
				matrizTemp1[i][j] = matrizCara3[0][j];
				matrizTemp2[i][j] = matrizCara3[1][j];
				matrizTemp3[i][j] = matrizCara3[2][j];
			}
			if (i == 1)
			{
				matrizTemp1[i][j] = matrizCara2[0][j];
				matrizTemp2[i][j] = matrizCara2[1][j];
				matrizTemp3[i][j] = matrizCara2[2][j];
			}
			if (i == 2)
			{
				matrizTemp1[i][j] = matrizCara1[0][j];
				matrizTemp2[i][j] = matrizCara1[1][j];
				matrizTemp3[i][j] = matrizCara1[2][j];
			}
		}
	}

	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp1[i][j]].moverCaraY();
		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp2[i][j]].draw();

		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp3[i][j]].draw();

		}
	}
	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		TransformarMatriz("CU", matrizTemp1);
		CaraU = false;
	}
}
void CuboRubik::moverCaraFP()
{
	int matrizTemp1[3][3];
	int matrizTemp2[3][3];
	int matrizTemp3[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 0)
			{
				matrizTemp1[j][i] = matrizCara3[j][0];
				matrizTemp2[j][i] = matrizCara3[j][1];
				matrizTemp3[j][i] = matrizCara3[j][2];
			}
			if (i == 1)
			{
				matrizTemp1[j][i] = matrizCara2[j][0];
				matrizTemp2[j][i] = matrizCara2[j][1];
				matrizTemp3[j][i] = matrizCara2[j][2];
			}
			if (i == 2)
			{
				matrizTemp1[j][i] = matrizCara1[j][0];
				matrizTemp2[j][i] = matrizCara1[j][1];
				matrizTemp3[j][i] = matrizCara1[j][2];
			}
		}
	}

	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp1[i][j]].moverCaraZP();
		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp2[i][j]].draw();

		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp3[i][j]].draw();

		}
	}

	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		TransformarMatriz("CFP", matrizTemp1);
		CaraFP = false;
	}
}
void CuboRubik::moverCaraUP()
{
	int matrizTemp1[3][3];
	int matrizTemp2[3][3];
	int matrizTemp3[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 0)
			{
				matrizTemp1[i][j] = matrizCara3[0][j];
				matrizTemp2[i][j] = matrizCara3[1][j];
				matrizTemp3[i][j] = matrizCara3[2][j];
			}
			if (i == 1)
			{
				matrizTemp1[i][j] = matrizCara2[0][j];
				matrizTemp2[i][j] = matrizCara2[1][j];
				matrizTemp3[i][j] = matrizCara2[2][j];
			}
			if (i == 2)
			{
				matrizTemp1[i][j] = matrizCara1[0][j];
				matrizTemp2[i][j] = matrizCara1[1][j];
				matrizTemp3[i][j] = matrizCara1[2][j];
			}
		}
	}

	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp1[i][j]].moverCaraYP();
		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp2[i][j]].draw();

		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp3[i][j]].draw();

		}
	}
	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		TransformarMatriz("CUP", matrizTemp1);
		CaraUP = false;
	}
}
void CuboRubik::moverCaraRP()
{
	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizCara1[i][j]].moverCaraXP();

		}

	}

	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizCara2[i][j]].draw();
		}

	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{

			cubos[matrizCara3[i][j]].draw();


		}

	}
	if (angle >= 90)
	{

		angle = 0;
		time = 0;
		TransformarMatriz("CRP", matrizCara1);
		CaraRP = false;
	}

}




void CuboRubik::moverCaraM()
{
	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizCara2[i][j]].moverCaraX();

		}

	}

	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizCara1[i][j]].draw();
		}

	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{

			cubos[matrizCara3[i][j]].draw();


		}

	}
	if (angle >= 90)
	{

		angle = 0;
		time = 0;
		TransformarMatriz("CM", matrizCara2);
		CaraM = false;
	}


}
void CuboRubik::moverCaraE()
{
	int matrizTemp1[3][3];
	int matrizTemp2[3][3];
	int matrizTemp3[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 0)
			{
				matrizTemp1[i][j] = matrizCara3[0][j];
				matrizTemp2[i][j] = matrizCara3[1][j];
				matrizTemp3[i][j] = matrizCara3[2][j];
			}
			if (i == 1)
			{
				matrizTemp1[i][j] = matrizCara2[0][j];
				matrizTemp2[i][j] = matrizCara2[1][j];
				matrizTemp3[i][j] = matrizCara2[2][j];
			}
			if (i == 2)
			{
				matrizTemp1[i][j] = matrizCara1[0][j];
				matrizTemp2[i][j] = matrizCara1[1][j];
				matrizTemp3[i][j] = matrizCara1[2][j];
			}
		}
	}

	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp2[i][j]].moverCaraYP();
		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp1[i][j]].draw();

		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp3[i][j]].draw();

		}
	}
	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		TransformarMatriz("CE", matrizTemp2);
		CaraE = false;
	}
}
void CuboRubik::moverCaraS()
{
	int matrizTemp1[3][3];
	int matrizTemp2[3][3];
	int matrizTemp3[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 0)
			{
				matrizTemp1[j][i] = matrizCara3[j][0];
				matrizTemp2[j][i] = matrizCara3[j][1];
				matrizTemp3[j][i] = matrizCara3[j][2];
			}
			if (i == 1)
			{
				matrizTemp1[j][i] = matrizCara2[j][0];
				matrizTemp2[j][i] = matrizCara2[j][1];
				matrizTemp3[j][i] = matrizCara2[j][2];
			}
			if (i == 2)
			{
				matrizTemp1[j][i] = matrizCara1[j][0];
				matrizTemp2[j][i] = matrizCara1[j][1];
				matrizTemp3[j][i] = matrizCara1[j][2];
			}
		}
	}
	
	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp2[i][j]].moverCaraZ();
		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp1[i][j]].draw();

		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp3[i][j]].draw();

		}
	}

	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		TransformarMatriz("CS", matrizTemp2);
		CaraS = false;
	}
}
void CuboRubik::moverCaraMP()
{
	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizCara2[i][j]].moverCaraXP();

		}

	}

	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizCara1[i][j]].draw();
		}

	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{

			cubos[matrizCara3[i][j]].draw();


		}

	}
	if (angle >= 90)
	{

		angle = 0;
		time = 0;
		TransformarMatriz("CMP", matrizCara2);
		CaraMP = false;
	}


}

void CuboRubik::moverCaraEP()
{
	int matrizTemp1[3][3];
	int matrizTemp2[3][3];
	int matrizTemp3[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 0)
			{
				matrizTemp1[i][j] = matrizCara3[0][j];
				matrizTemp2[i][j] = matrizCara3[1][j];
				matrizTemp3[i][j] = matrizCara3[2][j];
			}
			if (i == 1)
			{
				matrizTemp1[i][j] = matrizCara2[0][j];
				matrizTemp2[i][j] = matrizCara2[1][j];
				matrizTemp3[i][j] = matrizCara2[2][j];
			}
			if (i == 2)
			{
				matrizTemp1[i][j] = matrizCara1[0][j];
				matrizTemp2[i][j] = matrizCara1[1][j];
				matrizTemp3[i][j] = matrizCara1[2][j];
			}
		}
	}

	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp2[i][j]].moverCaraY();
		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp1[i][j]].draw();

		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp3[i][j]].draw();

		}
	}
	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		TransformarMatriz("CEP", matrizTemp2);
		CaraEP = false;
	}
}

void CuboRubik::moverCaraSP()
{
	int matrizTemp1[3][3];
	int matrizTemp2[3][3];
	int matrizTemp3[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 0)
			{
				matrizTemp1[j][i] = matrizCara3[j][0];
				matrizTemp2[j][i] = matrizCara3[j][1];
				matrizTemp3[j][i] = matrizCara3[j][2];
			}
			if (i == 1)
			{
				matrizTemp1[j][i] = matrizCara2[j][0];
				matrizTemp2[j][i] = matrizCara2[j][1];
				matrizTemp3[j][i] = matrizCara2[j][2];
			}
			if (i == 2)
			{
				matrizTemp1[j][i] = matrizCara1[j][0];
				matrizTemp2[j][i] = matrizCara1[j][1];
				matrizTemp3[j][i] = matrizCara1[j][2];
			}
		}
	}
	
	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp2[i][j]].moverCaraZP();
		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp1[i][j]].draw();

		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp3[i][j]].draw();

		}
	}

	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		TransformarMatriz("CSP", matrizTemp2);
		CaraSP = false;
	}
}


void CuboRubik::moverCaraL()
{
	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizCara3[i][j]].moverCaraXP();

		}

	}

	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizCara1[i][j]].draw();
		}

	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{

			cubos[matrizCara2[i][j]].draw();


		}

	}
	if (angle >= 90)
	{

		angle = 0;
		time = 0;
		TransformarMatriz("CL", matrizCara3);
		CaraL = false;
	}

}
void CuboRubik::moverCaraB()
{
	int matrizTemp1[3][3];
	int matrizTemp2[3][3];
	int matrizTemp3[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 0)
			{
				matrizTemp1[j][i] = matrizCara3[j][0];
				matrizTemp2[j][i] = matrizCara3[j][1];
				matrizTemp3[j][i] = matrizCara3[j][2];
			}
			if (i == 1)
			{
				matrizTemp1[j][i] = matrizCara2[j][0];
				matrizTemp2[j][i] = matrizCara2[j][1];
				matrizTemp3[j][i] = matrizCara2[j][2];
			}
			if (i == 2)
			{
				matrizTemp1[j][i] = matrizCara1[j][0];
				matrizTemp2[j][i] = matrizCara1[j][1];
				matrizTemp3[j][i] = matrizCara1[j][2];
			}
		}
	}
	
	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp3[i][j]].moverCaraZP();
		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp1[i][j]].draw();

		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp2[i][j]].draw();

		}
	}

	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		TransformarMatriz("CB", matrizTemp3);
		CaraB = false;
	}

}
void CuboRubik::moverCaraBP()
{
	int matrizTemp1[3][3];
	int matrizTemp2[3][3];
	int matrizTemp3[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 0)
			{
				matrizTemp1[j][i] = matrizCara3[j][0];
				matrizTemp2[j][i] = matrizCara3[j][1];
				matrizTemp3[j][i] = matrizCara3[j][2];
			}
			if (i == 1)
			{
				matrizTemp1[j][i] = matrizCara2[j][0];
				matrizTemp2[j][i] = matrizCara2[j][1];
				matrizTemp3[j][i] = matrizCara2[j][2];
			}
			if (i == 2)
			{
				matrizTemp1[j][i] = matrizCara1[j][0];
				matrizTemp2[j][i] = matrizCara1[j][1];
				matrizTemp3[j][i] = matrizCara1[j][2];
			}
		}
	}
	
	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp3[i][j]].moverCaraZ();
		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp1[i][j]].draw();

		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp2[i][j]].draw();

		}
	}

	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		TransformarMatriz("CBP", matrizTemp3);
		CaraBP = false;
	}

}
void CuboRubik::moverCaraD()
{
	int matrizTemp1[3][3];
	int matrizTemp2[3][3];
	int matrizTemp3[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 0)
			{
				matrizTemp1[i][j] = matrizCara3[0][j];
				matrizTemp2[i][j] = matrizCara3[1][j];
				matrizTemp3[i][j] = matrizCara3[2][j];
			}
			if (i == 1)
			{
				matrizTemp1[i][j] = matrizCara2[0][j];
				matrizTemp2[i][j] = matrizCara2[1][j];
				matrizTemp3[i][j] = matrizCara2[2][j];
			}
			if (i == 2)
			{
				matrizTemp1[i][j] = matrizCara1[0][j];
				matrizTemp2[i][j] = matrizCara1[1][j];
				matrizTemp3[i][j] = matrizCara1[2][j];
			}
		}
	}

	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp3[i][j]].moverCaraYP();
		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp1[i][j]].draw();

		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp2[i][j]].draw();

		}
	}
	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		TransformarMatriz("CD", matrizTemp3);
		CaraD = false;
	}
}
void CuboRubik::moverCaraLP()
{
	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizCara3[i][j]].moverCaraX();

		}

	}

	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizCara1[i][j]].draw();
		}

	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{

			cubos[matrizCara2[i][j]].draw();


		}

	}
	if (angle >= 90)
	{

		angle = 0;
		time = 0;
		TransformarMatriz("CLP", matrizCara3);
		CaraLP = false;
	}

}

void CuboRubik::moverCaraDP()
{
	int matrizTemp1[3][3];
	int matrizTemp2[3][3];
	int matrizTemp3[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 0)
			{
				matrizTemp1[i][j] = matrizCara3[0][j];
				matrizTemp2[i][j] = matrizCara3[1][j];
				matrizTemp3[i][j] = matrizCara3[2][j];
			}
			if (i == 1)
			{
				matrizTemp1[i][j] = matrizCara2[0][j];
				matrizTemp2[i][j] = matrizCara2[1][j];
				matrizTemp3[i][j] = matrizCara2[2][j];
			}
			if (i == 2)
			{
				matrizTemp1[i][j] = matrizCara1[0][j];
				matrizTemp2[i][j] = matrizCara1[1][j];
				matrizTemp3[i][j] = matrizCara1[2][j];
			}
		}
	}
	
	time = time + 0.09;
	angle = time * 30;
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp3[i][j]].moverCaraY();
		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp1[i][j]].draw();

		}
	}
	for (int i = 2; i > -1; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cubos[matrizTemp2[i][j]].draw();

		}
	}
	if (angle >= 90)
	{
		angle = 0;
		time = 0;
		TransformarMatriz("CDP", matrizTemp3);
		CaraDP = false;
	}
}


CuboRubik::CuboRubik()
{
	definirMatrizCaras();

	cubos[0] = Cubo::Cubo(-1.6, 0.6, 0.6);
	cubos[1] = Cubo::Cubo(-0.5, 0.6, 0.6);
	cubos[2] = Cubo::Cubo(0.6, 0.6, 0.6);


	cubos[3] = Cubo::Cubo(-1.6, -0.5, 0.6);
	cubos[4] = Cubo::Cubo(-0.5, -0.5, 0.6);
	cubos[5] = Cubo::Cubo(0.6, -0.5, 0.6);

	cubos[6] = Cubo::Cubo(-1.6, -1.6, 0.6);
	cubos[7] = Cubo::Cubo(-0.5, -1.6, 0.6);
	cubos[8] = Cubo::Cubo(0.6, -1.6, 0.6);

	cubos[9] = Cubo::Cubo(-1.6, 0.6, -0.5);
	cubos[10] = Cubo::Cubo(-0.5, 0.6, -0.5);
	cubos[11] = Cubo::Cubo(0.6, 0.6, -0.5);

	cubos[12] = Cubo::Cubo(-1.6, -0.5, -0.5);
	cubos[13] = Cubo::Cubo(-0.5, -0.5, -0.5);
	cubos[14] = Cubo::Cubo(0.6, -0.5, -0.5);

	cubos[15] = Cubo::Cubo(-1.6, -1.6, -0.5);
	cubos[16] = Cubo::Cubo(-0.5, -1.6, -0.5);
	cubos[17] = Cubo::Cubo(0.6, -1.6, -0.5);

	cubos[18] = Cubo::Cubo(-1.6, 0.6, -1.6);
	cubos[19] = Cubo::Cubo(-0.5, 0.6, -1.6);
	cubos[20] = Cubo::Cubo(0.6, 0.6, -1.6);

	cubos[21] = Cubo::Cubo(-1.6, -0.5, -1.6);
	cubos[22] = Cubo::Cubo(-0.5, -0.5, -1.6);
	cubos[23] = Cubo::Cubo(0.6, -0.5, -1.6);

	cubos[24] = Cubo::Cubo(-1.6, -1.6, -1.6);
	cubos[25] = Cubo::Cubo(-0.5, -1.6, -1.6);
	cubos[26] = Cubo::Cubo(0.6, -1.6, -1.6);

}


CuboRubik::~CuboRubik()
{
}

