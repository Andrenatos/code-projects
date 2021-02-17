/*Nao pos o printf a pedir os numeros*/
#include<iostream>

using namespace std;

int main()
{
	char ope;
	int n1, n2;
	int total;
	printf("Insira os numeros:");//this I added
	scanf("%d%c%d", &n1,&ope,&n2);
	
	switch(ope)
	{
		case'+':total=n1+n2;break;
		case'*':
		case'x':
		case'X':total=n1*n2;break;
		case'-':total=n1-n2;break;
		case'/':
		case':':total=n1/n2;break;
		default:cout<<"Operador invalido tenta outra vez.";
	}
	
	printf("%d%c%d=%d",n1,ope,n2,total);
}
