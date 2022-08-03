#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
class Student {
	int id;
	string name;
	string dept;
public:
	Student(int i = 0, string n = "", string d = "") { set(i, n, d); }
	void set(int i, string n, string d) {
		id = i;
		name = n;
		dept = d;
	}
	void display() {
		cout << "학번 : " << id << " 성명 : " << name << " 학과 : " << dept << endl;
	}
};