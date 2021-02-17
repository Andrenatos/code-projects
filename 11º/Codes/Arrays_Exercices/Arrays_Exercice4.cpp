
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
	 for(i=0;i<10;i++)
	 {
		 if (i%2==0)
	 		cout<<"Na posicao "<<i<<" existe um numero par que e "<<vet[i]<<".\n";
	 }
}
