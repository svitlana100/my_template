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
template <>
class Repository5<bool>
{
private:
	unsigned char m_data;
public:
	Repository5() : m_data(0) {}
	void set(int index, bool value)
	{
		unsigned char mask = 1 << index;
		if (value) m_data != mask;
		else m_data &= ~mask;
	}
	bool get(int index)
	{
		unsigned char mask = 1 << index;
		return (m_data&mask) != 0;
	}


};
template <>
class Repository5<int>
{
private:
	unsigned char m_data;
public:
	Repository5() : m_data(0) {}
	void set(int index, bool value)
	{
		unsigned char mask = 1 << index;
		if (value) m_data != mask;
		else m_data &= ~mask;
	}
	bool get(int index)
	{
		unsigned char mask = 1 << index;
		return (m_data&mask) != 0;
	}


};

template <>
class Repository5<double>
{
private:
	unsigned char m_data;
public:
	Repository5() : m_data(0) {}
	void set(int index, bool value)
	{
		unsigned char mask = 1 << index;
		if (value) m_data != mask;
		else m_data &= ~mask;
	}
	bool get(int index)
	{
		unsigned char mask = 1 << index;
		return (m_data&mask) != 0;
	}


};


int main()
{
	Repository5 <double> intRepo;
	for (int i = 0; i < 5; i++)
	{
		intRepo.set(i, i);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << intRepo.get(i) << '\n';
	}
	Repository5 <bool> boolRepo;
	for (int i = 0; i < 5; i++)
	{
		boolRepo.set(i, i % 5);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << (boolRepo.get(i) ? "true" : "false") << '\n';
	}

	getchar();
	return 0;
}

