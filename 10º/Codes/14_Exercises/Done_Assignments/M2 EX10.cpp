#include <iostream>
using namespace std;
main()
{
	float nota , maior = 0 ;
	
	cout<<"Insira as suas notas (termine com -1): \n\n";
	
	do
	{
		cin>>nota;
		
		if(nota>maior)
			maior = nota;
	}	
	while(nota != -1);
	
	cout<<"\nA maior nota e : "<<maior;
}
