﻿#include"Functions.h"

using namespace std;

void main() {
	setlocale(LC_ALL,"ru");
	cout << "Все работает норм. Кчау" << endl;
	
	double res[2];
	double u[2] = { 1,0 };
	double tmin;

	Function(res, u);
	
	tmin = findStep(res);
	cout << "Вычисленный шаг равен " << tmin << endl;

	cout << "До шага" << endl;
	for (int i = 0; i < 2; i++)
		cout << u[i] << endl;

	makeStep(res, u, tmin);

	cout << "После шага" << endl;
	for (int i = 0; i < 2; i++) {
		cout << u[i] << endl;
	}

}