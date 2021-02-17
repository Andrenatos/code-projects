 //Criar um programa que crie um ficheiro com o nome "fich.txt" e 
 //permita que o utilizador insira vários caracteres nesse ficheiro (termine com 0). 
 //Feche o ficheiro e volte-o a abrir para escrever no ecrã, carácter 
 //a carácter o conteúdo do ficheiro.
 
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
