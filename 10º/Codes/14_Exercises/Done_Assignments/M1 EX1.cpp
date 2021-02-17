//Renato Abrantes 24480 10º11
//Problema POTENCIA:
//Fa?a um programa que calcule e apresente o valor da pot?ncia de uma base e expoente a indicar pelo utilizador.
#include<iostream>

using namespace std;

int main()
{
	int x,base, expo,l;
	
	cout<<"Introduza a base.\n";
	cin>>base;
	cout<<"Introduza a expoente.\n";
	cin>> expo; 
	
	for(x=1;x<=expo;x++)
	{
		l=base*base;
	}
	cout<<"O valor e "<<l<<".";
}
