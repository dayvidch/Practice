#include <iostream>

using namespace std;

struct singleNode{
        int data;
        singleNode* next;
};

void printList(singleNode* head){

    singleNode* current = head;
    do{
        cout << current->data << " -> ";
        current = current->next;
    } while(current != head);
    cout << "end of linked list" <<endl<<endl;
        
}

int main(){

    singleNode* first = new singleNode{1, nullptr};
    singleNode* second = new singleNode{2, nullptr};
    singleNode* third = new singleNode{3, nullptr};

    first->next = second;
    second->next = third;
    third->next = first;

    singleNode* head = first;
    singleNode* temp = head;

    cout << "--------------------traversal---------------------" <<endl;

    do{
        cout << temp->data << " -> ";
        temp = temp->next;
    } while(temp != head);
    cout << "end of linked list" <<endl;


    cout << "--------------------insertion at the beginning---------------------" <<endl;
    singleNode* insertBeginning = new singleNode{0, nullptr};
    insertBeginning->next = head;

    temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = insertBeginning;
    head = insertBeginning;
    
    printList(head);


    cout << "--------------------insertion at the end---------------------" <<endl;
    singleNode* insertEnd = new singleNode{4, nullptr};
    temp = head;

    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = insertEnd;
    insertEnd->next = head;

    printList(head);


    cout << "--------------------deletion at the front---------------------" <<endl;
    temp = head;







    return 0;
}