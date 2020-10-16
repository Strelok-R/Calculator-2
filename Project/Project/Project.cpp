#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	
	system("color 07");
	
	int a, b, s;
	string c, d, e, f;
	cout << "Clean screen? (1 = edp operation; 2 = yes clean; 3 = off function)" << endl;
	cin >> f;
	if (f == "1") {
		do {
			cout << "vvesti A" << endl;
			cin >> a;
			cout << "vvesti B" << endl;
			cin >> b;
			cout << "vvesti znak(+,-,*,/)" << endl;
			cin >> c;
			if (c == "+") {
				s = a + b;
				cout << "Result summ: " << s << endl;
			}
			else if (c == "-") {
				s = a - b;
				cout << "Result - : " << s << endl;
			}
			else if (c == "*") {
				s = a * b;
				cout << "Result * : " << s << endl;
			}
			else if (c == "/") {
				s = a / b;
				cout << "Result / : " << s << endl;
			}
			else {
				cout << "No operation." << endl;
			} cout << "Povtor? (y/n)" << endl;
			cin >> d;
			cout << "Clean? (y/n)" << endl;
			cin >> e;
			if (e == "y") {
				system("cls");
			}
		} while (d == "y");
		cout << "Off calculator." << endl;
	}
	else if (f == "2") {
		do {
			cout << "vvesti A" << endl;
			cin >> a;
			cout << "Âvvesti  B" << endl;
			cin >> b;
			cout << "vvesti znak(+,-,*,/)" << endl;
			cin >> c;
			if (c == "+") {
				s = a + b;
				cout << "Result + " << s << endl;
			}
			else if (c == "-") {
				s = a - b;
				cout << "Result - : " << s << endl;
			}
			else if (c == "*") {
				s = a * b;
				cout << "Result * : " << s << endl;
			}
			else if (c == "/") {
				s = a / b;
				cout << "REsult / : " << s << endl;
			}
			else {
				cout << "No operation." << endl;
			} cout << "Povtor? (y/n)" << endl;
			cin >> d;
			system("cls");

		} while (d == "y");
		cout << "Off calculator." << endl;
	}
	else if (f == "3") {
		do {
			cout << "vvesti  A" << endl;
			cin >> a;
			cout << " B" << endl;
			cin >> b;
			cout << "vvesti znak(+,-,*,/)" << endl;
			cin >> c;
			if (c == "+") {
				s = a + b;
				cout << "Result +: " << s << endl;
			}
			else if (c == "-") {
				s = a - b;
				cout << "Result -: " << s << endl;
			}
			else if (c == "*") {
				s = a * b;
				cout << "Resullt * " << s << endl;
			}
			else if (c == "/") {
				s = a / b;
				cout << "Result /: " << s << endl;
			}
			else {
				cout << "No operation." << endl;
			} cout << "Povtor? (y/n)" << endl;
			cin >> d;
		} while (d == "y");
		cout << "Off calculator." << endl;
	}
	else {
		cout << "no operation." << endl;
	}
	system("pause");
	return 0;
}