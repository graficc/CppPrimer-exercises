#include <iostream>
#include "Sales_item.h"

int main() {
		Sales_item init, book;
		int num = 1;
		std::cin >> init;
		while (std::cin >> book){
				if (compareIsbn(init, book))
						num++;
				else {
						std::cout << init.isbn() << "共有" << num << "条销售记录" << std::endl;
						init = book;
						num = 1;
				}
				std::cout << init.isbn() << "共有" << num << "条销售记录" << std::endl;
		}
		return 0;
}
