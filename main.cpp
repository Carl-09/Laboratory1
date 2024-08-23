int main() {
    while (true) {
        cout << "Main Menu" << endl;
        cout << "1. List files in the current directory" << endl;
        cout << "2. Create a new directory" << endl;
        cout << "3. Change the working directory" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "List Files Menu" << endl;
                cout << "1. List all files in the current directory" << endl;
                cout << "2. List files based on a specific extension" << endl;
                cout << "3. List files based on a pattern" << endl;
                cout << "Enter your choice: ";

                int file_choice;
                cin >> file_choice;

                switch (file_choice) {
                    case 1:
                        list_files();
                        break;
                    case 2:
                        list_files_by_extension();
                        break;
                    case 3:
                        list_files_by_pattern();
                        break;
                    default:
                        cout << "Invalid choice." << endl;
                }
                break;
            }
            case 2:
                create_directory();
                break;
            case 3:
                change_directory();
                break;
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
