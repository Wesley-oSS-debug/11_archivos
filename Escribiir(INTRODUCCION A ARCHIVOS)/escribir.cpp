#include <iostream>
#include <fstream>
#include <windows.h>
 using namespace std;
 
 int main(){
 	SetConsoleOutputCP(CP_UTF8);
 	string ruc, producto;
 	int unidades;
 	double precio;
 	char aux;
 	
 	ofstream archivo;
 	
 	archivo.open("output.txt"); // Apertura (creacion)
 	cout<<" RUC del cliente (X para terminar): "; cin>>ruc;
 	while(ruc!= "x"){
 		//Queda pendiente el Intro anterior...
 		cin.get(aux); //Leemos el Intro
 		cout<<" Producto: ";
 		getline(cin,producto);
 		cout<<"Unidades: ";
 		cin>>unidades;
 		cout<<" Precio: ";
 		cin>>precio;
 		//Escribimos los datos en una linea del archivo..
 		// Con un espacio de separacion entre ellos
 		archivo<<ruc<<unidades<<" "
 				<<precio<<" "<<producto<<endl;
 				cout<<" RUC del cliente (x para terminar): ";
 				cin>>ruc;
	 }
	 // Escribimos el centinela final...
	 archivo<<" X ";
	 archivo.close(); // cierre del archivo
	 
 	return 0;
 }