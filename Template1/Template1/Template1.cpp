// Template1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
template <class T>
class Repository5
{
private:
	T m_array[5];
public:
	void set(int index, const T&value)
	{
		m_array[index] = value;
	}
	const T&get(int index)
	{
		return m_array[index];
	}


};



int main()
{
	Repository5 <int> intRepo;
	for (int i = 0; i < 5; i++)
	{
		intRepo.set(i, i);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << intRepo.get(i) << '\n';
	}

	getchar();
	return 0;
}

