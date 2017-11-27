#include <stdio.h>
#include <math.h>

float soma(float a, float b){
	return a + b;
}

float subtracao(float a, float b){
	return a - b;
}

float multiplicacao(float a, float b){
	return a*b;
}

float divisao(float a, float b){
	return a/b;
}

float potencia(float a, float b){
	return pow(a, b);
}

int main(){
    float a, b;
	int operacao;
	scanf("%d %f %f", &operacao, &a, &b);

	switch(operacao){
		case 1:
			printf("%.2f\n", soma(a, b));
		break;
		case 2:
			printf("%.2f\n", subtracao(a, b));
		break;
		case 3:
			printf("%.2f\n", multiplicacao(a, b));
		break;
		case 4:
			printf("%.2f\n", divisao(a, b));
		break;
		case 5:
			printf("%.2f\n", potencia(a, b));
		break;
	}

	return 0;
}
