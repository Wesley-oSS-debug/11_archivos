#include <iostream>
#include <fstream>
#include "registro.h"

using namespace std;

void mostrar(tRegistro registro) {
    cout<<"codigo: "<<registro.codigo<<endl;
    cout<<"item: "<<registro.item<<endl;
    cout<<"valor: "<<registro.valor<<endl;
    cout<<"------------------------------"<<endl;
}

int main() {
	tRegistro registro;
	fstream archivo;
	archivo.open("bd.dat", ios::in | ios::binary);
	archivo.read((char *) &registro, SIZE);
	int cuantos=archivo.gcount();
	while (cuantos==SIZE) {
		mostrar(registro); //Funcion mostrar registro
		archivo.read((char *) &registro, SIZE);
		cuantos=archivo.gcount();
	}
	archivo.close();
	return 0;
}