#pragma once
#include<iostream>
using namespace std;
class Student

{
private:
	int id;
	string name;
	unsigned long number;
	string Address;
public:
	Student();
	Student(int id1, string name1, unsigned long num, string Adrss);
	void SetId(int);
	void SetName(string);
	void SetNumber(unsigned long);
	void SetAddress(string);
	int GetId();
	unsigned long GetNumber();
	string GetName();
	string GetAddress();
	

};

