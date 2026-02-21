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
	string same=find_same_number(array,length)==true?"all numbers same":"number(s) doesn't same";
	print("Result array:");
	print(same);


	return 0;
}