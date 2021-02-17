#include<iostream>

using namespace std;

int main()
{
	int i,vet[6],s=0;

	 for(i=0;i<6;i++)
	 {
	 cout<<"Introduza "<<i<<" numeros.\n";
	 cin>> vet[i];
	 }
	 for(i=0;i<6;i++)
	 {
	 	if (i%2==0)
	 		s=vet[i]+s;
	 }
	 cout<<"A soma de todos os numeros e "<<s<<".\n";
	 
}
