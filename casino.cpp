#include <iostream>
#include <cstdlib> 
#include <time.h>
#include <chrono> // библиотека доя задержек
#include <thread>
using namespace std;


void casino(int x1, int x2, int x3, int bet);
int main()
{
	srand(time(NULL));
	int bet = 5;

	int x1 = -1;
	int x2 = -1;
	int x3 = -1;
	casino(x1, x2, x3, bet);
}

void spin(float &win, float &money, int &x1, int &x2, int &x3, int bet) {
	system("cls");
	// визуалка в консоле это мрак XD
	cout << "\n       casino\n";
	cout << "      ___---___\n";
	cout << "     | ------- | ()\n";
	cout << "     |  ";
	if (x1 == -1) {
		cout << "X|X|X";
	}
	else cout << x1 << "|" << x2 << "|" << x3;
	cout << "  | ||\n";
	cout << "     |_________|//\n";
	cout << "     /_________\\/ \n";
	if (win == -1) {
		cout << "\n win:-  " << "  Balance: $" << money << endl;
	}
	else cout << "\n win: $" << win << "  Balance: $" << money << endl;
	cout << endl;

	this_thread::sleep_for(chrono::milliseconds(200)); // ждет 200 мсек
	system("cls");
	cout << "\n       casino\n";
	cout << "      ___---___\n";
	cout << "     | ------- | ( )\n";
	cout << "     |  ";
	if (x1 == -1) {
		cout << "X|X|X";
	}
	else cout << x1 << "|" << x2 << "|" << x3;
	cout << "  | //\n";
	cout << "     |_________|//\n";
	cout << "     /_________\\/ \n";
	if (win == -1) {
		cout << "\n win:-  " << "  Balance: $" << money << endl;
	}
	else cout << "\n win: $" << win << "  Balance: $" << money << endl;
	cout << endl;

	this_thread::sleep_for(chrono::milliseconds(200)); // ждет 200 мсек
	system("cls");
	cout << "\n       casino\n";
	cout << "      ___---___\n";
	cout << "     | ------- | \n";
	cout << "     |  ";
	if (x1 == -1) {
		cout << "X|X|X";
	}
	else cout << x1 << "|" << x2 << "|" << x3;
	cout << "  |( )\n";
	cout << "     |_________|//\n";
	cout << "     /_________\\/ \n";
	if (win == -1) {
		cout << "\n win:-  " << "  Balance: $" << money << endl;
	}
	else cout << "\n win: $" << win << "  Balance: $" << money << endl;
	cout << endl;
	

	this_thread::sleep_for(chrono::milliseconds(100)); // ждет 200 мсек
	system("cls");
	cout << "\n       casino\n";
	cout << "      ___---___\n";
	cout << "     | ------- | ()\n";
	cout << "     |  ";
	if (x1 == -1) {
		cout << "X|X|X";
	}
	else cout << x1 << "|" << x2 << "|" << x3;
	cout << "  | //\n";
	cout << "     |_________|//\n";
	cout << "     /_________\\/ \n";
	if (win == -1) {
		cout << "\n win:-  " << "  Balance: $" << money << endl;
	}
	else cout << "\n win: $" << win << "  Balance: $" << money << endl;
	cout << endl;


	this_thread::sleep_for(chrono::milliseconds(100)); // ждет 200 мсек
	system("cls");
	cout << "\n       casino\n";
	cout << "      ___---___\n";
	cout << "     | ------- | ()\n";
	cout << "     |  ";
	if (x1 == -1) {
		cout << "X|X|X";
	}
	else cout << x1 << "|" << x2 << "|" << x3;
	cout << "  | ||\n";
	cout << "     |_________|//\n";
	cout << "     /_________\\/ \n";
	if (win == -1) {
		cout << "\n win:-  " << "  Balance: $" << money << endl;
	}
	else cout << "\n win: $" << win << "  Balance: $" << money << endl;
	cout << endl;

	// --------- СЛОТЫ
	
	
	for (int i = 1; i < 15; i++) {
		x1 = 1 + rand() % 9;
		x2 = 1 + rand() % 9;
		x3 = 1 + rand() % 9;

		this_thread::sleep_for(chrono::milliseconds(50)); // ждет 200 мсек
		system("cls");
		cout << "\n       casino\n";
		cout << "      ___---___\n";
		cout << "     | ------- | ()\n";
		cout << "     |  ";

		cout << x1 << "|" << x2 << "|" << x3;
		cout << "  | ||\n";
		cout << "     |_________|//\n";
		cout << "     /_________\\/ \n";
		if (win == -1) {
			cout << "\n win:-  " << "  Balance: $" << money << endl;
		}
		else cout << "\n win: $" << win << "  Balance: $" << money << endl;
		cout << endl;

	}
	
	for (int i = 1; i < 15; i++) {
		x2 = 1 + rand() % 9;
		x3 = 1 + rand() % 9;

		this_thread::sleep_for(chrono::milliseconds(80)); // ждет 200 мсек
		system("cls");
		cout << "\n       casino\n";
		cout << "      ___---___\n";
		cout << "     | ------- | ()\n";
		cout << "     |  ";

		cout << x1 << "|" << x2 << "|" << x3;
		cout << "  | ||\n";
		cout << "     |_________|//\n";
		cout << "     /_________\\/ \n";
		if (win == -1) {
			cout << "\n win:-  " << "  Balance: $" << money << endl;
		}
		else cout << "\n win: $" << win << "  Balance: $" << money << endl;
		cout << endl;
	}
	for (int i = 1; i < 15; i++) {
		
		x3 = 1 + rand() % 9;

		this_thread::sleep_for(chrono::milliseconds(100)); // ждет 200 мсек
		system("cls");
		cout << "\n       casino\n";
		cout << "      ___---___\n";
		cout << "     | ------- | ()\n";
		cout << "     |  ";

		cout << x1 << "|" << x2 << "|" << x3;
		cout << "  | ||\n";
		cout << "     |_________|//\n";
		cout << "     /_________\\/ \n";
		if (win == -1) {
			cout << "\n win:-  " << "  Balance: $" << money << endl;
		}
		else cout << "\n win: $" << win << "  Balance: $" << money << endl;
		cout << endl;
	}
	if (x1 == x2 && x2 == x3) {
		cout << "\nJACKPOT! x5\n";
		win = bet * 5; // 5x payout
		money += win;
	}
	else if (x1 == x2 || x2 == x3 || x1 == x3) {
		cout << "\nSmall win x2\n";
		win = bet * 2; // 2x payout
		money += win;
	}
	else {
		cout << "\nLose\n";
		win = 0;
	}
	// final state shown already; function updates win and money by reference
}

void casino(int x1, int x2, int x3, int bet) {
	float win = -1;
	float money = 100;
	//while (true) {
		
		system("cls");
		cout << "\n       casino\n";
		cout << "      ___---___\n";
		cout << "     | ------- | ()\n";
		cout << "     |  ";
		if (x1 == -1) {
			cout << "X|X|X";
		}
		else cout << x1 << "|" << x2 << "|" << x3;
		cout << "  | ||\n";
		cout << "     |_________|//\n";
		cout << "     /_________\\/ \n";
		if (win == -1) {
			cout << "\n win:-  " << "Balance: $" << money << endl;
		} else cout << "\n win: $" << win << "  Balance: $" << money <<endl;
		cout << endl;
		while (true) {
			cout << "\n\n\n";
			system("pause");
			if (money < bet) {
				cout << "\nNot enough balance to play.\n";
				break;
			}
			money -= 5;
			spin(win, money, x1, x2, x3, bet);
		}
	}


//}