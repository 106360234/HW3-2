#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n;
	printf("How many disks do you move? ");
	scanf("%d", &n);
	towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods
	system("pause");
	return 0;
}

towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
	if (n == 1)
	{
		printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
		return;
	}
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}