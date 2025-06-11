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
        mover = temp;
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

Node* removeHead(Node* head){        
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL|| head->next == NULL) return head;
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;

    return head;

}

Node* deleteKth(Node* head,int k){
    if(head == NULL) return head;
    if(k == 1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    int count = 0;
    Node* temp = head;
    Node* prev =NULL;

    while(temp != NULL){
        count++;
        if(count == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp -> next; 
    }
    return head;
}


Node* deleteElement(Node* head,int element){
    if(head == NULL) return head;
    if(head->data == element){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node* temp = head;
    Node* prev =NULL;

    while(temp != NULL){
        if(temp->data == element){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp -> next; 
    }
    return head;
}

Node* insertHead(Node* head, int val){
    Node* temp = new Node(val,head);
}

Node* insertTail(Node* head,int val){
      if(head == NULL){
        return new Node(val);
      }
      Node* temp = head;
      while(temp->next != NULL){
        temp = temp->next;
      }
      Node* newNode = new Node(val);
      temp->next = newNode;

      return head;
}

Node* insertAtKth(Node* head,int k,int element){
    if(head == NULL) {
        if(k==1) return new Node(element);
    }else{
        return head;
    }

    if(k==1){
        Node *temp = new Node(element,head);
        return temp;
    }

    int count =0;
    Node *temp = head;
    while(temp!=NULL){
        count++;

        if(count == k-1){
            Node *newNode = new Node(element);
            newNode->next = temp->next;
            temp->next = newNode;
            return head;
            
        }
        temp = temp->next;
    }
    return head;
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