#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()


{
    
    int i, j, aux;
    float nota[30];
    char nome[30][30]; 
    char nome2[30];
    
         printf("Olá, meu nome é LEONARDO AREAS e este programa pode ser visto no seguinte endereço do github: https://github.com/leonardoareas/trabalhoAv2/prog1_av2_1.c\n");

    
    for(i=0;i<=29;i++)
    {
        printf("Entre com o nome do aluno %d: ", i+1);
        scanf("%s", nome[i]);
        printf("entre com a nota do %d: ", i+1);
        scanf("%f", &nota[i]);
    }
    
    for(i=0;i<=29;i++ )
    {
        for(j=i+1;j<=29;j++) 
        {
          if ( nota[j] > nota[i] )
          {
             aux = nota[j];
             nota[j] = nota[i];
             nota[i] = aux;
             
             strcpy(nome2, nome[j]);
             strcpy(nome[j], nome[i]);
             strcpy(nome[i], nome2);
          }
        } 
    }
    
    
    printf("----------------\n");
    printf("Nome do aluno\t\tav1\n");
    
    for(i=0;i<=29;i++)
    {
        printf("%s\t\t%.2f\n\n", nome[i], nota[i]);
    }
    
}