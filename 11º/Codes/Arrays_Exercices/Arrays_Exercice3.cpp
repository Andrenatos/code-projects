#include<iostream>

using namespace std;

int main()
{
	int i,r, vet[5];

	 for(i=0;i<=5;i++)
	 {
	 cout<<"Introduza "<<i<<" numeros.\n";
	 cin>>vet[i];
	 }
	 for(i=0;i<=5;i++)
	 {
		 if (vet[i]==30)
	 		cout<<"Na posicao "<<i<<" existe um "<<vet[i]<<".\n";
	 }
}
