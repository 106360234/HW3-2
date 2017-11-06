#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void)
{
	char a;
	printf("Enter a charactor: ");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		a -= 32;
	}
	else if (a >= 'A' && a <= 'Z')
	{
		a += 32;
	}
	printf("After transform: %c\n", a);
	system("pause");
	return 0;
}