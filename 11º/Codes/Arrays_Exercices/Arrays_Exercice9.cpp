#include<iostream>

using namespace std;

int main()
{
	int i,vet[10],s=0;
	float m;

	 for(i=0;i<10;i++)
	 {
	 cout<<"Introduza "<<i<<" numeros.\n";
	 cin>> vet[i];
	 }
	 for(i=0;i<10;i++)
	 {
	 		s=vet[i]+s;
	 }
	m=s/10;
	 cout<<"A media e "<<m<<".\n";
	 
}
