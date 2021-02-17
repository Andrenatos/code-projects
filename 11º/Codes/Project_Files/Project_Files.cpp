//Renato Abrantes e Bernardo Caldas

 #include<iostream>
 #include<stdio.h>
 
 using namespace std;
 
 FILE *fb;
 char s[1000], ch;
 int linha;
 
 inserir(){
 	fb=fopen("Projeto.txt","a");
 	cout<<"Insira o que pretende.\n";
 	scanf("&s", &s);
 	fprintf(fb,"%s\n", s);
 }
 
listar(){
	fb=fopen("Projeto.txt","r");
	{
	while ((ch=fgetc(fb)) !=EOF)
	putchar(ch);
	}
}

consultar(){
	fb=fopen("Projeto.txt","r");
	
	cout<<"Insira a linha.\n";
	
	cin>> linha;
	
	
}
 
 main(){
 	
 int op;
 
 printf("*========================*\n");
          printf("| 1 - Inserir		|\n");
          printf("| 2 - Listar		|\n");
          printf("| 3 - Consultar		|\n");
		  printf("| 4 - Sair		|\n");
          printf("*========================*\n");
          fflush(stdin);
          scanf("%c", &op);
          fflush(stdin);
          switch(op)
             {
                    case '1':
                    	inserir();
                         break;
                    case '2':
                    	listar();
                         break;
                    case '3':
                    	consultar();
                        break;
                    case '4':
                        system("close");
                        break;
                    default:
                            printf("Erro!");
				}
}
