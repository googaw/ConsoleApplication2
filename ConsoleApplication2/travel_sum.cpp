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
using namespace std;

int main()
{
	
}

int* input()
{
	int count = 0;
	int golf[10];
	while (count<=10 and cin>>golf[count])
	{
		
		count++;
	}
}