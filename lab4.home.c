#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	int a, b;
	int coffee;
	setlocale(LC_ALL, "RUS");
	printf("Введите номера рабочих мест Анны и Бориса через пробел: ");
	scanf("%d %d", &a, &b);

	coffee = (a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0);

	printf("Будут ли пить кофе? (1 - да, 0 - нет): %d\n", coffee);

	return 0;
}