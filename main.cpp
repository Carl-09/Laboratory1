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
            default: error_message("Invalid choice. Please try again.");
        }
    } while (true);
    return 0;
}

