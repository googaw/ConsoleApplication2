#include <iostream>

const int hour_to_min = 60;

//// ���� Travel �ṹ��
//struct Travel {
//    int hour;
//    int min;
//};
//
//// ��������
//struct Travel sum(Travel t1, Travel t2);
//void time_total(Travel t);
//
//// ʹ�ñ�׼�����ռ�
//using namespace std;
//
//int main() {
//    // ÿ�������ʱ��
//    Travel day1 = { 5, 45 };
//    Travel day2 = { 6, 6 };
//    Travel day3 = { 7, 5 };
//    Travel all_time;
//
//    // ����ǰ�������ʱ��
//    all_time = sum(day1, day2);
//    cout << "two day total: ";
//    time_total(all_time);
//
//    // �����������ʱ��
//    all_time = sum(all_time, day3);
//    cout << "three day total: ";
//    time_total(all_time);
//
//    return 0;
//}
//
//// �������� Travel �ṹ���ʾ��ʱ���ܺ�
//struct Travel sum(Travel t1, Travel t2) {
//    Travel total;
//    total.min = (t1.min + t2.min) % hour_to_min;
//    total.hour = t1.hour + t2.hour + (t1.min + t2.min) / hour_to_min;
//    return total;
//}
//
//// ��� Travel �ṹ���ʾ��ʱ��
//void time_total(Travel t) {
//    // �� \t ����Сʱ�ͷ������֮��
//    cout << "hour: " << t.hour << "\tmin: " << t.min << endl;
//}

//��дһ����������������10���߶�����ĳɼ����û�������ǰ�������룬���洢��һ�������У�д����������ƽ��ֵ�����룬���
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

////ʹ�ú����ĵݹ�дһ���׳�
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
////�ݹ麯��
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
void Reverse_array(double*, int);

int main()
{
	double arr_1[60] = {0};
	int length = Fill_array(arr_1, 60);
	cout << "���鳤��Ϊ��" << length << endl;
	show_array(arr_1, length);
	Reverse_array(arr_1, length);
	show_array(arr_1, length);
	return 0;

}
//ͳ���������
int Fill_array(double*num, int n)
{
	int i = 0;
	cout << "������doubleֵ";
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


void show_array(double*num, int leng_th)
{
	for (int i = 0;i < leng_th;i++)
	{
		cout << num[i]<<' ';
	}
	cout << endl;
}

void Reverse_array(double* num, int leng_th)
{
	double temp;
	for (int i=0,j = leng_th-1; i<j; i++,j--)
	{	
		temp = num[i];
		num[i] = num[j];
		num[j] = temp;
	}
	cout << "��ת���ֵ��";
}