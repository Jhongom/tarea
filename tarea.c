*Autor Jhon Gomez
 Operadores logicos
 Este programa no es comercial*/

#include<stdio.h>
#include<string.h>

#define MAX_LETRAS 20


/*definicion de funciones prototipo*/

typedef struct nombre
{
	char jhon[MAX_LETRAS];
	char juan[MAX_LETRAS];

}name2;

void grupo();

void main ()
{
	name2 integrantes;
	grupo(&integrantes);
}


void grupo (name2 *jhon1)
{
	//name1 integrantes;
	//struct nombre name2[MAX_LETRAS];
	
	printf("\nEste programa cambiar el nombre de los integrantes\n");
	printf("\n\nDigite jhon, que es el primer integrante\n");
	scanf(" %s", jhon1[0].jhon);
	
	jhon1[1].juan[0]= jhon1[0].jhon[0];
	jhon1[1].juan[1]= (jhon1[0].jhon[1]|0b00010101)&0b01110101;
	jhon1[1].juan[2]=jhon1[0].jhon[2]&0b1100001;
	jhon1[1].juan[3]=jhon1[0].jhon[3];
	
	printf("El nombre del segundo integrante es %s\n\n",jhon1[1].juan);
}




