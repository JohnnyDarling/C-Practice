bool isEven(int num) {
	return num % 2 == 0;
}

#include <iostream>
int main() {

	int num1 = 1, num2 = 1, sum = 0;

	while (num2 < 4000000) {
		//std::cout << num2 << "\n";
		int temp = num1;
		num1 = num2;
		num2 = num1 + temp;

		if (isEven(num2)) {
			sum = sum + num2;
		}
	}
	std::cout << sum << "\n";
}