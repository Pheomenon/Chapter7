// c9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};


int getinfo(student *pa, int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++) {
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Done\n";
	return 0;
}
int getinfo(student *pa, int n){
	int actual = 0;
	for (int i = 0; i < n; i++) {
		cout << "Enter the student's full name: ";
		cin >> pa[i].fullname;
		if (*pa[i].fullname == '\n') {
			break;
		}
		else{
			actual++;
		}
		cout << "Enter his hobby: ";
		cin >> pa[i].hobby;
		cout << "Enter his OOP level: ";
		cin >> pa[i].ooplevel;
		
	}
	return actual;
}
void display1(student st) {
	cout <<"Display1:" <<endl;
	cout <<"Full name: "<< st.fullname<<endl;
	cout <<"Hobby: "<<st.hobby<<endl;
	cout <<"OOPlevel: "<< st.ooplevel;
	cout << endl;
}
void display2(const student* ps) {
	cout << "Display2:"<<endl;
	cout << "Full name: " << ps->fullname<<endl;
	cout << "Hobby: " << ps->hobby<<endl;
	cout << "OOPlevel: " << ps->ooplevel<<endl;
	cout << endl;
}
void display3(const student pa[], int n) {
	cout << "Display3:"<<endl;
	for (int i = 0; i < n; i++) {
		cout << "Full name: " << pa[i].fullname << endl;
		cout << "Hobby: " << pa[i].hobby << endl;
		cout << "OOPlevel: " << pa[i].ooplevel << endl;
	}
	cout << endl;
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
