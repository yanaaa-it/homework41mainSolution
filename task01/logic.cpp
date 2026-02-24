#include"logic.h"
int even_number(int array[DEFAULT_SIZE], int length) {
	int sum_even_number = 0;

	for (int index = 0; index < length; index++) {
		sum_even_number += array[index] % 2 ? 1 : 0;
	}

	return sum_even_number;
}
