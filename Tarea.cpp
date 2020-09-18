#include"stdio.h"
#include"stdlib.h"

main ()
{
	char nombre[50];
	
	printf("Hola Mundo!!!\n");
	printf("\nEscribe tu nombre: ");
	fgets(nombre,sizeof(nombre),stdin);
	printf("Hola %s\n\n",nombre);
	
	system("pause");
}
