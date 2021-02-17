#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char matriz[3][3];

char verifica(void)
{
         int i;
         
         for(i=0; i<3; i++) 
             if(matriz[i][0]==matriz[i][1] && matriz[i][0]==matriz[i][2]) return matriz[i][0];
         
         for(i=0; i<3; i++) 
             if(matriz[0][i]==matriz[1][i] && matriz[0][i]==matriz[2][i]) return matriz[0][i];
         
         for(i=0; i<3; i++) 
             if(matriz[0][0]==matriz[1][1] && matriz[1][1]==matriz[2][2]) return matriz[0][0];
         
         for(i=0; 1<3; i++)
              if(matriz[0][2]==matriz[1][1] && matriz[1][1]==matriz[2][0]) return matriz[0][2];
                                 
         for(i=0; i<3; i++) 
            if(matriz[0][0]!=' ' && matriz[0][1] !=' ' && matriz[0][2]!=' ' && matriz[1][0] !=' ' && matriz[1][1]!=' ' && matriz[1][2] !=' ' && matriz[2][0]!=' ' && matriz[2][1] !=' ' && matriz[2][2]!=' ');
            return 'v';
         return ' ';
}
                          
void inicio(void)
{
         int i, j;
         for(i=0; i<3; i++)
            for(j=0; j<3; j++) matriz[i][j]=' ';
                          }
                          
void jogador1(void)
{
         int x,y;
         printf("\nVez do jogador 1(Linha/coluna)-> X: \n");
         scanf("%d%d", &x, &y);
         x--;
         y--;
         
         if(matriz[x][y] !=' ')
         {
            printf("\n\nPosicao invalida, tenta novamente!! \n\n");
              jogador1();
         }
         else matriz[x][y]='x';
         }


void mostra_matriz(void)
{
         int i;
         
         for(i=0; i<3; i++)
         {
            printf("                                     %c | %c | %c ", matriz[i][0], matriz[i][1], matriz[i][2]);
         if(i!=2)
            printf("\n                                    ---|---|---\n");
         }
             printf("\n\n\n");
         }
         
void jogador2(void)
{       
         
         mostra_matriz();
         int x,y;
         
         printf("\nVez do jogador 2(Linha/coluna)-> O: \n");
         scanf("%d%d", &x, &y);
         x--;
         y--;
         
         if(matriz[x][y]!=' ')
         {
            printf("\n\nPosicao invalida, tenta novamente!!\n\n");
            jogador2();
                                         }
         else matriz[x][y]='o';
         }


int main (void)
{
        char fim;
        

        
        fim=' ';
        inicio();
        do
        {
                                  
        printf("                         ###  J O G O   D O   G A L O  ###\n\n\n");                          
           mostra_matriz();
           jogador1();
            fim=verifica();
            system("cls");
         
        printf("                         ###  J O G O   D O   G A L O  ###\n\n\n");  

        if(fim!=' ')
          break;
        jogador2();
        fim = verifica();
           system("cls");
        
        }while(fim==' ');
                                  
        if(fim=='x') 
        {
                     
           printf("\n\n\n\n\n\n\n\n\n\n                            ###O JOGADOR 1 GANHOU!!!###\n");
              getch();}
        else 
        
        if(fim=='o')
        {
            printf("\n\n\n\n\n\n\n\n\n\n                           ###O JOGADOR 2 GANHOU!!!###\n");
              getch();}
        else
        {
          printf("\n\n\n\n\n\n\n\n\n\n                           ###EMPATE!!!###\n");
              getch();}
         
        
        main();
        
        getchar();
        getchar();
        return 0;}
