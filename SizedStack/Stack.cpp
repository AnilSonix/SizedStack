#include "Stack.h"

Stack::Stack(const int& capacity)
{
}

Stack::~Stack()
{
}

bool Stack::push(int newItem)
{
	if (!isFull())
	{
		data[++top] = newItem;
		return true;
	}
	return false;
}

int Stack::pop()
{
	if (!isEmpty())
	{
		return data[top--];
	}
	return 0;
}

int Stack::peek() const
{
	if (!isEmpty())
	{
		return data[top];
	}
	return 0;
}

bool Stack::isEmpty() const
{
	return top == -1;
}

bool Stack::isFull() const
{
	return top == CAPACITY - 1;
}
