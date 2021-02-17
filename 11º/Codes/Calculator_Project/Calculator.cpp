//Renato Abrantes e Duarte Soeiro
#include <iostream>

using namespace std;

int soma (int som1, int som2)
{
int resultado;
resultado = som1+som2;
return(resultado);
}
 
int subtra (int sub1, int sub2)
{
int resultado;
resultado = sub1-sub2;
return (resultado);
}
 
int multi (int mul1, int mul2)
{
int resultado;
resultado = mul1*mul2;
return (resultado);
}
 
int divi (int div1, int div2)
{
int resultado;
if (div1==0 && div2==0){
cout<<"Nao é possivel dividir por zero!!!";
}
else{
resultado = div1/div2;
}
return (resultado);
}
 
 
int potencia (int base, int exp)
{
int resultado;
if (exp==0)
return 1;
else if (exp==1)
return base;
 
return resultado=base*potencia(base, exp-1);
}
 
int main ()
{
int op, num1, num2, numfato, bas, expo, resultado;
system("cls");
cout<<"\n1 - Adicao\n";
cout<<"2 - Subtracao\n";
cout<< "3 - Multiplicacao\n";
cout<< "4 - Divisao\n";
cout<< "5 - Potencia\n";
cout<< "\nEscolha a operacao a ser realizada: ";
do{
	cin>>op;
 	system("cls");
	if (op==1)
	{
		cout<<"\nA operacao escolhida foi Adicao\n";
		cout<<"Insira o primeiro numero: ";
		cin>>num1;
		cout<<"Insira o segundo numero: ";
		cin>> num2;
		resultado=soma(num1, num2);
		cout<<"O resultado da operacao e: " << resultado << "\n";
	}
	else if (op==2){
		printf ("\nA operacao escolhida foi Subtracao\n");
		cout<<"Insira o primeiro numero: ";
		cin>>num1;
		cout<<"Insira o segundo numero: ";
		cin>>num2;
		resultado=subtra(num1, num2);
		cout<<"O resultado da operacao e: "<< resultado << " \n";
	}
	else if (op==3){
		cout<<"\nA operacao escolhida foi Multiplicacao\n";
		cout<<"Insira o primeiro numero: ";
		cin>>num1;
		cout<<"Insira o segundo numero: ";
		cin>>num2;
		resultado=multi(num1, num2);
		cout<<"O resultado da operacao e: " << resultado<< " \n";
	}
	else if (op==4){
		cout<<"\nA operacao escolhida foi Divisao\n";
		cout<<"Insira o primeiro numero: ";
		cin>>num1;
		cout<<"Insira o segundo numero: ";
		cin>>num2;
		resultado=divi(num1, num2);
		cout<<"O resultado da operacao e: " << resultado << "\n";
	}
	else if (op==5){
		cout<<"\nA operacao escolhida foi Potencia\n";
		cout<<"Insira a base: ";
		cin>>bas;
		cout<<"Insira o expoente: ";
		cin>>expo;
		resultado=potencia(bas,expo);
		cout<<"O resultado da operacao e: " << resultado << " \n";
	}
	else{
		cout<<"Opcao Invalida";
	}
}while(op>6);
cout<<"\nSe quiser repetir prima 6, se nao, prima outro numero aleatoria acima de 6.\n";
cin>>op;
if(op==6){
	main();
}
}
