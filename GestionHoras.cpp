#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct {
	int cod;
	char nombre[12];
	char contrasenia[12];
	
}TRegUsuarios;

//Variables Globales
TRegUsuarios tablaUsuarios[5000];

FILE * fusuarios;
int cant = 0;

//Funciones

void menu_ppal (){
	system ("cls");
	cant = cant +1;
	printf("------------------------GESTION HORAS--------------------------------------------------------\n");
	printf ("NOMBRE DE USUARIO:  \n");
	scanf ("%r",&tablaUsuarios[cant].nombre);
	printf ("CONTRASEÑA: ");
	scanf ("%r",&tablaUsuarios[cant].contrasenia);	
	
	//guardo en el archivo 
	fusuarios = fopen("usuarios.dat","a+");
    fwrite(&tablaUsuarios,sizeof(TRegUsuarios),cant,fusuarios);
	fclose(fusuarios);
	
}

//Main

int main(){
	
	int op=0;	
	
	menu_ppal();
	
	return 0;
	
}
