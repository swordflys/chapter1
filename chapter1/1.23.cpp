#include "chapter1.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	Sales_item item, curritem;
	int counter = 0;
	if (cin >> item)			//读取第一条记录，
	{							//读取失败，直接跳出本语句块，不执行最后一句语句；
		curritem = item, counter = 1;
		while (cin >> item)		//继续读取记录，并与前一记录作比较，直到记录读取完毕。
		{
			if (compareIsbn(item, curritem))
				curritem += item, ++counter;
			else
			{
				//因为curritem.bookNo的访问说明符为private,所以此处使用成员函数curritem.isbn()来读取ISBN
				cout << "ISBN为“" << curritem.isbn() << "”的书籍共有销售记录" << counter << "条，销售数据如下：" << curritem << endl;
				curritem = item, counter = 1;
			}
		}
		cout << "ISBN为“" << curritem.isbn() << "”的书籍共有销售记录" << counter << "条，销售数据如下：" << curritem << endl;
	}
	return 0;
}