/*Traversal of a node */
/*
#include<iostream>
using namespace std; 
class Node{
    public:
    int data; 
    Node *next; 
    Node(int data){
        this->data = data; 
        this->next = nullptr; 
    }
}; 
void traverseList(Node *n1){
    while(n1 != NULL){
        cout<<n1->data; 
        if(n1->next!=NULL){
            cout<<"->"; 
        }
         n1 = n1->next; 
    }
    cout<<endl; 
}
int main(){
    Node *n1 = new Node(10); 
    n1->next = new Node(20); 
    n1->next->next = new Node(30); 
    n1->next->next->next = new Node(40); 
    traverseList(n1); 
    return 0; 
}
Insertion at beginning*/
/*
#include<iostream> 
using namespace std; 
class Node{
    public:
    int data; 
    Node *next; 
    Node(int x){
        this->data = x; 
        this->next = nullptr; 
    }
}; 
Node *insertatbeginning(Node *head, int x){
    Node *newNode = new Node(x); 
    newNode->next = head; 
    return newNode; 
}
void printlist(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->data; 
        if(curr->next != NULL){
            cout<<"->"; 
        }
        curr = curr->next; 
    }
    cout<<endl; 
}
int main(){
    Node *head = new Node(2); 
    head->next = new Node(3); 
    head->next->next = new Node(4); 
    head->next->next->next = new Node(5); 
    int x = 1; 
    head = insertatbeginning(head,x); 
    printlist(head); 
    return 0; 
}
    */ 
   /*
#include<iostream> 
using namespace std; 
class Node{
    public:
    int data; 
    Node *next; 
    Node(int x){
        data = x; 
        next = NULL; 
    }
}; 
Node *insertatend(Node*head, int x){
    Node *newNode = new Node(x); 
    if(head == NULL){
        return newNode; 
    }
    Node*last = head; 
    while(last->next!=NULL){
        last = last->next; 
    }
    last->next=newNode; 
    return head; 
}
void printlist(Node*node){
    while(node!=NULL){
    cout<<node->data;
    if(node->next!=NULL){
    cout<<"->";
}
    node = node->next;
}
cout<<endl; 
}
int main(){
    Node*head = new Node(1); 
    head->next = new Node(2); 
    head->next->next = new Node(3); 
    head->next->next->next = new Node(4); 
    head->next->next->next->next = new Node(5); 
    head = insertatend(head, 6); 
    printlist(head); 
    return 0; 
}
    */ 
/*
#include<iostream>
using namespace std; 
class Node{
    public: 
    int data; 
    Node *next; 
    Node(int x){
        data = x; 
        next = NULL; 
    }
}; 
Node *insertatpos(Node *head, int pos, int x){
    if(pos<1){
        return head; 
    }
    if(pos==1){
        Node *newNode = new Node(x); 
        newNode->next = head; 
        return newNode; 
    }
    Node *curr = head; 
    for(int i=1; i<pos-1 && curr!=nullptr; i++){
        curr = curr->next; 
    }
    if(curr==nullptr){
        return head; 
    }
    Node *newNode = new Node(x); 
    newNode->next = curr->next; 
    curr->next = newNode; 
    return head; 
}
void printlist(Node *head){
    Node *curr = head; 
    while(curr != nullptr){
        cout<<curr->data; 
    if(curr->next!=nullptr){
        cout<<"->"; 
    }
    curr = curr->next; 
}
}
int main(){
    Node *head = new Node(1); 
    head->next = new Node(2); 
    head->next->next = new Node(4); 
    head->next->next->next = new Node(5); 
    head = insertatpos(head, 3, 3); 
    printlist(head); 
    return 0; 
}
*/ 
/*
#include<iostream> 
using namespace std; 
class Node{
    public:
    int data; 
    Node *next; 
    Node(int x){
        data = x; 
        next = nullptr; 
    }
}; 
Node *deleteHead(Node *head){
    if(head == nullptr){
        return nullptr; 
    }
    Node *temp = head; 
    head = head->next; 
    delete temp; 
    return head; 
}
void printlist(Node*curr){
    while(curr != nullptr){
        cout<<curr->data; 
        if(curr->next != nullptr){
            cout<<"->"; 
        }
        curr = curr->next; 
    }
}
int main(){
    Node *head = new Node(2); 
    head -> next = new Node(3); 
    head->next->next = new Node(4); 
    head->next->next->next = new Node(5); 
    head = deleteHead(head); 
    printlist(head); 
    return 0; 
}
*/ 
/*
#include<iostream> 
using namespace std; 
class Node{
    public: 
    int data; 
    Node *next; 
    Node(int x){
        data = x; 
        next = nullptr; 
    }
}; 
Node *deleteEnd(Node *head){
    if(head == nullptr){
        return nullptr; 
    }
    if(head->next == nullptr){
        delete head; 
        return nullptr; 
    }
    Node *secondlast = head; 
    while(secondlast->next->next != nullptr){
        secondlast = secondlast->next; 
    }
    delete secondlast->next; 
    secondlast -> next = nullptr; 
    return head; 
}
void printlist(Node*curr){
    while(curr != nullptr){
        cout<<curr->data; 
        if(curr->next != nullptr){
            cout<<"->"; 
        }
        curr = curr->next; 
    }
}
int main(){
    Node *head = new Node(2); 
    head->next = new Node(3); 
    head->next->next = new Node(4); 
    head->next->next->next = new Node(5); 
    head = deleteEnd(head); 
    printlist(head); 
    return 0; 
}
    */ 
