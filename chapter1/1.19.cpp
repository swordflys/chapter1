#include "chapter1.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "������2������" << endl;
	int v1 = 0, v2 = 0, temp = 0, sum = 0;
	cin >> v1 >> v2;
	if (v1 > v2)
		temp = v2, v2 = v1, v1 = temp;
	while (v2 >= v1)
		sum += v2, --v2;
	cout << "��2�����ּ�֮����������֮��Ϊ��" << sum << endl;
	return 0;
}