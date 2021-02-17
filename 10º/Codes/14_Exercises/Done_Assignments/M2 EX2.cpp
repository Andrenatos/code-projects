#include <iostream>
using namespace std;
main()
{
	int num , conta = 0 , soma = 0 ;
	float media ;
	
	cout<<"Insira numeros para calcular a media : (0 = fim do programa) \n";
	cin>>num;
	
	while (num != 0 )
	{
		soma = soma + num ;
		conta = conta + 1 ;
		cin>>num ;
	}
	
	media = soma / conta ;
	
	cout<<"Media e : "<<media;
}