/*
#include<iostream> 
using namespace std; 
class Node{
    public:
    int data; 
    Node *next; 
    Node(int x){
        this->data = x; 
        this->next = nullptr; 
    }
}; 
Node *deletenode(Node*head, int pos){
    Node *temp = head;  
    if(pos == 1){
        head = temp->next; 
        delete temp; 
        return head; 
    }
    Node *prev = nullptr; 
    for(int i=1; i<pos; i++){
        prev = temp; 
        temp = temp->next; 
    }
    prev->next = temp->next; 
    delete temp; 
    return head; 
}
void printlist(Node *curr){
    while(curr != nullptr){
        cout<<curr->data; 
        if(curr->next != nullptr){
            cout<<"->"; 
        }
        curr = curr->next; 
    }
}
int main(){
    Node *head = new Node(1); 
    head->next = new Node(2); 
    head->next->next = new Node(3); 
    head->next->next->next = new Node(4); 
    head->next->next->next->next = new Node(5); 
    head = deletenode(head, 3); 
    printlist(head); 
    return 0; 
}
*/ 
/*Search an element in a linked list*/
/*
#include<iostream>
using namespace std; 
class Node{
    public: 
    int data; 
    Node *next; 
    Node(int x){
        data = x; 
        next = nullptr; 
    }
}; 
bool searchKey(Node *head, int key){
    Node *curr = head; 
    while(curr != NULL){
        if(curr->data == key){
            return true; 
        }
        curr = curr->next; 
        return false; 
    }
}
int main(){
    Node *head = new Node(1); 
    head->next = new Node(2); 
    head->next->next = new Node(3); 
    head->next->next->next = new Node(4); 
    int key = 5; 
    if(searchKey(head,key)){
        cout<<"True"; 
    }
    else{
        cout<<"False"; 
    }
    return 0; 
}
    */ 
   /*
#include<iostream> 
using namespace std; 
class Node{
    public:
    int data; 
    Node *next; 
    Node(int new_data){
        data = new_data; 
        next = nullptr; 
    }
}; 
Node *reverseList(Node *head){
    Node *curr = head; 
    Node *prev = nullptr, *next; 
    while(curr != nullptr){
        next = curr->next; 
        curr->next = prev; 
        prev = curr; 
        curr = next; 
    }
    return prev; 
}
void printlist(Node*node){
    while(node != nullptr){
        cout<<node->data; 
        if(node->next != nullptr){
            cout<<"->"; 
        }
        node = node->next; 
    }
}
int main(){
    Node *head = new Node(1); 
    head->next = new Node(2); 
    head->next->next = new Node(3); 
    head->next->next->next = new Node(4); 
    head->next->next->next->next = new Node(5); 
    head = reverseList(head); 
    printlist(head); 
    return 0; 
}
    */ 
