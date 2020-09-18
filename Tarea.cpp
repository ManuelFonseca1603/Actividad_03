#include"stdio.h"
#include"stdlib.h"

main ()
{
	char nombre[50];
	int edad;
	
	printf("Hola Mundo!!!\n");
	printf("\nEscribe tu nombre: ");
	fgets(nombre,sizeof(nombre),stdin);
	printf("Hola %s\n",nombre);
	printf("Escribe tu edad: ");
	scanf("%i",&edad);
	printf("Vas a cumplir %i",edad + 1);
	
	
	printf("\n\n");
	system("pause");
}
