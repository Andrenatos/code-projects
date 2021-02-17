//Elaborar um programa que leia um nome e um apelido e escreva no ecrã as iniciais (por exemplo: Sarah Serra -> SS)

#include<iostream>
 
using namespace std;

int main()
{ 
int i;
char s[30], *ptr = s;

 cout << "Introduza uma string: "; gets(s);
cout<<*ptr;

while(*ptr!='\0') 
{
	
	if(*ptr==' ') {
	ptr++;
	cout<<*ptr;}
ptr++;
}


}
