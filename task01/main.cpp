#include"util.h"

int main() {
		int array[DEFAULT_SIZE];
		int length;

		do {
			system("cls");
			cout << "Input size of array: ";
			cin >> length;
		} while (length <= 0);

		user_init(array, length);
       print("Result array:\n even numbers:");
	   print(to_string(even_number(array, length)));
		

	return 0;
}