/*Doubly linked lists*/
/*
#include<iostream> 
using namespace std; 
class Node{
    public:
    int data; 
    Node *prev; 
    Node *next; 
    Node(int value){
        data = value; 
        prev = nullptr; 
        next = nullptr; 
    }
}; 
int main(){
    Node *head = new Node(10); 
    head->next = new Node(20); 
    head->next->prev = head; 

    head->next->next = new Node(30); 
    head->next->next->prev = head->next; 

    head->next->next->next = new Node(40); 
    head->next->next->next->prev = head->next->next; 

    Node *temp = head; 
    while(temp != nullptr){
        cout<<temp->data; 
        if(temp->next != nullptr){
            cout<<"<->"; 
        }
        temp = temp->next; 
    }
    return 0; 
}
*/ 
/*
#include<iostream> 
using namespace std; 
struct Node{
    int data; 
    Node *next; 
    Node *prev; 
    Node(int val){
        data = val; 
        next = nullptr; 
        prev = nullptr; 
    }
}; 
void forwardtraversal(Node *head){
    Node *curr = head ;
    while(curr != nullptr){
        cout<<curr->data<<" "; 
        curr = curr->next; 
    }
    cout<<endl; 
}
int main(){
    Node *head = new Node(1); 
    Node *second = new Node(2); 
    Node *third = new Node(3); 
    head->next = second; 
    second->prev = head; 
    second->next = third; 
    third->prev = second; 
    cout<<"Forward Traversal:";
    forwardtraversal(head); 
    return 0; 
}
*/
/*Recursive approach 
 void backwardTraversal(Node* node) {
    if (node == nullptr) return;

    // Print current node's data
    cout << node->data << " ";
  
  	// Recursive call with the previous node
    backwardTraversal(node->prev);
}
    */ 
/*Insertion at the front of node */
/*
#include<iostream> 
using namespace std; 
class Node{
    public:
    int data; 
    Node *next; 
    Node *prev; 
    Node(int new_data){
        data = new_data; 
        next = prev = nullptr; 
    }
}; 
Node *insertatfront(Node*head, int new_data){
    Node *new_node = new Node(new_data); 
    new_node ->next = head; 
    if(head != nullptr){
        head->prev = new_node; 
    }
    return new_node; 
}
void printlist(Node *head){
    Node *curr = head; 
    while(curr != nullptr){
        cout<<curr->data; 
        if(curr->next != nullptr){
            cout<<"<->"; 
        }
        curr = curr->next; 
    }
    cout<<endl; 
}
int main(){
    Node *head = new Node(2); 
    head->next = new Node(3); 
    head->next->prev = head; 
    head->next->next = new Node(4); 
    head->next->next->prev = head->next; 

    int data = 1; 
    head = insertatfront(head, data); 
    printlist(head); 
    return 0; 
}
    */ 
/*Inseertion at the end*/
/*
#include<iostream> 
using namespace std; 
class Node{
    public: 
    int data; 
    Node *next; 
    Node *prev; 
    Node(int new_data){
        data = new_data; 
        next = nullptr; 
        prev = nullptr; 
    }
}; 
Node *insertatend(Node *head, int new_data){
    Node *new_node = new Node(new_data); 
    if(head == nullptr){
        head = new_node; 
    }
    else{
        Node *curr = head; 
        while(curr->next != nullptr){
            curr = curr->next; 
        }
        curr->next = new_node;
        new_node->prev = curr; 
    }
    return head; 
}
void printlist(Node*head){
    Node *curr = head; 
    while(curr!=nullptr){
        cout<<curr->data; 
        if(curr->next != nullptr){
            cout<<"<->"; 
        }
        curr = curr->next; 
    }
    cout<<endl; 
}
int main(){
    Node *head = new Node(1); 
    head->next = new Node(2); 
    head->next->prev = head; 
    head->next->next = new Node(3); 
    head->next->next->prev = head->next; 
    int data = 4; 
    head = insertatend(head,data); 
    printlist(head); 
    return 0; 
}
    */ 
/*
#include<iostream> 
using namespace std; 
class Node{
    public:
    int data; 
    Node *next; 
    Node *prev; 
    Node(int new_data){
        data = new_data; 
        next = nullptr; 
        prev = nullptr; 
    }
}; 
Node *insertatpos(Node *head, int pos, int new_data){
    Node *new_node = new Node(new_data); 
    if(pos ==1){
        new_node->next = head; 
        if(head != NULL){
            head->prev = new_node; 
        }
        head = new_node; 
        return head; 
    }

Node *curr = head; 
for(int i=1; i<pos-1 && curr!= NULL; i++){
    curr = curr->next; 
}
if(cur ++ NULL){
    delete new_node; 
    return head; 
}
new_node->prev = curr; 
new_node->next = curr->next; 
curr->next = new_node; 
if(new_node->next != NULL){
    new_node->next->prev = new_node; 
}
return head; 
} 
void printlist(Node *head){
    Node *curr = head; 
    while(curr != NULL){
        cout<<curr->data; 
        if(curr->next != NULL){
            cout<<"<->"; 
        }
        curr = curr->next; 
    }
    cout<<endl; 
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(4);
    head->next->next->prev = head->next;

    int data = 3;
    int pos = 3;
    head = insertAtPos(head, pos, data);

    printList(head);

    return 0;
}
    */ 
