#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;
 
class Stack {

	int m_size;
	int m_step_size;
	int * m_pArr;
	int m_curr;

private:
	void expandStack(int size);
	void copy(const Stack & st);

public:
	Stack(int size, int step_size);
	Stack(const Stack &st);
	void show();
	void push(int elem);
	int pop();
	void multiPop(int N);
	bool isEmpty();
	Stack& operator=(const Stack &st);
	~Stack();
};
 
#endif