#include "Stack.h"

Stack::Stack(int size, int step_size) {
	if (size < 0) {m_size = 0;} else {m_size = size;}
	if (step_size < 0) {m_step_size = 0;} else {m_step_size = step_size;}
	m_curr = 0;
	m_pArr = new int[m_size]();
}

Stack::Stack(const Stack& st) {
	m_pArr = nullptr;
	copy(st);
}

void Stack::show() {
	cout << "Elements:";
	for(int i = 0; i < m_curr; i++){
		cout << " " << m_pArr[i];
	}
	cout << endl;
}

void Stack::expandStack(int size) {
	m_size = m_size+size;
	int * new_pArr = new int[m_size];
	for(int i = 0; i < m_curr; i++){
		new_pArr[i] = m_pArr[i];
	}
	delete [] m_pArr;
	m_pArr = new_pArr;
}

void Stack::push(int elem) {
	if (m_curr == m_size) { expandStack(m_step_size); }
	m_pArr[m_curr] = elem;
	m_curr++;
}

int Stack::pop() {
	int elem = m_pArr[m_curr-1];
	m_curr--;
	return elem;
}

void Stack::multiPop(int N) {
	m_curr -= N;
}

bool Stack::isEmpty() {
	return m_curr==0;
}

void Stack::copy(const Stack & st) {
	if (this == &st) {return;}
	if (m_pArr != nullptr) {
		delete[] m_pArr;
	}
	m_size = st.m_size;
	m_step_size = st.m_step_size;
	m_curr = st.m_curr;
	m_pArr = new int[m_size];
	for (int i = 0; i < m_curr; i++) {
		m_pArr[i] = st.m_pArr[i];
	}
}

Stack& Stack::operator=(const Stack & st) {
	copy(st);
	return *this;
}

Stack::~Stack() {
	delete [] m_pArr;
}