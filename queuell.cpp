#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

node(int val){
    data=val;
    next=NULL;
}
};
class queue{
    node* front;
    node* back;

    public:
    queue(){
        front=NULL;
        back=NULL;
    }


Void push(int x){
    if(front==NULL){
        back=n;
        front=n;
    }
    else{
node* n=new node(x);
    back->next=n;
    back=n;
}
 }
    

Void pop(){
    if(front==NULL){
        cout<<"Queue underflow"<<endl;
        return
    }
    node* todelete=front;
    front=front->next;

    delete todelete;

}

int peek(){
     if(front==NULL){
        cout<<" no element in Queue "<<endl;
        return
    }
 else{
    return front->data;
 }
}

bool empty(){


 if(front==NULL){
              return true;
    }
else{
    return false;
}
}
};
int main(){

queue q;


    return 0;
}