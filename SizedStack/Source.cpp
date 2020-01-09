#include<iostream>
#include "Stack.h"

using namespace std;

int main() {
	Stack s{ 4 };

	s.push(1);
	s.push(2);
	s.push(3);

	while (!s.isEmpty())
	{
		cout << s.pop() << " ";
	}

	return 0;
}
