#include<iostream>

using namespace std;

int main()
{
	float peso, altura, imc;
	
	cout<<"Introduza o peso e a altura (por esta ordem).";
	cin>> peso;
	cin>> altura;
	imc=peso/(altura*altura);
	
	if(imc<=18.5)
		cout<<"Abaixo do peso normal.";
		
		else if(imc>18.5 && imc<=25)
			cout<<"Peso normal.";
			else if(imc>25 && imc<=30)
				cout<<"Acima do peso normal.";
				else
					cout<<"Obesidade";
		
		
		
}
