#include<iostream>

using namespace std;

int main()
{
	int i,vet[20],s=0,t,r=0;
	float m;
cout<<"Intoduza um numero a ser procurado.\n";
cin>>t;
	 for(i=0;i<20;i++)
	 {
	 cout<<"Introduza "<<i<<" numeros.\n";
	 cin>> vet[i];
	 }
	 for(i=0;i<20;i++)
	 {
	if(vet[i]==t)
	r++;
	 }
	 cout<<"o Numero aparece "<<r<<" vezes.\n";
	 
}

