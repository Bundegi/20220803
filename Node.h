#include <cstdio>
#include <iostream>
using namespace std;
class Node {
	Node* link;
	int data;
public:
	Node(int val = 0) : data(val), link(NULL) {}
	Node* getLink() { return link; }
	void setLink(Node* next) { link = next; }
	void display() {
		cout << "< " << data << " > " << endl;
	}
};
//스택구현
//#include "student.h"
//class Node : public Student {
//	Node* link;
//public:
//	Node(int id = 0, string name = "", string dept = "") : Student(id, name, dept) { link = NULL; }
//	~Node(void) {}
//	Node* getLink() { return link; }
//	void setLink(Node* p) { link = p; }
//};