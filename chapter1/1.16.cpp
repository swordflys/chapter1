#include "chapter1.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "������һ������(��Ctrl+Z����)��" << endl;
	int sum = 0, v =0;
	while (cin >> v)
		sum += v;
	cout << "�������ֵ��ܺ�Ϊ��" << sum << endl;
	return 0;
}