#include <iostream>
int fun1_9(void);
int fun1_10(void);
int fun1_11(void);

int main() {
		fun1_9();
		fun1_10();
		fun1_11();
		return 0;
}

int fun1_9(void){
		int sum = 0;
		for( int i = 50; i <= 100; i++ )
				sum += i;
		std::cout << "Sum of 50 to 100 is " << sum << std::endl;
		return 0;
}

int fun1_10(void){
		int i = 10;
		for( i = 10; i >= 0; i--)
				std::cout << i << ' ' ;
		std::cout << std::endl;
		return 0;
}

int fun1_11(void){
		int a,b;
		std::cout << "Enter two numbers:" << std::endl;
		std::cin >> a >> b;
		if(a > b){
				int temp;
				temp = a;
				a = b;
				b = a;
		}
		for(int i = a; i <= b; i++)
				std::cout << i << ' ';
		std::cout << std::endl;
		return 0;
}


