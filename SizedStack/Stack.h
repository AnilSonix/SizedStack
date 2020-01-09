#pragma once
class Stack
{
public:
	Stack(const int& capacity = 10);
	~Stack();

	bool push(int newItem);
	int pop();
	int peek() const;

	bool isEmpty() const;
	bool isFull() const;

private:
	const int CAPACITY;
	int* data;
	int top;
};
