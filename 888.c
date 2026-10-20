#include <stdio.h>
#include <locale.h>
int task_1()
{
	int n = 10;
	int d = n - 2;
	setlocale(LC_ALL, "RUS");
	for (int start = 1; start <= n; start++) putchar('*');
	printf("\n");
	putchar(' +');
	printf("\n");
	for (int start = 1; start <= d; start++) printf(" * \n");
	putchar('+');
	printf("\n");
	int b = n / 2;
	for (int start=1; start<=b; start++) putchar ('!');
	for (int start = 1; start <= b; start++) putchar('*');
	printf("\n");
	return 1;


}

int task_2()
{
	setlocale(LC_ALL, "RUS");
	int n, m;
	int count = 0;
	printf("Введите значения n и m:");
	scanf("%d %d", &n, &m);
	printf("Последовательность:");

	for (int i = n; i <= m; i++) {
		printf(" % d", i);
		if ((i % 2 == 0) || (i % 3 == 0)) {
			count++;
		}
	}
	printf("\nКоличество чисел кратных 2 или 3: %d\n", count);

	return 2;

}


