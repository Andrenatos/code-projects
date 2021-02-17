#include<iostream>
using namespace std;
main()
{
	float soma,n,media;
	int c;
	soma=0;
	c=0;
	cout<<"insira a idade do aluno: ";
	cin>>n;
	cout<<"insira a idade do aluno: ";
	cin>>n;
	while(n!=-1)
	{
		cout<<"insira a idade do aluno: ";
		cin>>n;
	if(n>=18){
		soma=soma+n;
		c=c+1;
	}else
		c=c;
	}
	media=soma/c;
	cout<<"media :"<<media;
}
