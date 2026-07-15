#include <iostream>

using namespace std;

struct Node{
    string name;
    Node* next;
};

int main(){

    //first part creates a pointer, which then points to the actual node
    Node* first = new Node{"Fionna", nullptr};
    Node* second = new Node{"Lip", nullptr};
    Node* third = new Node{"Ian", nullptr};
    Node* fourth = new Node{"Debbie", nullptr};
    Node* fifth = new Node{"Carl", nullptr};
    Node* sixth = new Node{"Liam", nullptr};

    //declare head
    Node* head = first;

    //linking nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    // Traversal
    cout <<endl << "Traversal: " << endl;

    Node* current = head;
    while(current != nullptr){
        cout << current->name << " -> ";
        current = current->next;
    }
    cout << "end of linked list" << endl << endl;

    

    // Traversal with skips
    cout << "Skipping the annoying bitches: " << endl;

    current = head;

    while(current != nullptr){
        if(current->name == "Fionna" || current->name == "Ian" || current->name == "Debbie"){
            current = current->next;
            continue; // needed incase of needing to delete two nodes right after eachother. If I dont add this, the next line will print because the if statement can check again.
        }
        cout << current->name << " -> ";
        current = current->next;
    }

    cout << "end of linked list" <<endl;
    
    cout << "Skipped Bitches: Drunk Fionna, Gay Ian, Strong Independent Woman Debbie" <<endl <<endl;


    //Deletion
    cout << "Deleting the most annoying bitch (Debbie)"<<endl;

    current = head;
    Node* prev = nullptr;

    //deleting Debbie
    while(current != nullptr && current->name != "Debbie"){
        prev = current;
        current = current->next;
    }

    if(current != nullptr){
        prev->next = current->next;
        delete current;
    }

    //traversing linked list again, this time without debbie cause she was deleted
    current = head;
    while(current != nullptr){
        cout << current->name << " -> ";
        current = current->next;
    }
    cout << "end of linked list" << endl << endl;


    //deleting linked list because I am done with it now
    current = head;
    while(current != nullptr){
        Node* next = current->next;
        delete current;
        current = next;
    }

    head = nullptr;
    cout<<"linked list deleted" <<endl;

}
