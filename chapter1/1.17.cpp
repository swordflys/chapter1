#include "chapter1.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "������һ������(��ͬ����������һ����Ctrl+Z����)��" << endl;
	int counter = 0, currVal =0, val =0;
	while (cin >> val)
	{
		if (val == currVal)
			counter += 1;
		else
		{
			cout << "���� " << currVal << " ������ " << counter << "��" << endl;
			currVal = val;
			counter = 1;
		}
	}
	return 0;
}