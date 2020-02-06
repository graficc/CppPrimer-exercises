#include <iostream>

int main() {
		std::cout << "Enter two number:" << std::endl;
		int a = 0, b = 0;
		std::cin >> a >> b ;
		if( a > b ){
				int temp;
				temp = a;
				a = b;
				b = temp;
		}
		while ( a <= b ){
				std::cout << a << " ";
				a++;
		}
		std::cout << std::endl;
		return 0;
}

