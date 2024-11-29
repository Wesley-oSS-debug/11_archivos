#ifndef REGISTRO_H
#define REGISTRO_H

const int MAX=80;

struct tRegistro {
	int codigo;
	char item[MAX];
	double valor;
};
int SIZE=sizeof(tRegistro);

#endif