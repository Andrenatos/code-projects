//5.	Elabore um programa em C++ para ler um vetor de oito n�meros inteiros; 
//e mostrar os n�meros �mpares. 

#include<iostream>

using namespace std;

int main()
{
	int i,vet[8];

	 for(i=0;i<8;i++)
	 {
	 cout<<"Introduza "<<i<<" numeros.\n";
	 cin>> vet[i];
	 }
	 for(i=0;i<8;i++)
	 {
		 if (vet[i]%2!=0)
	 		cout<<"Os numeros impares sao "<<vet[i]<<".\n";
	 }

