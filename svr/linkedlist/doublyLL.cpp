#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArrToDoublyLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = prev->next; 
        
    }
    return head;
}

Node* deleteHead(Node* head){
    if(head== NULL || head->next == NULL ) return NULL;

    Node* prev = head;
    head = head->next;
    head->back = NULL;
    prev->next = NULL;

    delete prev;
}

Node* deleteTail(Node* head){
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* temp = tail;
    temp = tail->back;
    temp->next = NULL;
    tail->back = NULL;
    delete tail; 
}

Node* deleteKthElement(Node* head,int k){
    
    int count = 0;
    Node* temp = head;
    while(temp->next != NULL){
        count++;
        if(count == k) break;
        temp=temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev == NULL && front == NULL) {
        delete temp;
        return NULL;
    }
    else if(prev == NULL) deleteHead(head);
    else if(front == NULL) deleteTail(head);

    else{
        prev->next = front;
        front->back = prev;

        temp->next=NULL;
        temp->back=NULL;
        delete temp;

        return head;
    }
}

Node* insertBeforeHead(Node* head,int val){
    Node* newHead = new Node(val,head,NULL);
    head->back = newHead;
    return newHead;
}

Node* insertBeforeTail(Node* head,int val){
    if(head->next == NULL){
        return insertBeforeHead(head,val);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val,temp,prev);
    prev->next = newNode;
    temp->back = newNode;

    return head;

}

Node* insertBeforekthElement(Node* head, int k,int val){
    if(k == 1) return insertBeforeHead(head,val);

    int count = 0;
    Node* temp = head;
    while(temp->next != NULL){
        count++;
        if(count == k) break;
        temp=temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val,temp,prev);
    prev->next = newNode;
    temp->back = newNode;

    return head;
}

Node* reverseDLL(Node* head){
    if(head== NULL || head->next == NULL ) return head;

    Node* prev = NULL;
    Node* curr = head;
    while(curr!=NULL){
        prev = curr->back;
        curr->back=curr->next;
        curr->next= prev;
        curr=curr->back;
    }
    return prev->back;
}