#include <iostream>
using namespace std;
main()
{
	float contar = 0, soma = 0 ;
	float media , idade ;
	
	cout<<"Insira idades de pessoas : \n\n";
	cin>>idade;
	
	while (idade != 0)
	{
		soma = soma + idade;
		contar = contar + 1 ;
		cin>>idade;
	}	
	media = soma/contar;
	cout<<"\nA media e : "<<media;
}
