#include"logic.h"
bool find_same_number(int array[DEFAULT_SIZE], int length) {
	for (int index = 0; index < length; index++) {
		if (array[index]!=array[0]) {
			return false;
		 }
	}
	return true;
}
