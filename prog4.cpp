#include<iostream>
using namespace std;

struct employee {
    string name;
    int empid;
    float salary;
};
struct node {
    employee emp;
    node* prev;
    node *next;
};

int main()
{
    node *last = new node;
    last -> next = nullptr;
    node *ptr = last;
    node *start;
    cout << "\n Inserting at front \n" << endl;
    char ans = 'y';
    while (ptr != nullptr) {
        cout << "Enter employee name: ";
        cin >> ptr -> emp.name;
        cout << "Enter employee ID: ";
        cin  >> ptr -> emp.empid;
        cout << "Enter employee salary: ";
        cin >> ptr -> emp.salary;
        cout << "Insert more?(y/n)";
        cin >> ans;
        if (ans == 'y' || ans == 'Y') {
            cout << "---------------------------" << endl;
            ptr -> prev = new node;
            ptr -> prev -> next = ptr;
            ptr = ptr -> prev;
        }else {
            start = ptr;
            ptr -> prev = nullptr;
            ptr = ptr -> prev;
        }
    }

    cout << "\n Diplaying the nodes \n" << endl;
    ptr = start;
    while (ptr != nullptr) {
        cout << ptr -> emp.name << " " << ptr -> emp.empid << " " << ptr -> emp.salary << endl;
        ptr = ptr -> next;
    }

    cout << "\n Deleting Nodes from the back \n" << endl;
    ptr = last;
    while (ptr != nullptr) {
        ptr -> prev -> next = nullptr;
        ptr = ptr -> prev;
        delete ptr -> next;
        cout << "Last node deleted....." << endl;
        cout << "\n Delete more?(y/n) ";
        cin >> ans;
        if (ans == 'y') {
            continue;
        }else
        break;
    }

    cout << "\n Remaining Nodes\n" << endl;
    ptr = start;
    while (ptr != nullptr) {
        cout << ptr -> emp.name << " " << ptr -> emp.empid << " " << ptr -> emp.salary << endl;
        ptr = ptr -> next;
    }
    return 0;
}

