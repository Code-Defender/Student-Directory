#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include "Student.h"
#include"StudentDirectory.h"
using namespace std;

void Menu();
void call();



int main()
{
	system("cls");


	int option;
	char opt;
	StudentDirectory DirectoryObj;
again:
	system("cls");
		Menu();
		cin >> option;
		switch (option)
		{
		case 1:
			system("cls");
			do {
				
				cout << "Inserting Student\n";

				int n;
				unsigned long num;

				string name, adrss;
				cout << "Enter the Student Id\n";
				cin >> n;
				cout << "Enter the Student name\n";
				cin.ignore(); //clear the buffer 
				getline(cin, name);
				cout << "Enter the Student Number\n";
				cin >> num;
				cout << "Enter the Student Address\n";
				cin.ignore();  
				getline(cin, adrss);
		
				DirectoryObj.Add_Student(n, name , num, adrss);
				
				DirectoryObj.Print_Id();
				cout << "Enter Y to Insert another Record and N for Main Menu ";
				cin >> opt;
				if (opt == 'n' || opt == 'N') goto again;
				
			} while (opt == 'Y' || opt == 'y');
			break;

		case 2:
			
			do {
				system("cls");
				cout << "update Student\n";
				int id;
				cout << "Enter the id that you want to upgrade\n";
				cin >> id;
				string update_name;
				cout << "Enter the Updated Name for this Id" << endl;
				cin.ignore(); //clear the buffer 
				getline(cin, update_name);
				if (DirectoryObj.Update_Record(id, update_name)){
					cout << "Student Id =" << id << " is successfully updated\n";
				}
				else {
					cout << "Student Id " << id << " not found\n";
				}

				cout << "Enter Y to update another Record and N for Main Menu ";
				cin >> opt;
				if (opt == 'n' || opt == 'N') goto again;

			} while (opt == 'Y' || opt == 'y');
			break;
		case 3:
			cout << "\033[2J\033[H"; //code for clear console
			do {
				cout << "Delete Student Record\n";
				int deleteid;
				cout << "Enter the id that you want to Delete\n";
				cin >> deleteid;
				if (DirectoryObj.Delete_Student(deleteid)) {
					cout << "Id = " << deleteid << " is sucessfully Deleted\n";
				}
				else {
					cout << "Error! Id = " << deleteid << " not found" << endl;
				}

				
				cout << "Enter Y to Delete another Record and N for Main Menu ";
				cin >> opt;
				if (opt == 'n' || opt == 'N') goto again;
				
			} while (opt == 'Y' ||opt == 'y');
				break;
		case 4:
			system("cls");
			do {
				int n;
				cout << "Enter 1 for search with Id Or Enter 2 for Search with Name";
				cin >> n;
				if (n == 1) {
					cout << "Enter id for Search  Student\n";
					int id;
					cin >> id;
					DirectoryObj.Search_Record_id(id);
				}
				else if (n == 2) {
					string name;
					cout << "Enter the name " << endl;
					cin >> name;
					DirectoryObj.Search_Record_Name(name);

				}
				cout << "Do you want to Search another Record [y/n]";
					cin >> opt;
				if (opt == 'N' || opt == 'n')  goto again;

			} while (opt == 'y' || opt == 'Y');

				break;
		case 5:
			system("cls");
			DirectoryObj.List_Student();
				call();

				{
					int x;
					cin >> x;
					if (x == 1) goto again;
				}
				break;

		default:
			break;
		}








		return 0;
}
void Menu() {
	cout << endl;
	cout << setfill('*') << setw(45) << " " << endl;
	cout << setfill(' ') << setw(40) << "Telephone Directory: Main Menu " << endl;
	cout << setfill('*') << setw(45) << " " << endl << endl;
	cout << endl;
	cout << setfill(' ') << setw(30) << "1. Insert a new student\n";
	cout << setfill(' ') << setw(36) << "2. Update an existing student\n";
	cout << setfill(' ') << setw(25) << "3. Delete a record\n";
	cout << setfill(' ') << setw(48) << "4. Search for a student(usign name or ID)\n";
	cout << setfill(' ') << setw(25) << "5. List Directory\n\n";
	cout << "Select Option [1,2,3,4,5]\n" << "0 to Exit ";
}
void call() {
	cout << "Press 1 for Main Menu\n";
}