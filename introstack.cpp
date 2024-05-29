#include<iostream>
using namespace std;

#define n 100
class stack{
int* arr;
int top;

public:
stack(){
arr=new int[n];
top=-1;
}

void push(int x){
    if(top==n-1){
        cout<<"stack overflow"<<endl;
        return; 

    }
    else{
        top++;
        arr[top]=x;
    }
    
}

void pop(){

    if (top==-1){
        cout<<"no element to pop"<<endl;
        return;
    }
    else{
        top--;
    }
}

int top(){
    
    if (top==-1){
        cout<<"no element to stack"<<endl;
        return -1;
    }
else{
    return arr[top];
}

}
bool empty(){
    return -1;
}


};

int main(){

stack st;
st.push(1);
st.push(2);
st.push(3);

cout<<st.top()<<endl;



    return 0;
}