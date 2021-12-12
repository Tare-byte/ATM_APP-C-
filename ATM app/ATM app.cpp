// ATM app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void showMenu() {
	cout << "***********Menu**************" << endl;
	cout << "1.Check Balance" << endl;
	cout << "2.Deposit" << endl;
	cout << "3.Withdraw" << endl;
	cout << "4.Exit" << endl;
	cout << "*************************" << endl;
}


int main()
{
 //Check balance,deposit,withdraw,show menu
	int option;
	double balance = 500;


	do {
		showMenu();
		cout << "Option: ";
		cin >> option;
		//to clear and rerun system
		system("cls");

		switch (option) {
		case 1:cout << "Balance is:#" << balance << endl; break;
		case 2:cout << "Deposit amount: ";
			double depositamount;
			cin >> depositamount;
			balance += depositamount;
			break;
		case 3:cout << "Withdraw amount";
			double withdrawamount;
			cin >> withdrawamount;
			if (withdrawamount <= balance)
				balance -= withdrawamount;
			else
				cout << "Insufficient balance" << endl;
			break;
		}
	} while (option!=4);


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
