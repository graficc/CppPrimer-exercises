#include <iostream>
#include "Sales_item.h"

int mian() {
		Sales_item book,init;
		std::cout << "请输入ISBN相同的销售记录:" << std::endl;
		std::cin >> init;
		std::cout << "汇总信息：ISBN，售出本数，销售额和平均售价为 " << init << std::endl;
		while (std::cin >> book){
		if (compareIsbn(book,init)){
				init = init + book;
				std::cout << "汇总信息：ISBN，售出本数，销售额和平均售价为 " << init << std::endl;
		else
				std::cout << "销售记录的ISBN不同" << std::endl;
		}
		return 0;
}
