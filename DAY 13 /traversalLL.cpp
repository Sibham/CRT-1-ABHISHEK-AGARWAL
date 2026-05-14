
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    
    Node(int new_data){
        this -> data = new_data;
        this -> next = nullptr;
    }
};

Node*head = NULL;
void traversal(){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main() {
    head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    
    traversal();

    return 0;
}
