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
	bool same=find_same_number(array,length);
	string msg= same?"all numbers same":"number(s) not same";
	print("Result array:");
	print(msg);


	return 0;
}
