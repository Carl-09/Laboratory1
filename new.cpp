#include <iostream>
#include <direct.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void lis_files() {
  system("dir")
}
void list_files_by_extension() {
    string extension;
    cout << "Enter the file extension (e.g., .txt): ";
    cin >> extension;

    string command = "dir *";
    command += extension;
    system(command.c_str()); 
}


void list_files_by_pattern() {
    string pattern;
    cout << "Enter the file pattern (e.g., moha*.*): ";
    cin >> pattern;

    string command = "dir ";
    command += pattern;
    system(command.c_str()); 
}
