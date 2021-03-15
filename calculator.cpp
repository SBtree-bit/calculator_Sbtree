#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	while (true) {
		int num1, num2;
		char op;
		double result;

		cout << "Enter first number: ";
		cin >> num1;
		if (num1 == 0) {
			break;
		}

		cout << "Enter operator: ";
		cin >> op;
		if (op == 'e') {
			break;
		}

		cout << "Enter second number: ";
		cin >> num2;
		if (num2 == 0) {
			break;
		}

		if (op == '+') {
			result = num1 + num2;
		} else if (op == '-') {
			result = num1 - num2;
		} else if (op == '/') {
			result = num1 / num2;
		} else if (op == '*') {
			result = num1 * num2;
		} else {
			cout << "Invalid Operator" << endl;
		}

		cout << result << endl;
	}

	return 0;
}