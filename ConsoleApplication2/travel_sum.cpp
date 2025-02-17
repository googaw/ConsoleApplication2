#include <iostream>

const int hour_to_min = 60;

//// 定义 Travel 结构体
//struct Travel {
//    int hour;
//    int min;
//};
//
//// 函数声明
//struct Travel sum(Travel t1, Travel t2);
//void time_total(Travel t);
//
//// 使用标准命名空间
//using namespace std;
//
//int main() {
//    // 每天的旅行时间
//    Travel day1 = { 5, 45 };
//    Travel day2 = { 6, 6 };
//    Travel day3 = { 7, 5 };
//    Travel all_time;
//
//    // 计算前两天的总时间
//    all_time = sum(day1, day2);
//    cout << "two day total: ";
//    time_total(all_time);
//
//    // 计算三天的总时间
//    all_time = sum(all_time, day3);
//    cout << "three day total: ";
//    time_total(all_time);
//
//    return 0;
//}
//
//// 计算两个 Travel 结构体表示的时间总和
//struct Travel sum(Travel t1, Travel t2) {
//    Travel total;
//    total.min = (t1.min + t2.min) % hour_to_min;
//    total.hour = t1.hour + t2.hour + (t1.min + t2.min) / hour_to_min;
//    return total;
//}
//
//// 输出 Travel 结构体表示的时间
//void time_total(Travel t) {
//    // 将 \t 放在小时和分钟输出之间
//    cout << "hour: " << t.hour << "\tmin: " << t.min << endl;
//}

//编写一个程序可以输入最多10个高尔夫球的成绩，用户允许提前结束输入，并存储到一个数组中，写三个函数算平均值，输入，输出
//using namespace std;
//
//int main()
//{
//	
//}
//
//int* input()
//{
//	int count = 0;
//	int golf[10];
//	while (count<=10 and cin>>golf[count])
//	{
//		
//		count++;
//	}
//}
//

////使用函数的递归写一个阶乘
//using namespace std;
//int di_gui(int);
//void main()
//{
//	
//	int m;
//	cin >> m;
//	cout<< di_gui(m);
//}
//
////递归函数
//int di_gui(int n)
//{	
//	if (n > 1)
//	{	
//		return n*di_gui(n-1);
//	}
//
//	else if(n == 0 or n == 1)
//	{
//		return 1;
//	}
//}

using namespace std;
int Fill_array(double*, int);
void show_array(double*, int);
double* Reverse_array(double*, int);

void main()
{
	double arr_1[60] = {0};
	cout << Fill_array(arr_1, 60);
	
}
//统计输入个数
int Fill_array(double*num, int n)
{
	int i = 0;
	cout << "请输入double值";
	while (cin >> num[i] and i++<n)
	{
	}
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return i;
}


void show_array(double*, int)
{
	
}

double* Reverse_array(double*num, int)
{
	return num;
}