 //Criar um programa que crie um ficheiro com o nome "fich.txt" e 
 //permita que o utilizador insira v�rios caracteres nesse ficheiro (termine com 0). 
 //Feche o ficheiro e volte-o a abrir para escrever no ecr�, car�cter 
 //a car�cter o conte�do do ficheiro.
 
#include<iostream>
#include<stdio.h>

using namespace std;

main(){
	FILE* fb;
	char ch;
	
	fb=fopen("fich.txt","w");
	while(ch!='0')
	{
	cout<<"Introduza os varios caracteres.\nSe quiser acabar introduza 0.\n";
	cin>> ch;
	fputc(ch,fb);
	}
}
