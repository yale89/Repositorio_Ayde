#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>


typedef struct {
	int idUsuario;
	char user[20];
	char pass[6];	
} TRegUser;


main(){
	
	int op=0;
	char user[20];	
	char pass[6];
	int cantcaracteres;
	
	printf("--BIENVENIDO AL SISTEMA DE GESTION DE HORAS--\n\n");
	printf("Debe iniciar sesión para acceder al sistema.\n\n");
	
	
	do{
		printf("Usuario: ");
		scanf("%s",&user);
		cantcaracteres = strlen(user);
	}while((cantcaracteres<1)||(cantcaracteres>20));
	
	do{
		printf("Contrasena: ");
		scanf("%s",&pass);
		cantcaracteres = strlen(pass);
	}while(cantcaracteres!=6);
	
	if((user=="leandro")&&(pass=="1234qw")){
		printf("Estas logeado");
	}else{
		printf("Usuario o contraseña incorrectos!");
	}
	
	getch();
	return 0;
	
}

