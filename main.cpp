#include "Stack.h"

int main() {
	cout << "Test class" << endl;
	Stack st(5, 2);
	cout << "Now stack is empty? " << st.isEmpty() << endl;
	cout << "Push 6 60 40" << endl;
	st.push(6);
	st.push(60);
	st.push(40);
	st.show();
	cout << "Now stack is empty? " << st.isEmpty() << endl;
	cout << "Pop 40" << endl;
	st.pop();
	st.show();
	cout << "Push 30" << endl;
	st.push(30);
	st.show();
	cout << "Pop 2 elements" << endl;
	st.multiPop(2);
	st.show();
	cout << "Create new copy stack 2" << endl;
	Stack st2(st);
	st2.show();
	cout << "Push 20" << endl;
	st2.push(20);
	st2.show();
	cout << "Operator =. Stack 1:" << endl;	
	st = st2;
	st.show();
}