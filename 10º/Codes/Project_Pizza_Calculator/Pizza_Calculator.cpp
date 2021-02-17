//Trabalho das Pizzas feito por Renato Abrantes, Alexandre Cosme Rafael Dias da turma 10º11 ;)

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
	
	time_t now = time(0);
    tm *ltm = localtime(&now);
	int a, b,c,d, total, r, n, m,t,y,u,i,o,dia;
	string nt,ng,ni,no,np;
	char e=130, w=198,p=135,l=160;
	system("Color 7C");
	cout<<"---------------------------------------\n";
	cout<<"   Bem Vindo ao Pizza Casa di Mama.\n";
	cout<<"            Are you ready?\n";
	cout<<"---------------------------------------\n";
	dia=1 + ltm->tm_wday;
	cout<<"\n1-Individual.\n2-M"<<e<<"dia.\n3-Familiar.\n";
	cin>> r;
	
	switch(r)
	{
	case 1: a=2;nt="Individual";break;
	case 2: a=4;nt="Media";break;
	case 3: a=6;nt="Familiar";break;
	default:cout<<"N"<<w<<"o consta no nosso menu.\n";break;
	}
	cout<<"\n1-Normal.\n2-Fina.\n";
	cin>> n;
		
	switch(n)
	{
	case 1: b=2.5;ng="Normal";break;
	case 2: b=1.5;ng="Fina";break;
	default:cout<<"N"<<w<<"o consta no nosso menu.\n";break;		
	}	
	cout<<"\nAgora vai ter de inserir o numero de ingredientes que quer.\n";
	
	cout<<"Ingredientes bases.\n  1-Fiambre.\n  2-Bacon.\n  3-Atum.\n  4-Chouri"<<p<<"o.\n  5-Queijo.\n  6-Mais Queijo.\n  Insira zero se n" << w << "o desejar.\n";
	cin>> m;
	t=m*0.50;
	ni="Ingredientes bases";
	
	cout<<"\nIngredientes especias.\n  1-Caviar.\n  2-Lula.\n  3-Salm"<<w<<"o Fumado.\n  4-Frango.\n  Insira zero se n"<<w<<"o desejar.\n";
	cin>> y;
	u=y*1;
	no="Ingredientes especiais";
	
	cout<<"\nIngredientes Ridiculos.\n  1-Anan"<<l<<"s.\n  2-Pessego.\n  3-Banana.\n  Insira zero se n"<<w<<"o desejar.\n";
	cin>> i;
	o=i*10;
	np="Ingredientes Ridiculos";
	
	if(dia==4
	
	)
	{
	 cout<<"\n-------------------------------";
	 cout<<"\n	Quarta feira louca.\n";
	 cout<<"-------------------------------\n\n";
	total=(r+n+t+u+o)*0.50;
	}
	else
	total=r+n+t+u+o;
	
	cout<<"A sua pizza tem o tamanho " <<nt<<", grossura "<<ng<< ", tem "<<t<<" "<<ni<<", tem "<<u<<" "<<no<<" e tem "<<o<<" "<<np<<" .Custo: "<<total<<".";
}








































































































































































































































































































































































































































































































