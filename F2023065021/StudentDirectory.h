#pragma once
#include<iostream>
#include"Student.h"
using namespace std;

const int MaxStudent = 100;

class StudentDirectory {
private:
	Student Student_array[MaxStudent];
	int count;
public:
	StudentDirectory();
	void Add_Student(int, string, unsigned long, string);
	void List_Student();
	bool Delete_Student(int);
	bool Update_Record(int , string);
	void Search_Record_id(int);
	void Search_Record_Name(string);
	void Print_Id();

};