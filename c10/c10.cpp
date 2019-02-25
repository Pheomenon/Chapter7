// c10.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

double calculate(double, double,double(*pf)(double,double));
double calculate(int, int(*pf)(int));
int factorial(int x);
double add(double x, double y);

int main()
{
	double q = calculate(2.5, 10.4, add);
	int p = calculate(5, factorial);
}


double calculate(double x, double y, double(*pf)(double,double)) {
	cout << (*pf)(x, y) << endl;;
	return 0;
}
double add(double x, double y) {
	return x + y;
}
double calculate(int x, int(*pf)(int)) {
	cout << "Factor: "<<(*pf)(x);
	return 1;
}
int factorial(int x) {
	if (x > 1)
		x *= factorial(x - 1);
	return x;
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