/*Deletion at the beginning in a new node */
/*deletion from the beginning*/
/*
#include<bits/stdc++.h> 
using namespace std; 
struct Node{
    public: 
    int data; 
    Node *next; 
    Node *prev; 
    Node(int new_data){
        data = new_data; 
        next = NULL;
        prev = NULL; 
    }
}; 
Node* delhead(Node* head){
    if(head == nullptr){
        return nullptr; 
    }
    Node *temp = head; 
    head = head->next; 
    if(head != nullptr){
        head->prev = nullptr; 
    }
    delete temp; 
    return head; 
}
void printlist(Node *head){
    for(Node *curr = head; curr !- nullptr; curr= curr->next){
        cout<<curr->data<<" "; 
    }
    cout<<endl; 
}
int main(){
    struct Node *head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    printf("Original Linked List: ");
    printList(head);

    printf("After Deletion at the beginning: ");
    head = delHead(head);

    printList(head);

    return 0;
}
    */ 
/*Deleteion from the end */
/*
#include<bits/stdc++.h>
using namespace std; 
struct Node{
    int data; 
    Node *next; 
    Node *prev; 
    Node(int d){
        data = d; 
        prev = NULL; 
        next = NULL; 
    }
}; 
Node *dellast(Node *head){
    if(head ==NULL){
        return NULL; 
    }
    if(head->next == NULL){
        delete head; 
        return NULL; 
    }
    Node *curr = head; 
    while(curr->next != NULL){
        curr = curr->next; 
    }
    curr->prev->next = NULL; 
    delete curr; 
    return head; 
}
void printlist(Node *head){
    Node *curr = head; 
    while(curr != NULL){
        cout<<curr->data<<" "; 
        curr = curr->next; 
    }
    cout<<endl; 
}
int main(){
    struct Node *head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    printf("Original Linked List: ");
    printList(head);

    printf("After Deletion at the end: ");
    head = delLast(head);

    printList(head);

    return 0;
}
    */ 
/*deletion from a specific point */
/*
#include<bits/stdc++.h>
using namespace std; 
struct Node{
    int data; 
    Node *next; 
    Node *prev; 
    Node(int new_data){
        data = new_data; 
        next = NULL; 
        prev = NULL; 
    }
}; 
Node *deletepos(Node *head, int pos){
    if(head ==NULL){
        return head; 
    }
    Node *curr = head; 
    for(int i=1; curr != NULL && i<pos; i++){
        curr = curr->next; 
    }
    if(curr == NULL){
        return head; 
    }
    if(curr->prev != NULL){
        curr->prev->next = curr->next; 
    }
    if(curr->next != NULL){
        curr->next->prev = curr->prev; 
    }
    if(head == curr){
        head = curr->next; 
    }
    delete curr; 
    return head; 
}
void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data;
        if (curr->next != nullptr) {
            cout << " <-> ";
        }
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    head = delPos(head, 2);

    printList(head);

    return 0;
}
    */ 
/*Circular Linked Lists*/
/*declaring a node of a circularly linked list*/
/*
class Node{
    public:
    int data; 
    Node *next; 
    Node(int value){
        data = value; 
        next = nullptr; 
    }
}; 
*/ 
/*Insertion at the beginning*/
/*
#include<iostream> 
using namespace std; 
class Node{
    public: 
    int data; 
    Node *next; 
    Node(int x){
        data = x; 
        next = nullptr; 
    }
}; 
Node *insertatfront(Node *last, int key){
    Node *newNode = new Node(key); 
    if(last == nullptr){
        newNode->next = newNode; 
        return newNode;  
    }
    newNode->next = last->next; 
    last->next = newNode; 
    return last; 
}
void printlist(Node *last){
    if (last == nullptr)
        return;

    Node* head = last->next;
    Node* temp = head;

    while (temp->next != head) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << temp->data << endl;
}
int main(){
    Node *first = new Node(2); 
    first->next = new Node(3); 
    first->next->next = new Node (4); 

    Node*last = first->next->next; 
    last->next = first; 

    last = insertatfront(last, 5); 
    printlist(last); 
    return 0; 
}
    */ 
