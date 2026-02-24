#include"logic.h"
string even_odd_number(int array[DEFAULT_SIZE], int length) {
	int sum_even_number = 0;

	for (int index = 0; index < length; index++) {
		sum_even_number += array[index] % 2 ? 1 : 0;
	}
	string msg = to_string(sum_even_number) +"\n odd numbers:" + to_string(length-sum_even_number);

	return msg;
}
