//Cidades letras
#include<iostream>

using namespace std;

int main()
{
	char city;
	
	cout<< "Indique a letra da cidade portuguesa L-Lisboa\nP-Porto\nC-Coimbra\nS-Setubal\nB-Braga\nG-Guimarães\nF-Faro\n";
	cin>> city;
	
	switch(city)
	{
		case'L':cout<<"Lisboa";break;
		case'P':cout<<"Porto";break;
		case'C':cout<<"Coimbra";break;
		case'S':cout<<"Setubal";break;
		case'B':cout<<"Braga";break;
		case'G':cout<<"Guimaraes";break;
		case'F':cout<<"Faro";break;
		default:cout<<"Nao Existe";
	 } 
}
