#include "tasks.h"

/*	Task 03. Min Number [наименьшее число]
 *
 *	Даны четыре целых числа. Определите наименьшее число.
 *
 *	Формат входных данных [input]
 *	На вход даётся четыре целых числа в диапазоне типа int.
 *
 *	Формат выходных данных [output]
 *	Должно быть возвращено наименьшее из заданных четырёх чисел.
 * 
 *	[ input 1]: 1 2 3 4
 *	[output 1]: 1
 *
 *	[ input 2]: 7 7 7 7
 *	[output 2]: 7
 * 
 *	[ input 3]: -1 -2 -3 -4
 *	[output 3]: -4
 */

int task03(int a, int b, int c, int d) {
	if (a == b && b == c && c == d && a == d && b == d && a == c) {
		return a;
	}
	int x;

	if (a < b && a < c && a < d) {
		x = a;
	}
	else if (b < c && b < d) {
		x = b;
	}
	else if (c < d) {
		x = c;
	}
	else {
		x = d;
	}

	return x;
}