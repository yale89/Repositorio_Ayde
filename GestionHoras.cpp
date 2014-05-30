#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct {
	int iduser;
	char nombre[20];
	char contrasenia[20];
	
}TRegUsuarios;

//Variables Globales
TRegUsuarios tablaUsuarios[100];

FILE * fusuarios;
int cant = 0;

//Funciones

void alta_usuario (){
	
	
	
	system ("cls");
	cant = cant + 1;
	printf("---REGISTRO DE USUARIO---\n");
	

	printf ("NOMBRE DE USUARIO:  \n");
	scanf ("%s",&tablaUsuarios[cant].nombre);
	


	printf ("CONTRASENIA: ");
	scanf ("%s",&tablaUsuarios[cant].contrasenia);
	
	
	
	tablaUsuarios[cant].iduser=cant;	
	
	//guardo en el archivo 
	fusuarios = fopen("usuarios.dat","a+");
    fwrite(&tablaUsuarios,sizeof(TRegUsuarios),cant,fusuarios);
	fclose(fusuarios);
	
}

//Main

int main(){
	
	int op=0;	
	
	char usuario[20];	
	char pass[7];
	int cantcaracteres;
	bool login=false;
	
	printf("--BIENVENIDO AL SISTEMA DE GESTION DE HORAS--\n\n");
	printf("Debe iniciar sesion para acceder al sistema.\n\n");
	
	
	
		printf("Usuario: ");
		scanf("%s",usuario);
		
	
	do{
		printf("Contrasena: ");
		scanf("%s",pass);
		cantcaracteres = strlen(pass);
	}while(cantcaracteres!=6);
	
	if(strcmp(pass,"1234qw")==0){
		if(strcmp(usuario,"leandro")==0){
			printf("Estas logeado");
			login=true;
		}else{
			printf("Usuario o contraseña incorrectos!");	
		}
	}else{
		printf("Usuario o contraseña incorrectos!");
	}
	
	if(login==true){
		switch (op){
			case 1:{
				alta_usuario();
				break;
			}
			
		}
	}
	
	
	
	
	
	

	
	return 0;
	
}
