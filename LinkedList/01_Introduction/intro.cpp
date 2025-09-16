#include<iostream>
#include<vector>
using namespace std;
class Node{
    public: 
    int data; 
    Node* next; 
    public:
    // constructor
    Node (int data1, Node* next1){
        data=data1;  
        next=next1; 
    }
    Node (int data1){
        data=data1; 
        next=nullptr; 

    }
};
int main(){
    vector<int> arr={2,5,8,7};
    Node* y= new Node(arr[0]);
    cout<<y<<endl; // returns the memory value
    cout<<y->data<<endl; // returns the data stored at that memory point
    return 0;
}