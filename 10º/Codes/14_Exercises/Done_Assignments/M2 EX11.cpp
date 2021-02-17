#include <iostream>
using namespace std;
main()
{
	float nota , menor;
	
	cout<<"Insira as suas notas (termine com -1): \n\n";
	cin>>nota;
	menor=nota;
	
	while(nota != -1 && nota>10);
	{
		if(nota<menor)
			menor = nota;
		cin>>nota;
	}	
	
	cout<<"\nA menor nota positiva e : "<<menor;
}
