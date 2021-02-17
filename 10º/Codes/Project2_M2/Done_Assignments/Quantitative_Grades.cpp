#include<iostream>

using namespace std;

int main()
{
	int Nq;
	
	cout<<"Introduza uma nota quantitativa de 0 a 20.\n";
	
	scanf("%d", &Nq);
	 if (Nq>=0 && Nq<=4)
	 	cout<<"Mau";
	 		else if(Nq>=5 && Nq<=9)
	 		cout<<"Insufiente";
	 			else if(Nq>=10 &&Nq<=13)
	 			cout<<"Suficiente";
	 				else if(Nq>=14 && Nq<=17)
	 				cout<<"Bom";
	 					else if(Nq>=18 && Nq<=20)
	 					cout<<"Muito Bom";
	 						else if(Nq<0 || Nq>20)
	 						cout<<"Nota Invalida";
	 	
}
