#include<iostream>
using namespace std;

typedef struct Node{
    int data;
    struct Node* next;

    Node(int data1){
        data = data1;
    }
} Node;


void display(Node* node){
    Node* temp = node;
    while(temp!= nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}

Node* deleteNode(Node* node, int value){
    Node* prev = nullptr;
    Node* curr = node;
    if(curr!= nullptr && curr->data == value){
        Node* temp = curr->next;
        delete curr;
        return temp;
    }
    
    while(curr != nullptr){
        if(curr->data == value){
            prev->next = curr->next;
            delete curr;
            break;
        }

        prev = curr;
        curr = curr->next;
    }

    return node;
}

int length(Node* node){
    Node* temp = node;
    int count = 0;

    while(temp != nullptr){
        temp = temp->next;
        count++;
    }

    return count;
}

bool checkIfPresent(Node* node, int value){
    Node* temp = node;
    while(temp != nullptr){
        if(temp->data == value){
            return true;
        }
        temp = temp -> next;
    }

    return false;
}

void freeList(Node* node){
    Node* temp;
    while(node != nullptr){
        temp = node;
        node = node->next;
        delete temp;
    }
}

int main(){
    Node* node = new Node(1);
    node->next = new Node(2);
    node->next->next = new Node(3);
    node->next->next->next = new Node(4);

    cout<<"----Displaying the all nodes of linklist----"<<endl;
    display(node);
    node = deleteNode(node, 3);
    cout<<"----Displaying the all nodes of linklist after delete----"<<endl;
    display(node);
    cout<<"Length of the linkedList-"<<length(node)<<endl;
    cout<<checkIfPresent(node,4)<<endl;
    return 0;
}

