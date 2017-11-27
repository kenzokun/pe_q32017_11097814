#include <stdio.h>
#include <math.h>

double delta(double a, double b, double c){
	return (b*b) - 4*a*c;
}

int bhaskara(double a, double b, double c){
	double x1, x2;
	double d = delta(a, b, c);

	if(d > 0){
		x1 = (-b + sqrt(d))/(2*a);
		x2=(-b - sqrt(d))/(2*a);
		printf("%.2lf %.2lf\n", x1, x2);
	}
	else if(d == 0){
		x1 = -b/(2*a);
		printf("%.2lf\n", x1);
	}
	else if(d < 0){
		x1 = -b/(2*a);
		x2 = sqrt(-d)/(2*a);
		printf("%.2lf + %.2lfi %.2lf - %.2lfi\n", x1, x2, x1, x2);
	}

	return 0;
}

int main(){
	double a, b, c;

	scanf("%lf %lf %lf", &a, &b, &c);
	bhaskara(a, b, c);

	return 0;
}
