#include <iostream>
#include <direct.h>
#include <dos.h>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

void list_files();
void create_directory();
void change_directory();
void display_menu();

int main() {
    int choice;
    do {
        display_menu();
        cin >> choice;
        switch (choice) {
            case 1: list_files(); break;
            case 2: create_directory(); break;
            case 3: change_directory(); break;
            case 4: exit(0); break;
            default: cout << "Invalid choice. Please try again." << endl;
        }
    } while (true);
    return 0;
}

void display_menu() {
    cout << "Main Menu:" << endl;
    cout << "1. List files in the current directory" << endl;
    cout << "2. Create a new directory" << endl;
    cout << "3. Change the working directory" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

void list_files() {
    int choice;
    cout << "List Files Menu:" << endl;
    cout << "1. List all files" << endl;
    cout << "2. List files by extension" << endl;
    cout << "3. List files by pattern" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    


