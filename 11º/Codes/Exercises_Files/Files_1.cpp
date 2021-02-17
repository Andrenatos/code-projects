//Pedir ao utilizador vários nomes de jogadores, respetivas idades e pontos 
//(o nº de jogadores pode ser o que quiserem) e guardar num ficheiro os dados inseridos.
#include<iostream>

using namespace std;

main(){
	FILE* fb;
	char Nome[100];
	int Idade, Pontos, i;
	
	fb=fopen("Exercicio.txt","a");
	for(i=0;i<=3;i++)
	{
	cout<<"Vamos introduzir alguns jogadores.\n";
	cout<<"Introduza os nomes dos jogadores com respetivas idades e pontos.\n";
	scanf("%s %d %d", Nome, &Idade, & Pontos);

	fprintf(fb,"%s %d %d\n", Nome, Idade, Pontos);
	}
}