/*Insertion at end */
/*
#include<iostream> 
using namespace std; 
class Node{
    public: 
    int data; 
    Node *next; 
    Node(int x){
        data = x; 
        next = NULL; 
    }
}; 
Node *insertatend(Node *tail, int x){
    Node *new_node = new Node(x); 
    if(tail == nullptr){
        tail = new_node; 
        new_node->next = new_node; 
    }
    else{
        new_node->next = tail->next; 
        tail->next = new_node; 
        tail = new_node; 
    }
    return tail; 
}
void printlist(Node *last){
    if(last == nullptr){
        return; 
    }
    Node *head = last->next; 
    while(true){
        cout<<head->data<<" "; 
        head = head->next; 
        if(head == last->next){
            break; 
        }
    }
    cout<<endl; 
}
int main(){
    Node *first = new Node(2); 
    first->next = new Node(3); 
    first->next->next = new Node(4); 

    Node*last = first->next->next; 
    last->next = first; 

    cout<<"Original List:"; 
    printlist(last); 

    last = insertatend(last,5); 
    last = insertatend(last,6); 

    cout<<"List after inserting 5 and 6: "; 
    printlist(last); 

    return 0; 
}
    */ 
/*Insertion at a specific position*/
/*
#include<bits/stdc++.h> 
using namespace std; 
struct Node{
    int data; 
    Node *next; 
    Node(int value){
        data = value; 
        next = nullptr; 
    }
}; 
Node *insertatpos(Node *last, int data, int pos){
    if(last == nullptr){
        if(pos != 1){
            cout<<"Invalid Position!"<<endl; 
            return last; 
        }
        Node *new_node = new Node(data); 
        last = new_node; 
        last->next = last; 
        return last; 
    }
    Node *new_node = new Node(data);
    Node *curr = last->next; 
    if(pos == 1){
        new_node->next = curr; 
        last->next = new_node; 
        return last; 
    }
     for (int i = 1; i < pos - 1; ++i) {
        curr = curr->next;
        if (curr == last->next){
            cout << "Invalid position!" << endl;
            return last;
        }
    }
    new_node->next = curr->next;
    curr->next = new_node;
    if (curr == last) last = new_node;
    return last;
}
void printlist(Node *last){
    if(last == nullptr){
        return; 
    }
    Node *head = last->next; 
    while(true){
        cout<<head->data<<" "; 
        head = head->next; 
        if(head == last->next){
            break; 
        }
    }
    cout<<endl; 
}
int main(){
    Node *first = new Node(2);
    first->next = new Node(3);
    first->next->next = new Node(4);

    Node *last = first->next->next;
    last->next = first;

    cout << "Original list: ";
    printlist(last);

    int data = 5, pos = 2;
    last = insertatpos(last, data, pos);
    cout << "List after insertions: ";
    printlist(last);

    return 0;
}
    */ 
#include<iostream> 
using namespace std; 
class Node{
    public: 
    int data; 
    Node *next; 
    Node(int x){
        data = x; 
        next = nullptr; 
    }
}; 
int countNodes(Node *head){
    int count = 0; 
    while(head != nullptr){
        count++; 
        head = head->next; 
    }
    return count; 
}
Node *findintersect(Node *head1, Node *head2){
    int len1 = countNodes(head1); 
    int len2 = countNodes(head2); 

    if(len1 != len2){
        return nullptr; 
    }
    Node *curr1 = head1; 
    Node *curr2 = head2; 

    while(curr1 != nullptr && curr2 != nullptr){
        if(curr1 == curr2){
            return curr1; 
        }
        curr1 = curr1->next; 
        curr2 = curr2->next; 
    }
    return nullptr; 
}
void printlist(Node *head){
    while(head !- nullptr){
        cout<< head->data; 
        if(head->next != nullptr){
            cout<<"->"; 
        }
        head = head->next; 
    }
    cout<<endl; 
}
int main(){

    Node *common = new Node(3); 
    common->next = new Node(4);
    common->next->next = new Node(5);

    Node* head1 = new Node(2);
    head1->next = common;

    Node* head2 = new Node(6);
    head2->next = new Node(7);
    head2->next->next = common;

    cout << "List 1: ";
    printList(head1);

    cout << "List 2: ";
    printList(head2);

    // Find intersection
    Node* intersection = findIntersection(head1, head2);

    if (intersection != nullptr) {
        cout << "Intersection occurs at node "
             << intersection->data << endl;
    }
    else {
        cout << "No intersection" << endl;
    }

    return 0;
}
 