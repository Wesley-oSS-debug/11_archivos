#include <iostream>
#include "registro.h"
#include <fstream>

using namespace std;
int main() {
	tRegistro registro;
	fstream archivo;
	archivo.open("bd.dat", ios::out | ios::binary);
	bool seguir=true;
	while (seguir) {
		cout<<"codigo: ";
		cin.sync();
		cin>>registro.codigo;
		cout<<"nombre: ";
		cin.sync();
		cin.getline(registro.item,MAX); //MAX=80
		cout<<"Precio: ";
		cin.sync();
		cin>>registro.valor;
		archivo.write((char *) &registro, SIZE);
		cout<<"Otro? [S/N] ";
		char c;
		cin>>c;
		if ((c=='n') || (c=='N')) {
			seguir=false;
		}
	}
	archivo.close();
	return 0;
}