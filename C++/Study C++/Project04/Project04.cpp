// Project04.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int a = 10;
	int b(a);
	auto c(b);

	std::cout << a + b + c << std::endl;

    return 0;
}
