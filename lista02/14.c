#include <stdio.h>

int inverter(int n, int parcial)
{
	if (n == 0) return parcial;
	return inverter(n/10, parcial*10+(n%10));
}

int palindromo(int n)
{
	int s = inverter(n, 0);

	if (s==n) return 1;
	return 0;
}

int main()
{
    int x;

	scanf("%d", &x);
	int l = palindromo(x);

	if(l == 1) printf("sim\n");
	else printf("nao\n");
	return 0;
}
