
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctype.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	float  v1, v2, R;
	int calculo;                               // v1 valor...v2 valor ..R Resultado ..Calculo= tipo de opera��o
	cout << "Digite o 1 valor:\n";
	cin >> v1;
	cout << "Digite o 2 valor\n";
	cin >> v2;
	do {
		cout << "Op��es de calculo\n";
		cout << "===========[1] Adi��o   [2] Subtra��o   [3]Multiplica��o   [4]Divis�o==========\n\n\n";
		cin >> calculo;
		if (calculo != 1 && calculo != 2 && calculo != 3 && calculo != 4)
		{
			calculo = 5;
		}
		system("cls");
		switch (calculo) {

		case 1:
			R = v1 + v2;
			cout << v1 << "+" << v2 << "=" << R << endl;
			break;
		case 2:
			R = v1 - v2;
			cout << v1 << "-" << v2 << "=" << R << endl;
			break;
		case 3:
			R = v1 * v2;
			cout << v1 << "x" << v2 << "=" << R << endl;
			break;
		case 4:
			R = v1 / v2;
			cout << v1 << "/" << v2 << "=" << R << endl;
			break;
		case 5:
			cout << "Desculpe, comando inv�lido, tente novamente!\n\n";
		}
	} while (calculo == 5);
	system("pause");
	return (0);
}

