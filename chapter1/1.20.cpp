#include "chapter1.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	Sales_item item;
	while (cin >> item)
		cout << item << endl;
	return 0;
}