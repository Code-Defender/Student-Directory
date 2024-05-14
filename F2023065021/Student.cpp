#include "Student.h"
#include<iostream>
#include<string>
using namespace std;

Student::Student(int id1, string name1, unsigned long num, string adrss) {
	Student::SetId(id1);
	Student::SetName(name1);
	Student::SetNumber(num);
	Student::SetAddress(adrss);

}
// Default constructor
Student::Student() {
	id = 0; // Assuming default id is 0
	name = ""; // Assuming default name is an empty string
	number = 0;
	Address = "";

}
void Student::SetId(int id1) {
	this->id = id1;
}
void Student::SetName(string name1) {
	name = name1;
}
void Student::SetNumber( unsigned long num) {
	number = num;
}
void Student::SetAddress(string adrss) {
	Address = adrss;
}
//Getters
int Student::GetId() {
	return id;
}
unsigned long Student::GetNumber() {
	return number;
}
string Student::GetName() {
	return name;
}
string Student::GetAddress()
{
	return Address;
}