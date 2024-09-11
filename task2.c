#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int N, K;
	N = 9;
	K = 30;
	printf("Сейчас %i часов %i минут 00 секунд\n", N, K);
	printf("Идет % i минута суток\n", N * 60 + K);
	printf("До полуночи осталось %i часов и %i минут\n", 23 - N, 60 - K);
	printf("С 8.00 прошло %i секунд\n", N * 3600 + K * 60 - 8 * 3600);
	printf("Текущий час  = %i/24 суток  и текущая минута = %i/60 часа", N, K);
}
