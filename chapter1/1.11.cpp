#include "chapter1.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "������2������" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	cout << "��2�����ּ�֮��������У�" << endl;
	while (v2 >= v1)
		cout << v1 << " ", ++v1;
	
	return 0;
}