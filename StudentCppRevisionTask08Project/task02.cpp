#include "tasks.h"

/*	Task 02. Arithmetic progression [арифметическая прогрессия]
 *
 *	Даны четыре целых числа. Определите, являются ли данные числа 
 *	(в указанном порядке) последовательными членами простейшей арифметической прогрессии и,
 *	если да, то какая именно задана арифметическая прогрессия: возрастающая, убывающая или монотонная.
 *
 *	Формат входных данных [input]
 *	На вход даётся четыре целых числа в диапазоне типа int.
 *
 *	Формат выходных данных [output]
 *	Программа должна вывести одну из следующих строчек:
 *	1) "Ascending arithmetic progression." - если числа образую возрастающую арифметическую прогрессию,
 *	2) "Descending arithmetic progression." - если числа образую убывающую арифметическую прогрессию,
 *	3) "Monotonic arithmetic progression." - если числа образую монотонную арифметическую прогрессию,
 *	4) "No arithmetic progression." - если числа не являются последовательными членами арифметической прогрессии.
 *
 *	[ input 1]: 1 2 3 4
 *	[output 1]: Ascending arithmetic progression.
 *
 *	[ input 2]: 2 4 6 8
 *	[output 2]: Ascending arithmetic progression.
 *
 *	[ input 3]: 15 10 5 0
 *	[output 3]: Descending arithmetic progression.
 *
 *	[ input 4]: 7 7 7 7
 *	[output 4]: Monotonic arithmetic progression.
 * 
 *	[ input 5]: 2 4 8 16
 *	[output 5]: No arithmetic progression.
 */

string task02(int a, int b, int c, int d) {
	string g = " ";
	if (a == b && b == c && c == d && a == d && b == d && a == c) {
		return "Monotonic arithmetic progression.";
	}
	int plus = b - a;
	int minus = a - b;
	

	if (plus == c - b && plus == d - c && plus>0) {
		g = "Ascending arithmetic progression.";
	}
	else if (minus == b - c && minus == c - d && minus > 0) {
		g = "Descending arithmetic progression.";
	}
	else {
		g = "No arithmetic progression.";
	}
	//cout << a << " " << b << " " << c << " " << d << endl;
	//cout << g << endl;
	



	return g;
}