#include <stdio.h>

// Функция для подсчета конкретной буквы в строке
int count_char(const char *str, char c) {
		int count = 0;
		while (*str) {
				if (*str == c) {
						count++;
				}
				str++;
		}
		return count;
}

int main(int argc, char *argv[]) {
		// Проверка: имя программы + символ + 3 строки = 5 аргументов
		if (argc < 5) {
				printf("Ошибка! Нужно ввести: <буква> <строка1> <строка2> <строка3>\n");
				return 1;
		}

		// Аргументы командной строки:
		char target = argv[1][0]; // Берем искомую букву
		char *s1 = argv[2];       // Первое предложение
		char *s2 = argv[3];       // Второе
		char *s3 = argv[4];       // Третье

		printf("--- Исходные данные ---\n");
		printf("Ищем букву: %c\n", target);
		printf("1: %s\n2: %s\n3: %s\n\n", s1, s2, s3);

		// Считаем сумму через нашу функцию
		int total = count_char(s1, target) + 
								count_char(s2, target) + 
								count_char(s3, target);

		printf("--- Результат ---\n");
		printf("Общее количество букв '%c': %d\n", target, total);

		return 0;
}