#include <iostream>

void swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main()
{
	int a = 8;
	int b = 5;

	std::cout << "a = " << a << ", b = " << b<< std::endl;

	swap(&a, &b);

	std::cout << "a = " << a << ", b = " << b<< std::endl;

}