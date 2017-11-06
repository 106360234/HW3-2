#include<stdio.h>
#include<stdlib.h>



int main(void)
{
	int base, exponent, sum;
	printf("pow(base,exponent)\n");
	printf("base= ");
	scanf("%d", &base);
	printf("exponent= ");
	scanf("%d", &exponent);
	sum = pow(base, exponent);
	printf("pow(%d,%d) = %d\n", base, exponent, sum);

	system("pause");
	return 0;
}

pow(int base, int exponent)
{
	int x;
	if (exponent > 0)
	{
		x = base*pow(base, exponent - 1);
		return x;
	}
	else
		return 1;
}