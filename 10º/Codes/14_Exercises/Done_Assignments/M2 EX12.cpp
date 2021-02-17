#include <iostream>
using namespace std;
main()
{
	int num,dmed,soma,j;
	float med;
	
	soma=0;
	cont=0;
	j=0;
	
	cout<<"insira os numeros que quiser "<< endl;
	cin>>num;
	
	while(num!=-1)
	{
		soma=soma+num;
		dmed=dmed+1;
		cin>>num;	
		
		if(num=0)
		j=j+1;
		else 
		j=j;
	}
	
	med=soma/cont;
	
	cout<<"a media e: "<<med<<"\ne a soma e: "<<soma<<"\ne a o total de zeros foi: "<<j;
}
/* a inserção dos numeros termina quando inserir -1)*/
