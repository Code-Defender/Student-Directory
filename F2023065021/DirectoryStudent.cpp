#include<iostream>
#include<string>
#include"StudentDirectory.h"
using namespace std;


StudentDirectory::StudentDirectory() {
	count = 0;
}


	void StudentDirectory::Add_Student(int id, string name, unsigned long num, string adrss) {
		if (count < MaxStudent) {
			Student_array[count].SetId(id);
			Student_array[count].SetName(name);
			Student_array[count].SetNumber(num);
			Student_array[count].SetAddress(adrss);

			count++;
		}
		else
			cout << "Cannot add more Student because maximum accounts reached" << endl;
	
	}

	void StudentDirectory::List_Student() {
		cout << "---->List of Students\n";
		for (int i = 0; i < count; i++) {
			cout << "Record " << i+1 << endl;
			cout << " ID: " << Student_array[i].GetId() << endl;
			cout << " Name: " << Student_array[i].GetName() << endl;
			cout << " Address: " << Student_array[i].GetAddress() << endl;
			cout << " Number: " << Student_array[i].GetNumber() << endl << endl;

		}
	}

	bool StudentDirectory::Delete_Student(int id) {
		for (int i = 0; i < count; i++) {
			if (Student_array[i].GetId() == id) {
				for (int j = i; j < count-1; j++) {
					Student_array[j] = Student_array[j + 1];
				}
				count--;
				return true;// id successfully deleted
			}
		}
		return false; //if id not deleted 
	}
	bool StudentDirectory::Update_Record(int id, string updated_name) {
		for (int i = 0; i < count; i++) {
			if (Student_array[i].GetId() == id ) {
				Student_array[i].SetName(updated_name);
				return true;
			}
		}
		return false;
	}
	void StudentDirectory::Search_Record_id(int id) {
		for (int i = 0; i < count; i++) {
			if (Student_array[i].GetId() == id) {
				cout << " Id = " << Student_array[i].GetId() << endl;
				cout << " Name = " << Student_array[i].GetName() << endl;
				cout << " Number = " << Student_array[i].GetNumber() << endl;
				cout << " Address = " << Student_array[i].GetAddress() << endl;
			}
		
		}
	}
	void StudentDirectory::Search_Record_Name(string name) {
		bool found = true;
		for (int i = 0; i < count; i++) {
			if (Student_array[i].GetName() == name) {
				cout << " Id = " << Student_array[i].GetId() << endl;
				cout << " Name = " << Student_array[i].GetName() << endl;
				cout << " Number = " << Student_array[i].GetNumber() << endl;
				cout << " Address = " << Student_array[i].GetAddress() << endl;
				found = false;
			}
			
		}
		if (found) cout << "Record Not found" << endl;
	
	}

	void StudentDirectory::Print_Id() {
		
		for (int i = 0; i < count; i++) {
			cout << " Id = " << Student_array[i].GetId() << endl;
		}
	}



