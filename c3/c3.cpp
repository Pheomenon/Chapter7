// c3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

struct box{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show(box);
void showVolume(box *box1);

int main()
{
	box box1 = {
		"Arian",
		30,
		40,
		523,
		6
	};
	show(box1);
	showVolume(&box1);
	return 0;
}

void show(box box1) {
	cout << box1.maker << endl;
	cout << box1.height << endl;
	cout << box1.width << endl;
	cout << box1.length << endl;
	cout << box1.volume<< endl;
}

void showVolume(box *box1) {
	box1->volume = (box1->height*box1->length*box1->width);
	cout << box1->volume;
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
