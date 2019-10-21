#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class student {
private:
	string name;
	int num;
	bool gender; // 0 女 1 男
	int year, month, day;
	int height, weight, grade;
	string address;
public:
	void init(string name1, int num1, bool gender1, int year1, int month1, int day1, int height1, int weight1, int grade1, string address1) {
		name = name1, num = num1, gender = gender1, year = year1, month = month1, day = day1, height = height1, weight = weight1, grade = grade1, address = address1;
	}
	void Output() {
		cout << "姓名:" << name << "\n学号:" << num << "\n性别:";
		if (gender) cout << "男 ";
		else cout << "女 ";
		cout << "\n出生年月:" << year << "年" << month << "月" << day << "日" << "\n身高(cm):" << height << "\n体重(kg):" << weight << "\n高考成绩:" << grade << "\n家庭住址:" << address << "endl";
	}
	void Update(string name1, int num1, bool gender1, int year1, int month1, int day1, int height1, int weight1, int grade1, string address1) {
		name = name1, num = num1, gender = gender1, year = year1, month = month1, day = day1, height = height1, weight = weight1, grade = grade1, address = address1;
	}
};


int main() {
	int op;
	string name;
	int num;
	bool gender; // 0 女 1 男
	int year, month, day;
	int height, weight, grade;
	string address;
	student stu;
	while (1) {
		cout << "Please enter the number of the operation you want to perform." << endl;
		cout << "0.Qiut\n1.Initialize student information\n2.Output student information\n3.update student information\n";
		cin >> op;
		if (op == 0) {
			cout << "Have a good time!";
			break;
		}
		if (op == 1) {
			cout << "Please input related information in order:(姓名（采用string类型）、学号（int）、性别（bool 0 为女 1 为男）、出生日期(年月日)、身高（cm）、体重（kg）、高考成绩、家庭住址（采用string类型）)" << endl;
			cin >> name >> num >> gender >> year >> month >> day >> height >> weight >> grade >> address;
			stu.init(name, num, gender, year, month, day, height, weight, grade, address);
		}
		else if (op == 2) {
			stu.Output();
		}
		else if (op == 3) {
			cout << "Please input related information in order:(姓名（采用string类型）、学号（int）、性别（bool 0 为女 1 为男）、出生日期(年月日)、身高（cm）、体重（kg）、高考成绩、家庭住址（采用string类型）)" << endl;
			cin >> name >> num >> gender >> year >> month >> day >> height >> weight >> grade >> address;
			stu.Update(name, num, gender, year, month, day, height, weight, grade, address);
		}
	}