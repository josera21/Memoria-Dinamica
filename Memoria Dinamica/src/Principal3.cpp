/*
 * Principal3.cpp
 *
 *  Created on: 09/01/2017
 *      Author: Profesor
 */
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	float *nota,*contApro,*contApla,*contadorAlun;
	string *resp;
	resp = new string();
	contApro = new float;
	contApla = new float;
	contadorAlun = new float;
	nota = new float;
	*contadorAlun = 0;
	*contApro = 0;
	*contApla = 0;
	*nota = 0;

	do{
		cout<<"ingrese la nota del estudiante: "<<endl;
		cin>>*nota;
		if(*nota < 10)
			(*contApla)++;
		else
			(*contApro)++;
		(*contadorAlun)++;
		cout<<"Desea procesar otra nota de estudiante? S/N"<<endl;
		cin>>*resp;

	}while(*resp == "s");

	cout<<"El porcentaje de alumnos aprobados es: "<< ((*contApro)/(*contadorAlun))*100<<endl;
	cout<<"El porcentaje de alumnos reprobados es: "<< ((*contApla)/(*contadorAlun))*100<<endl;
	cout<<"la cantidad de alumnos procesados es: "<<*contadorAlun<<endl;
	delete resp;
	delete contadorAlun;
	delete contApla;
	delete contApro;
	return 0;
}



