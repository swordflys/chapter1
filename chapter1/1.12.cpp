#include "chapter1.h"

using std::cout;

int main()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
		sum += i;
	cout << sum;
	return 0;
}