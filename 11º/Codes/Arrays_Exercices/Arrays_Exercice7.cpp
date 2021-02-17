#include<iostream>

using namespace std;

int main()
{
	int i,vet[8],s=0;

	 for(i=0;i<8;i++)
	 {
	 cout<<"Introduza "<<i<<" numeros.\n";
	 cin>> vet[i];
	 }
	 for(i=0;i<8;i++)
	 {
	 	s=vet[i]+s;
	 }
	 cout<<"A soma de todos os numeros e "<<s<<".\n";
	 
}
