#pragma once
#include "Node.h"

template<typename T>
class List
{
public:

	//void initializeList();
	bool isEmptyList();
	//int Length();

	T front();
	T back();

	//virtual bool search(const T&) = 0;
	virtual void insetFirst(const T&) = 0;
	virtual void insetLast(const T&) = 0;
	//virtual void deleteNode(const T&) = 0;

	//iterator<T> Begin();
	//iterator<T> End();

	List();
	//List(List<T>&);
	~List();
	
private:

	//void copyList(List<T>&)

protected:

	int mCount;
	Node<T> * First;
	//Node<T> * Last;

};

