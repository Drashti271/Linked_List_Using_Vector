#include <iostream>
#include <vector>
using namespace std;

class VectorList {
    vector<int> data;

public:
    void insertAtFront(int val) 
    {
        data.insert(data.begin(), val);
    }

    void insertAtEnd(int val) 
    {
        data.push_back(val);
    }

    void insertAtIndex(int val, int index) 
    {
        if(index < 0 || index > data.size()) 
        {
            cout << "Invalid index." << endl;
            return;
        }
        data.insert(data.begin() + index, val);
    }

    void deleteAtFront() 
    {
        if(data.empty()) 
        {
            cout << "List is empty." << endl;
            return;
        }
        data.erase(data.begin());
    }

    void deleteAtEnd() {
        if(data.empty()) {
            cout << "List is empty." << endl;
            return;
        }
        data.pop_back();
    }

    void deleteAtIndex(int index) 
    {
        if(index < 0 || index >= data.size()) 
        {
            cout << "Invalid index." << endl;
            return;
        }
        data.erase(data.begin() + index);
    }

    void updateList(int index, int val) {
        if(index < 0 || index >= data.size()) 
        {
            cout << "Invalid index." << endl;
            return;
        }
        data[index] = val;
    }

    void printList() {
        cout << "Vector List: ";
        for(int val : data) 
        {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    VectorList list;
    int choice, element, index;

    do {
        cout << endl << "-----------------" << endl;
        cout << "Enter 1 for insert at front" << endl;
        cout << "Enter 2 for insert at end" << endl;
        cout << "Enter 3 for insert at index" << endl;
        cout << "Enter 4 for delete at front" << endl;
        cout << "Enter 5 for delete at end" << endl;
        cout << "Enter 6 for delete at index" << endl;
        cout << "Enter 7 for update list" << endl;
        cout << "Enter 8 for view list" << endl;
        cout << "Enter 0 for exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter element to insert at front: ";
                cin >> element;
                list.insertAtFront(element);
                break;

            case 2:
                cout << "Enter element to insert at end: ";
                cin >> element;
                list.insertAtEnd(element);
                break;

            case 3:
                cout << "Enter element: ";
                cin >> element;
                cout << "Enter index: ";
                cin >> index;
                list.insertAtIndex(element, index);
                break;

            case 4:
                list.deleteAtFront();
                break;

            case 5:
                list.deleteAtEnd();
                break;

            case 6:
                cout << "Enter index: ";
                cin >> index;
                list.deleteAtIndex(index);
                break;

            case 7:
                cout << "Enter index: ";
                cin >> index;
                cout << "Enter element: ";
                cin >> element;
                list.updateList(index, element);
                break;

            case 8:
                list.printList();
                break;

            case 0:
                cout << "Exiting." << endl;
                break;

            default:
                cout << "Wrong Choice." << endl;
                break;
        }

    } while(choice != 0);

    return 0;
}
