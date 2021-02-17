#include<iostream>
#include<string>

using namespace std;

typedef struct{
	string Disciplina;
	float Nota;
}Notas;

Notas p[3];
float Maiornota(float N){
	int i;
	for(i=0; i<3; i++)
	{
		if(p[i].Nota>N)
			N=p[i].Nota;
	}
	return N;
}

int main()
{
int i,n=p[0].Nota;
for(i=0;i<3; i++){
	cout<<"Disciplina --> ";
	cin>>p[i].Disciplina;
	cout<<"\nNota --> ";
	cin>>p[i].Nota;
	cout<<"\n";
}

for(i=0;i<3; i++){
cout<<"\nVocê digitou os seguintes dados :";
cout<<endl;cout<<endl;
cout<<endl<<p[i].Disciplina;
cout<<endl<< p[i].Nota;
}
cout<<endl<<"\nA maior nota: ";
cout<< Maiornota(n);
}
