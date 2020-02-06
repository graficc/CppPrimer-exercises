#include <iostream>

int main() {
		std::cout << "/*";
		std::cout << std::endl;	//正确

		std::cout << "*/";
		std::cout << std::endl;	//正确

		std::cout << /* "*/" */ ;
		std::cout << std::endl;	//错误，最终编译时缺少右引号

		std::cout << /* "*/" /* "/*" */ ;
		std::cout << std::endl;	//能正确编译，输出结果是 /* 显然这种程序风格不好

		return 0;
}

