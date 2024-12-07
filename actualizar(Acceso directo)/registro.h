#ifndef REGISTRO_H
#define REGISTRO_H
#include <iostream>
using namespace std;
const int MAX=80;

struct tRegistro {
	int codigo;
	char item[MAX];
	double valor;
};
int SIZE=sizeof(tRegistro);

void mostrar(tRegistro &reg) {
	cout<<"Codigo: "<<reg.codigo<<endl;
	cout<<"Item: "<<reg.item<<endl;
	cout<<"Valor: "<<reg.valor<<endl;
	cout<<"--------------------------------------"<<endl;
}
#endif