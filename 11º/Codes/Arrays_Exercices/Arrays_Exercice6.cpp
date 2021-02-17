//6.	Elabore um programa em C++ que leia um vetor de 10 elementos inteiros e mostre no monitor todos os 
//elementos do vetor mas pela ordem inversa. 
#include<iostream>

using namespace std;

int main()
{
	int i,vet[10];

	 for(i=0;i<10;i++)
	 {
	 cout<<"Introduza "<<i<<" numeros.\n";
	 cin>> vet[i];
	 }
	 for(i=9;i>=0;i--)
	 {
	 		cout<<"Os numeros por ordem inversa sao "<<vet[i]<<".\n";
	 }
}
