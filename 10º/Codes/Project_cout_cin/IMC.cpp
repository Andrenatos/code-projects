#include<iostream>
/*Não consegui encotrar (na tabela ASCII) o a com um til (ã) 10º11 Renato Abrantes a24480*/

int main()
{
	double peso;
	double altura;
	double IMC;
	char acento = 132;
	char acent = 130;
	std::cout<<"Introduza o peso da pessoa em quest"<<acento<<"o\n";
	std::cin>> peso;
	std::cout<<"Agora introduza a altura da pessoa em quest"<<acento<<"o\n";
	std::cin>>altura;
IMC =peso/(altura*altura);
	std::cout<<"O IMC da pessoa em quest"<< acento<<"o "<<acent<<" "<<IMC<<"\n";
	
}
