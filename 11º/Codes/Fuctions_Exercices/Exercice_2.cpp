//Implemente uma função que devolva o nº de segundos que um número de horas tem.
#include<iostream>
using namespace std;

int tempo( int  t)
{
	int s=3600;
	int seg_h;
	seg_h = s * t;
}

int main()
{
	int h;
	printf("Insira o numero de horas: ");
	scanf("%d", &h);
	

	
	printf("%d horas tem %d segundos", h, tempo(h));
}

