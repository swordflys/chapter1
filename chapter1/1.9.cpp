#include "chapter1.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "������2������" << endl;
	int v1 = 0, v2 = 0, sum = 0;
	cin >> v1 >> v2;
	while (v2 >= v1)
		sum += v2, --v2;
	cout << "��2�����ּ�֮����������֮��Ϊ��" << sum << endl;
	return 0;
}