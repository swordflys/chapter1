#include "chapter1.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	Sales_item item, curritem;
	int counter = 0;
	if (cin >> item)			//��ȡ��һ����¼��
	{							//��ȡʧ�ܣ�ֱ�����������飬��ִ�����һ����䣻
		curritem = item, counter = 1;
		while (cin >> item)		//������ȡ��¼������ǰһ��¼���Ƚϣ�ֱ����¼��ȡ��ϡ�
		{
			if (compareIsbn(item, curritem))
				curritem += item, ++counter;
			else
			{
				//��Ϊcurritem.bookNo�ķ���˵����Ϊprivate,���Դ˴�ʹ�ó�Ա����curritem.isbn()����ȡISBN
				cout << "ISBNΪ��" << curritem.isbn() << "�����鼮�������ۼ�¼" << counter << "���������������£�" << curritem << endl;
				curritem = item, counter = 1;
			}
		}
		cout << "ISBNΪ��" << curritem.isbn() << "�����鼮�������ۼ�¼" << counter << "���������������£�" << curritem << endl;
	}
	return 0;
}