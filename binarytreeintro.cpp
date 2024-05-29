#include"bits/stdc++.h"

using namespace std;


    struct Node
    {
        int data;
        struct Node* left;
        struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }
    };
    
void preorder(struct Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);


}
void inorder(struct Node* root){
    
    if(root==NULL){
     return;   
    }
        inorder(root->left);

    cout<<root->data<<" ";
    inorder(root->right);

}
void postorder(struct Node* root){
    
    if (root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}
int Search(int preorder[],int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
Node* buildTree(int preorder[],int inorder[],int start,int end){
    
    static int idx=0;
    int curr=preorder[idx];
    idx++;
    Node* node=new Node(curr);
    if(start==end){
        return node;
    }
    int pos=Search(inorder,start,end,curr);
    node->left=buildTree(preorder,inorder,start,pos-1);
    node->right=buildTree(preorder,inorder,pos+1,end);
    return Node;
}
inorderPrint(root->left);
cout<< root->data<<" ";
inorderPrint(root->right);

int main(){

//     struct Node* root=new Node(1);
//     root->left=new Node(2);
//     root->right= new Node(3);
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
// root->right->left=new Node(6);
// root->right->right=new Node(7);
// // preorder(root);
// // inorder(root);
// postorder(root);


int preorder[]={1,2,4,3,5};
int inorder[]={4,2,1,5,3};




    return 0;
}

/*

             1
            / \
           2   3
          / \
         4   6  



*/