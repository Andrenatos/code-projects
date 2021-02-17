#include <iostream>
using namespace std;
main()
{
	int numero , i , soma = 0 ;
	
	cout<<"Insira o limite : ";
	cin>>numero;
	
	for (i = 1 ; i <=numero ; i = i + 2 )
	{
		soma = soma +i;
	}	
	cout<<soma;
}
