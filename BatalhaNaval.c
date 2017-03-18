#include<stdio.h>
#include<stdlib.h>
int main(){
    char inimigo[5][10] =  {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
                           {0, 1, 1, 1, 1, 0, 0, 1, 0, 1},
                           {0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
                           {1, 0, 0, 0, 0, 0, 0, 1, 0, 0},
                           {1, 0, 1, 1, 1, 0, 0, 0, 0, 0}};
    char tabuleiro[5][10];
    int i, j;
    
    for(i=0; i<5; i++){
             for(j=0; j<10; j++){
                      tabuleiro[i][j] = '.';
                      printf("%c", tabuleiro[i][j]);
             }
             printf("\n");
    }
    
    printf("Informe as coordenadas do tiro (linha | coluna): ");
    scanf("%d %d", &i, &j);
    
    while(i>-1 && j>-1){
               if(inimigo[i][j] == 1){
                                tabuleiro[i][j] = 'X';
               }
               else{
                    tabuleiro[i][j] = 'O';
               }
               for(i=0; i<5; i++){ 
                        for(j=0; j<10; j++){
                                 printf("%c", tabuleiro[i][j]);
                        }
                        printf("\n");
               }
               printf("Informe as coordenadas do tiro (linha coluna): ");
               scanf("%d %d", &i, &j);
    }
    
    system("pause");
return 0;
}