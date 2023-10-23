#include <stdio.h>

double adicao(double a, double b) {
	return a + b;
}

double subtracao(double a,double  b) {
	return a - b;
}

double multiplicacao (double a, double b){
	return a * b;
}

double divisao (double a, double b) {
	if (b != 0) {
		return a / b;
	} else {
		printf("Erro Divisão por zero!\n");
		return 0.0;

	}

}

int main() {
	double num1, num2;
	char operador;


	printf("Digite um operador (+,-,*,/):");
	scanf("%c", &operador);

	printf("digite dois numeros:");
	scanf("%lf %lf", &num1, &num2);
	double resultado;

	switch (operador) {
		case '+':

		resultado = adicao(num1, num2);
		break;
		case '-':
		resultado = subtracao(num1, num2);

		break;
		case '*':
	       resultado = multiplicacao(num1, num2);

		break;

		case '/':

		resultado = divisao(num1, num2);

		break;

		default:


		printf("Operador invalido\n");
		break;
		return 1;

		
	}
	printf("Resultado %.2lf\n", resultado);

	return 0;
}
