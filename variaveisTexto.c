#include<stdio.h>

main(){

    //variaves que armazenam texto
    char nome[50] = "Maria Jose da Silva";
    char endereco[30];
    char pais[50];


    printf("O nome e: %s", nome);

    //recebendo dados com scanf
    printf("\nDigite o endereco: \n");
    scanf("%[^\n]", endereco);
    fflush(stdin);
    printf("\nO endereco e: %s", endereco );
    
    //recebendo dados com fgets
    printf("\n\nDigite nome do pais");
    fgets(pais, 40, stdin);
    printf("\nO pais e: %s", pais );



}