#include <iostream>
using namespace std;
main()
{
	int num,dmed,soma;
	float med;
	
	soma=0;
	cont=0;
	
	cout<<"insira os numeros que quiser "<< endl;
	cin>>num;
	
	while(num!=0)
	{
		soma=soma+num;
		dmed=dmed+1;
		cin>>num;	
	}
	
	med=soma/cont;
	
	cout<<"a media e: "<<med<<"\ne a soma e: "<<soma;
}
/* a inserção dos numeros termina quando inserir 0)*/
