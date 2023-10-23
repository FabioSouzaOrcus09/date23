#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

int main() {
	
	float num1, num2, total;
	int operacao, opcao =1;
	

	while(opcao==1) {	
	printf("Escolha a sua operacao:\n Soma:1 \n Subtracao:2 \n Divisao:3 \n Multiplicacao:4 \n");
	scanf("%d", &operacao);	
	printf("Digite o primeiro numero:");
	scanf("%f", &num1);
	printf("Digite outro Numero:");
	scanf("%f", &num2);
	

		
		switch(operacao){
		
		case 1:
			total = soma(num1,num2);
		break;
		
		
		case 2:
			total = subtracao(num1,num2);
			break;
		
		
		case 3:
			while(num2==0){
				printf("Erro nao e possivel dividir por 0 \n");
				printf("Digite novamente outro Numero:");
				scanf("%f", &num2);
			};
			total = divisao(num1,num2);
			break;
			
			
		case 4:
			total = multiplicacao(num1,num2);
			break; 
	}
	
	
	
	printf("\nO Total da Operacao:%.2f \n", total);
	printf("\nCaso Queira Encerrar Digite:0 \nCaso Queira Continuar Digite:1 \n ");
	scanf("%d", &opcao);
}
return 0;

}
