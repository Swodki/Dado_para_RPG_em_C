//Código por: C4ndy
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
//Escopo do programa:
int main(){
	setlocale(LC_ALL, "Portuguese");
    int dado, d6;
    
    //Escolhas dos dados:
    printf("Selecione qual dado você deseja rolar: \n1-d6 \n");
    scanf("%i", &dado);
    
    //d6:
    if(dado == 1){
    srand(time(NULL));
    d6 = rand() % 6 + 1;
    printf("O número sorteado foi: %d\n", d6);
}

//Finalização do programa	
system("pause");
return 0;
}

