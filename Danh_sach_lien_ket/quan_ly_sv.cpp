#include <bits/stdc++.h>
using namespace std;

// Định nghĩa cấu trúc Sinh viên
struct Student {
    int id;
    string name;
    float gpa;
    Student* next;

    Student(int _id, string _name, float _gpa) {
        id = _id;
        name = _name;
        gpa = _gpa;
        next = nullptr;
    }
};

// Hàm thêm sinh viên vào đầu danh sách
void addStudent(Student*& head, int id, string name, float gpa) {
    Student* newStudent = new Student(id, name, gpa);
    newStudent->next = head;
    head = newStudent;
}

// Hàm hiển thị danh sách sinh viên
void displayStudents(Student* head) {
    if (!head) {
        cout << "Danh sach rong!" << endl;
        return;
    }
    Student* temp = head;
    while (temp) {
        cout << "ID: " << temp->id << ", Ho ten: " << temp->name << ", GPA: " << temp->gpa << endl;
        temp = temp->next;
    }
}

// Hàm tìm kiếm sinh viên theo ID
Student* searchStudent(Student* head, int id) {
    Student* temp = head;
    while (temp) {
        if (temp->id == id) return temp;
        temp = temp->next;
    }
    return nullptr;
}

// Hàm xóa sinh viên theo ID
void deleteStudent(Student*& head, int id) {
    if (!head) return;
    if (head->id == id) {
        Student* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Student* prev = head;
    Student* temp = head->next;
    while (temp) {
        if (temp->id == id) {
            prev->next = temp->next;
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    cout << "Khong tim thay sinh vien co ID: " << id << endl;
}

int main() {
    Student* head = nullptr;
    int choice, id;
    string name;
    float gpa;

    do {
        cout << "\n1. Them sinh vien\n2. Hien thi danh sach\n3. Tim sinh vien theo ID\n4. Xoa sinh vien theo ID\n5. Thoat\nNhap lua chon: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Nhap ID: "; cin >> id;
                cout << "Nhap ho ten: "; cin.ignore(); getline(cin, name);
                cout << "Nhap GPA: "; cin >> gpa;
                addStudent(head, id, name, gpa);
                break;
            case 2:
                displayStudents(head);
                break;
            case 3:
                cout << "Nhap ID can tim: "; cin >> id;
                {
                    Student* found = searchStudent(head, id);
                    if (found) {
                        cout << "Tim thay: ID: " << found->id << ", Ho ten: " << found->name << ", GPA: " << found->gpa << endl;
                    } else {
                        cout << "Khong tim thay sinh vien co ID: " << id << endl;
                    }
                }
                break;
            case 4:
                cout << "Nhap ID can xoa: "; cin >> id;
                deleteStudent(head, id);
                break;
            case 5:
                cout << "Thoat chuong trinh." << endl;
                break;
            default:
                cout << "Lua chon khong hop le!" << endl;
        }
    } while (choice != 5);
    
    return 0;
}