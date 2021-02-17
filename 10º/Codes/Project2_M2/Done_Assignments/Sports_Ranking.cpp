//Escalao Desportivo
#include<iostream>

using namespace std;

int main()
{
	string nome;
	int idade;
	cout<<"Indique o seu nome\n";
	cin>> nome;
	cout<<"Intoduza a idade.\n";
	cin>> idade;
	
	if(idade>0 && idade<5)
	cout<<"Observador";
		else if(idade>6 && idade<8)
		cout<<"Iniciado";
			else if(idade>9 && idade<11)
			cout<<"Infantil";
				else if(idade>12 && idade<14)
				cout<<"Cadete";
					else if(idade>15 && idade<17)
					cout<<"Junior";
						else if(idade>18 && idade<39)
						cout<<"Senior";
							else if(idade>40 && idade<54)
							cout<<"Veterano A";
								else if(idade>55)
								cout<<"Veterano B";
									else if (idade<0)
									cout<<"Nota Invalida";
									
	
}

