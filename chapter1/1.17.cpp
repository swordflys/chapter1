#include "chapter1.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "请输入一组数字(相同的数字排在一起，以Ctrl+Z结束)：" << endl;
	int counter = 0, currVal =0, val =0;
	while (cin >> val)
	{
		if (val == currVal)
			counter += 1;
		else
		{
			cout << "数字 " << currVal << " 出现了 " << counter << "次" << endl;
			currVal = val;
			counter = 1;
		}
	}
	return 0;
}