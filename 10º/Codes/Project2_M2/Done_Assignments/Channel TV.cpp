#include<iostream>

using namespace std;

int main()
{
	int canal;
	cout<<"Primeiro Insira uma moeda.\n Agora diga o nome do canal que eu direi qual e o nome desse canal\n";
	scanf("%d", &canal);
	switch(canal)
	{
	case 1:cout<<"RTP1";break;
	case 2:cout<<"RTP2";break;
	case 3:cout<<"SIC";break;
	case 4:cout<<"TVI";break;
	case 5:cout<<"RTPN";break;
	case 6:cout<<"SIC Noticias";break;
	case 7:cout<<"SportTVI";break;
	case 8:cout<<"EuroSport";break;
	default:cout<<"Nao possui mais canais,(nao somos a meo)";	
	}
}
