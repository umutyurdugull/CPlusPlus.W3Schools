#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

class Student {
public:
    string firstName;
    string lastName;
    string getFullName() {
        return firstName + " " + lastName;
    }
    int id;
};

void AddStudent() {
    Student student;
    cout << "Enter student firstname: ";
    cin >> student.firstName;
    cout << "Enter student lastname: ";
    cin >> student.lastName;

    string fullname = student.getFullName();
    cout << "Enter student number: ";
    cin >> student.id;

    string fileName = to_string(student.id) + ".txt";
    ofstream FileOpener(fileName);
    FileOpener << fullname;
    FileOpener.close();

    cout << "Student Added!" << endl;
}

void RemoveStudent() {
    string studentNumber;
    cout << "Enter student number to remove student: ";
    cin >> studentNumber;
    string fileName = studentNumber + ".txt";

    try {
        if (fs::remove(fileName))
            cout << "File " << fileName << " deleted.\n";
        else
            cout << "File " << fileName << " not found.\n";
    }
    catch (const fs::filesystem_error& err) {
        cout << "Filesystem error: " << err.what() << '\n';
    }
}

void ViewStudents() {
    string directoryPath = fs::current_path().string();

    try {
        for (const auto& entry : fs::directory_iterator(directoryPath)) {
            if (entry.is_regular_file() && entry.path().extension() == ".txt") {
                cout << "Found Student!: " << entry.path().filename() << endl;
            }
        }
    }
    catch (const fs::filesystem_error& e) {
        cerr << "Filesystem error: " << e.what() << endl;
    }
}

int main() {
    int option = 0;

    while (true) {
        cout << "Select an option: 1 - Add Student, 2 - View Students, 3 - Remove Student, 0 - Exit" << endl;
        cin >> option;

        switch (option) {
        case 1:
            AddStudent();
            break;
        case 2:
            ViewStudents();
            break;
        case 3:
            RemoveStudent();
            break;
        case 0:
            cout << "Exiting program..." << endl;
            return 0;
        default:
            cout << "Invalid option, please try again." << endl;
            break;
        }
    }
}
