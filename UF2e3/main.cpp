#include "Items.h"


char Menu() {
	char value = ' ';
	bool isOk = false;

	do {
		cout << "Avaliable options" << endl;
		cout << "1. Check inventory" << endl;
		cout << "2. Generate Random Item" << endl;
		cout << "3. Equip" << endl;
		cout << "4. Unequip" << endl;
		cout << "5. Exit" << endl;

		cin >> value;
		
		isOk = value == '1' || value == '2' || value == '3' || value == '4' || value == '5';

	} while (!isOk);
	return value;
}



int main(){
	char choice;

	do {
		choice = Menu();
		switch (choice)
		{
		case '1':
			break;
		case '2':
			break;
		case '3':
			break;
		case '4':
			break;
		}
	} while(choice != '5');
}
