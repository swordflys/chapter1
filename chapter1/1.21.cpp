#include "chapter1.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	Sales_item item, curritem;
	int n = 0;
	if (cin >> item)
	{
		curritem = item;
		while (cin >> item)
		{
			if (compareIsbn(item, curritem))
				curritem += item;
			else
			{
				++n;
				cout << "���������ˣ����ǵ�" << n << "������Ϣ���£�\t" << item << endl;
			}
		}
	}
		cout << curritem << endl;
	return 0;
}