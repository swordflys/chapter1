#include "chapter1.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "请输入一组数字(以Ctrl+Z结束)：" << endl;
	int sum = 0, v =0;
	while (cin >> v)
		sum += v;
	cout << "此组数字的总和为：" << sum << endl;
	return 0;
}