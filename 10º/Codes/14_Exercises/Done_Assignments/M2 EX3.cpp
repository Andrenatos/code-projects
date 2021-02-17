#include <iostream>
using namespace std;
main()
{
	float soma = 0 , media , numero ;
	int conta = 0 ; 
	
	cout<<"Insira numeros : \n";
	
	while (soma < 500 )
	{
		cin>>numero;
		
		if(numero < 100)
		{
			soma = soma + numero ;
			conta = conta + 1 ;
		}
		cout<<"Somatorio = "<<soma<<endl;
	}
	
	media = soma / conta ;
	cout<<"A media e : "<<media;
}
