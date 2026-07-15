#include <iostream>
#include <string>

using namespace std;


    
// Node structure
struct Node{
    int data;
    Node* next;
};

int main(){

    // Node declarations
    Node* first = new Node {1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3,nullptr};

    // linking nodes
    first->next = second;
    second->next = third;
    third->next = nullptr;

    // Declaring head
    Node* head = first;

    // traversal to output each node
    Node* current = head;
    while(current != nullptr){
        cout << current->data << "->";
        current = current->next;
    }
    cout << " end of linked list";

}