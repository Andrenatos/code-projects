//A calculadora diferenciada.

#include<iostream>

using namespace std;

int main()
{
	int n1;
	int n2;
	int resultado;
	char operador;
	
	cout<<"Indique o primeiro numero.\n ";
	cin>> n1;
	
	cout<<"Indique o segundo numero.\n ";
	cin>> n2;
	
	cout<<"Escolha a operacao: \n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n";
	cin>> operador;
	switch(operador)
	{
	case '1': resultado=n1+n2; break;
	case '2': resultado=n1-n2; break;
	case '3': resultado=n1*n2; break;
	case '4': resultado=n1/n2; break;
	default:cout<<"O numero e invalido."; break;
}
	printf("O resultado e %d.", resultado);
	 
}
