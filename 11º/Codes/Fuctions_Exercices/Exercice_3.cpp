//Implemente uma função que devolva o maior de três valores x, y e z
#include<iostream>

using namespace std;

int m(int a, int b, int c)
{
	if	(a>b && a>c)
	{
		return a;
		}
		else if(a<b && c<b)
		{
			return b;
			}
			else if(a<c && b<c)
			{
			return c;
			}
			}	

main()
{

int x, y, z;

cout<<"Introduza tres valores e eu direi qual e o maior (caso nao saiba).\n";
cout<<"Primeiro numero:";
cin>>x;
cout<<"Segundo numero:";
cin>>y;
cout<<"Terceiro numero:";
cin>>z;

cout<<"O valor maior e "<<m(x,y,z);
}
