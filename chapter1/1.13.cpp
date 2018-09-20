#include "chapter1.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "请输入2个数字" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	cout << "此2个数字及之间的整数有：" << endl;
	for (int v3 = v1; v3 <= v2; ++v3)
		cout << v3 << "\t";
	
	return 0;
}