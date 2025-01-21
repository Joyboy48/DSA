#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArrToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover =temp;
    }
    return head;
}

int lengthOfLL(Node* head){
    int count =0;
    Node* temp = head;
    while(temp){
       temp = temp->next;
        count++;
    }
    return count;
}

int searchInLinkedList(Node *head, int k) {
    // Write your code here.
    Node* temp = head;
    while(temp){
        if(temp->data == k) return 1;
        temp = temp->next;
    }
    return 0;
}




int main(){
    vector <int> arr = {1,2,3,4,5};

    Node* head = convertArrToLL(arr);
    cout<<head->data<<endl;

    //traverse
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    cout<<lengthOfLL(head)<<endl;



    // Node* y = new Node(arr[0],nullptr);
    // cout<<y<<endl; //address of Node
    // cout<<y->data<<endl;

}