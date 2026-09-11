#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

int main(){

    Node *first = nullptr;
    Node *last = nullptr;

    int choice, value;

    do{
        cout << "\n\n====== LINKED LIST MENU ======\n";
        cout << "\n1. Create Linked List (Insert at End)";
        cout << "\n2. Insert at Beginning";
        cout << "\n3. Display Linked List";
        cout << "\n4. Delete First Node";
        cout << "\n5. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch(choice){

            // Insert at End
            case 1:
            {
                cout << "\nEnter value to insert: ";
                cin >> value;

                Node *newNode = new Node(value);

                if(first == nullptr){
                    first = newNode;
                    last = newNode;
                }
                else{
                    last->next = newNode;
                    last = newNode;
                }

                cout << "\nNode inserted successfully.\n";
                break;
            }

            // Insert at Beginning
            case 2:
            {
                cout << "\nEnter value to insert at beginning: ";
                cin >> value;

                Node *newNode = new Node(value);

                if(first == nullptr){
                    first = newNode;
                    last = newNode;
                }
                else{
                    newNode->next = first;
                    first = newNode;
                }

                cout << "\nNode inserted at beginning successfully.\n";
                break;
            }

            // Display
            case 3:
            {
                if(first == nullptr){
                    cout << "\nLinked List is empty.\n";
                }
                else{
                    Node *temp = first;

                    cout << "\nLinked List elements:\n";

                    while(temp != nullptr){
                        cout << temp->data << " ";
                        temp = temp->next;
                    }
                    cout << endl;
                }

                break;
            }

            // Delete First Node
            case 4:
            {
                if(first == nullptr){
                    cout << "\nLinked List is empty.\n";
                }
                else{
                    Node *temp = first;

                    first = first->next;

                    delete temp;

                    if(first == nullptr){
                        last = nullptr;
                    }

                    cout << "\nFirst node deleted successfully.\n";
                }

                break;
            }

            // Exit
            case 5:
                cout << "\nExiting...\n";
                break;

            default:
                cout << "\nInvalid choice. Please try again.\n";
                break;
        }

    }while(choice != 5);

    return 0;
}