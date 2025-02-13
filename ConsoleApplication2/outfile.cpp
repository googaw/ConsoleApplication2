//writing to a file
#include<iostream>
#include<fstream>
#include<cctype>
int main()
{
	using namespace std;

	//char automobile[50];
	//int year;
	//double a_price;
	//double d_price;

	//ofstream outFile;
	//outFile.open("carinfo.txt");

	//cout << "enter the make and model of automobile";
	//cin.getline(automobile, 50);
	//cout << "enter the mobile years";
	//cin >> year;
	//cout << "enter the original asking price:";
	//cin >> a_price;
	//d_price = 0.913 * a_price;

	//cout << fixed;//不用科学计数法
	//cin.precision(2);
	//cout.setf(ios_base::showpoint);
	//cout << "make and model:" << automobile << endl;
	//cout << "year:" << year << endl;
	//cout << "Was asking $" << a_price << endl;
	//cout << "now asking $" << d_price << endl;

	//outFile << fixed;
	//outFile.precision(2);
	//outFile.setf(ios_base::showpoint);
	//outFile << "make and model:" << automobile << endl;
	//outFile << "year:" << year << endl;
	//outFile << "was asking $" << a_price << endl;
	//outFile << "now asking $" << d_price << endl;

	//outFile.close();
	//return 0;

	//假如使用ch+1，会转换为整型输出
	//char ch;
	//cout << "Type, and I shall repeat.\n";
	//cin.get(ch);
	//while (ch != '.')
	//{
	//	if (ch == '\n')
	//		cout << ch;
	//	else
	//	{
	//		cout << ch + 1;
	//	}
	//	cin.get(ch);

	//}

	//char ch;
	//int ct1=0, ct2=0;
	//while ((ch = cin.get()) != '$')
	//{
	//	cout << ch;
	//	ct1++;
	//	if (ch == '$')
	//		ct2++;
	//	cout << ch;
	//}
	//cout << "ct1=" << ct1 << ",ct2=" << ct2;
	char ch;
	while ((ch = cin.get()) != '@')
	{
		if (isdigit(ch))
			ch = cin.get();
		else if (ch <= 'z' and ch >= 'a')
			ch = toupper(ch);
		else if (ch <= 'Z' and ch >= 'A')
			ch = tolower(ch);
		cout << ch;


	}
	return 0;


	

	


}