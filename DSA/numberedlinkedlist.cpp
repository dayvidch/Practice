#include <iostream>

using namespace std;

void numberLinkedList();

struct Node{
        int data;
        Node* next;
};

int main(){
    numberLinkedList();
}


void printList(Node* head){

    Node* current = head;
    while(current != nullptr){
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "end of linked list" <<endl<<endl;
        
}


void numberLinkedList(){

    //--------------------Linked List setup--------------------
    Node* first = new Node{1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};

    first->next = second;
    second->next = third;

    Node* head = first;


    cout << "--------------------traversal---------------------" <<endl;

    Node* current = head;
    while(current != nullptr){
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "end of linked list" <<endl<<endl;


    cout << "---------------insertion at the beginning---------------" <<endl; 

    Node* insertBeginning = new Node{0,nullptr};
    insertBeginning->next = first;
    head = insertBeginning;

    printList(head);


    cout << "---------------insert at the end---------------" <<endl;

    Node* insertEnd = new Node{100, nullptr};

    //if empty linked list
    if(head == nullptr){
        head = insertEnd;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = insertEnd;

    printList(head);


    cout << "---------------insert at the middle---------------" <<endl;

    Node* insertMiddle = new Node{200};

    temp = head;
    while(temp != nullptr && temp->data != 2){
        temp = temp->next;
    }

    insertMiddle->next = temp->next;
    temp->next = insertMiddle;

    printList(head);


    cout << "---------------delete at the beginning---------------" <<endl;

    temp = head;
    head = head->next;
    delete temp;

    printList(head);


    cout <<"---------------delete at the end---------------" <<endl;

    temp = head;

    //if empty linked list
    if(temp == nullptr){
        cout << "linked list is empty";
    }

    //if linked list has only one node
    if(temp->next == nullptr){
        delete temp;
        cout << "deleted last node";
    }

    //Finding second last node
    Node* secondLast = temp;
    while(secondLast->next->next != nullptr){
        secondLast = secondLast->next;
    }

    delete secondLast->next;
    secondLast->next = nullptr;

    printList(head);


    cout <<"---------------delete at the middle---------------" <<endl;

    Node* prev = nullptr;
    temp = head;

    while(temp->data != 200){
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    delete temp;

    printList(head);


    cout <<"---------------searching through linked list---------------" <<endl;

    temp = head;
    bool flag = false;

    while(temp != nullptr){
        if(temp->data == 2){
            cout << "value found" <<endl;
            flag = true;
        }
        temp = temp->next;

    }
    if(flag == false){
        cout << "value not found" <<endl;
    }

    cout <<"---------------reverse linked list---------------" <<endl;

    current = head;
    prev = nullptr;
    Node* next;

    while(current != nullptr){

        next = current->next;

        current->next = prev;

        prev = current;
        current = next;
    }
    head = prev;

    printList(head);






}