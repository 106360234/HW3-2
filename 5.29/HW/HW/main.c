#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n1, n2, lcm;
	printf("Enter two integers : ");
	scanf("%d %d", &n1, &n2);
	if (n1 > n2)
		lcm = n1;
	else
		lcm = n2;

	while (lcm % n1 != 0 || lcm % n2 != 0)
	{
		lcm++;
	}
	printf("The LCM of %d and %d is %d\n", n1, n2, lcm);
	system("pause");
	return 0;
}