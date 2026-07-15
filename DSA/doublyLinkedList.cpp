#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
};

void printFowardList(Node *head){
    cout << "fowards: ";
    Node *temp = head;
    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "end of double linked list" <<endl;
}

void printBackwardsList(Node *tail){
    cout << "backwards: ";
    Node *temp = tail;
    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->prev;
    }
    cout << "beginning of double linked list" <<endl;
}

void printList(Node* head, Node* tail){
    printFowardList(head);
    printBackwardsList(tail);

}

int main(){

    // double linked linked setup
    Node *first = new Node{1, nullptr, nullptr};
    Node *second = new Node{2, nullptr, nullptr};
    Node *third = new Node{3, nullptr, nullptr};

    first->prev = nullptr;
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next = nullptr;

    Node *head = first;
    Node *tail = third;

    Node *temp;


    cout << "--------------------foward traversal---------------------" <<endl;
    
    temp = head;
    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "end of double linked list" <<endl;


    cout << "--------------------backward traversal---------------------" <<endl;

    temp = tail;
    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->prev;
    }
    cout << "beginning of double linked list" <<endl;


    cout << "--------------------insertion at the beginning---------------------" <<endl;
    
    Node *insertBeginning = new Node{0, nullptr, nullptr};

    insertBeginning->next = head;
    insertBeginning->prev = nullptr;
    head->prev = insertBeginning;
    head = insertBeginning;

    printList(head, tail);


    cout << "--------------------insertion at the end---------------------" <<endl;

    Node *insertEnd = new Node{4, nullptr, nullptr};
    tail->next = insertEnd;
    insertEnd->prev = tail;
    tail = insertEnd;

    printList(head, tail);


    cout << "--------------------insertion in the middle---------------------" <<endl;
    Node *insertMiddle = new Node{100, nullptr, nullptr};
    temp = head;
    while(temp->data != 2){
        temp = temp->next;
    }
    insertMiddle->next = temp->next;
    insertMiddle->prev = temp;

    //have to set the node after temp's prev to the new inserting node
    temp->next->prev = insertMiddle;
    temp->next = insertMiddle;
    

    printList(head, tail);


    cout << "--------------------deletion at the beginning---------------------" <<endl;
    temp = head;

    head = head->next;
    head->prev = nullptr;

    delete temp;

    printList(head, tail);


    cout << "--------------------deletion at the end---------------------" <<endl;
    temp = tail;

    tail = tail->prev;
    tail->next = nullptr;

    delete temp;

    printList(head, tail);


    cout << "--------------------deletion at the middle---------------------" <<endl;
    temp = head;
    while(temp->data != 100){
        temp = temp->next;
    }

    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    delete temp;

    printList(head, tail);






    return 0;
}