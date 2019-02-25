// c8.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//a.使用const char *数组存储表示季度名称的字符串，并使用double数组存储开支
//b.使用const char *数组存储表示季度名称的字符串，并使用一个结构，该结构只有一个成员--
//一个用于存储开支的double数组。这种设计与使用array类的基本设计类似。
#include <iostream>
using namespace std;
const int Seasons = 4;
const char* Snames[4] = { "Spring","Summer","Fall","Winter" };
struct expenses
{
	double cost;
};
void Ver_AFill(double* cost);
void Ver_AShow(const double* cost);
void Ver_BFill(expenses* exp);
void Ver_BShow(const expenses* exp);

int main()
{
	double cost[Seasons];
	Ver_AFill(cost);
	Ver_AShow(cost);
	expenses exp[4];
	Ver_BFill(exp);
	Ver_BShow(exp);
}

void Ver_AFill(double *cost) {
	cout << "Version A: " << endl;
	for (int i = 0; i < Seasons; i++) {
		cout << "Enter " << Snames[i] << " expenses: $";
		cin >> (cost[i]);
	}
}
void Ver_AShow(const double* cost) {
	double total = 0.0;
	for (int i = 0; i < Seasons; i++) {
		cout << Snames[i] << ": $" << cost[i] << endl;
		total += cost[i];
	}
	cout << "Total Expeness: $" << total << endl;
}

void Ver_BFill(expenses *exp) {
	cout << "Version B: " << endl;
	for (int i = 0; i < Seasons; i++) {
		cout << "Enter " << Snames[i] << " expenses: $";
		cin >> exp[i].cost;
	}
}
void Ver_BShow(const expenses* exp) {
	double total = 0.0;
	for (int i = 0; i < Seasons; i++) {
		cout << Snames[i] << ": $" << exp[i].cost << endl;
		total += exp[i].cost;
	}
	cout << "Total Expeness: $" << total << endl;
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
