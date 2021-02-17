#include <iostream>
using namespace std;
main()
{
	int numero , i ;
	
	cout<<"Insira o numero : ";
	cin>>numero;
	
	for (i = 1 ; i <=numero ; i = i + 1)
	{
		cout<<i<<" -> "<<i*i*i<<"\n";
	}
}
