#include <iostream>

int main() {
		int sum = 0, value = 0;
		std::cout << "Enter the number to sum: (enter q to quit)" << std::endl;
		for( ;std::cin >> value; )
				sum += value;
		std::cout << "The sum is " << sum << std::endl;
		return 0;
}
