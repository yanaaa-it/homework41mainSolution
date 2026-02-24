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
	   int even = even_number(array, length);
	   print(to_string(even));
	   print("\n odd number:");
	   print(to_string(length - even));
		

	return 0;
}
