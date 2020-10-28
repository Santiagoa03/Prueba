/**********************************************
Objeto: Operaciones sobre listas lineales dobles con nodo de encabezamiento: 
	Inserta al inicio, final, Insertar en una posicion específica, antes o después, 
	Mostrar informacion de la lista, 
	Buscar un elemento
	Eliminar un elemento dado, eliminar elementos repetidos
Author: Todos
Fecha: Octubre 7 2020

***************************************************/
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <stdio.h>
#include "ListaEncaDobleStr.h"

using namespace std;

int main(int argc, char** argv) {

    struct nodo *cabeza = NULL;
	string valor,guia,pal;
	int op,posicion,pos;
	
do{
	system("color 3B");
	cout<<"\n0  Crear lista ";
	cout<<"\n1. Insertar al  incio";
	cout<<"\n2. Insertar al  final";
	cout<<"\n3. Insertar en una posicion dada";
	cout<<"\n4. Insertar  despues de una informacion dada";
	cout<<"\n5. Mostrar Lista Por Derecha";
	cout<<"\n6. Mostrar Lista Por La Izquierda";
	cout<<"\n7. Organizar Lista";
	cout<<"\n8. Eliminar elemento en una posicion ";
	cout<<"\n9. Eliminar elemento con una informacion ";
	cout<<"\n10.Eliminar repetidos ";
	cout<<"\n11. Terminar ";
	cout<<"\nIngresa la opcion:";
	cin>>op;
	
	if (op==1 || op==2 ||op==3||op==4 || op==6 || op==9){
		cout<<"\nInsertar informacion :";
	 		 cin>>valor; 
	}
 	switch (op){
 		
 		case 0: cabeza = crearLista();system("pause"); break;
 	
 		case 1: insertarinicio(cabeza,valor); system("pause"); break;
 	
 		case 2: insertarfinal (cabeza,valor);  system("pause");  break;
 	
 		case 3: 
		 cout<<"\nSi el nodo cabecera esta en la primera posicion, debes tomar como primer nodo la posicion 2 \n\n";
		 cout<<"\nPosicion a insertar:"; cin>>pos;
 		
	 		 	insertarposicion(cabeza,pos,valor); system("pause");break;
	 		
	 		 
 		case 4: cout<<"\nInformacion de referencia para insertar:";
				cin>>guia;
				insertardespuesinfo(cabeza,valor,guia); system("pause "); break;
			 
		case 5: mostrarlistaD(cabeza); system("pause");break;
		
		case 6: mostrarlistaA(cabeza); system("pause");break;
	
 		case 7:organizarlista(cabeza); system("pause");  break;
 	
 	
 		case 8: cout<<"\nPosicion que desea borrar:";
 				cin>>posicion;
		 		eliminarElementoPos(cabeza,posicion);system("pause"); break;
 	
		case 9: eliminarElementoInfo(cabeza,valor);system("pause"); break;
		case 10:eliminaRepetidos(cabeza,valor);system("pause"); break;

 	 
	}system("cls"); 
	
}while(op!=11 && op>=0 && op<12);


	return 0;
}
 
