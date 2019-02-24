// c6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int*  Fill_array(double* array, int*last);
void Show_array(double* array, int* last);
void Reverse_array(double* array, int* last);

const int elem = 10;
int main()
{
	double array[elem]; int i = 0;
	int* psi = &i;
	int* ps = Fill_array(array,psi);
	Show_array(array, ps);
	Reverse_array(array, ps);
	double *psa = array;
	Show_array(array, ps);
}

int* Fill_array(double* array, int* last) {
	while (*last<elem && cin >> array[*last])
	{
		(*last)++;
	}
	return last;
}
void Show_array(double* array, int* last) {
	for (int k = 0; k < *last; k++) {
		cout << array[k] << ',';
	}
	cout << endl;
}

void Reverse_array(double* array, int* last) {
	double temp;
	int psl = *last;
	(psl) -= 1;
	for (int k = 0; k <= psl; k++, (psl)--) {
		temp = array[k];
		array[k] = array[psl];
		array[psl] = temp;
	}
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


