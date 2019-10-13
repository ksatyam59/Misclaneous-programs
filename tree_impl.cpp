#include<iostream>

using namespace std;


struct BSTNode
{
    int data;
    BSTNode *left;
    BSTNode *right;
};


BSTNode* root=NULL;


BSTNode* createNode(int data)
{
    BSTNode *NewNode= new BSTNode;
    NewNode->data=data;
    NewNode->left=NULL;
    NewNode->right=NULL;
    return NewNode;
}


BSTNode* insert(BSTNode *root, int data)
{
    if(root==NULL)
    {
        root=createNode(data);
    }
    else if(root->data<data)
    {
        root->left=insert(root->left,data);
    }
    else root->right=insert(root->right,data);

    return root;
}

bool  search(BSTNode *root, int data)
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->data==data)
    {
        return true;
    }
    else if(root->data<data)
    {
        search(root->left,data);

    }
    else search (root->right, data);

}

int main()
{
    BSTNode* root=NULL;

   root=insert(root,6);
   root=insert(root,7);
    root=insert(root,8);
    root=insert(root,9);
    root=insert(root,10);
    if(search(root,9))
    {
        cout<<"FOUND..."<<endl;
    }
    else
        cout<<"NOT FOUND...";
    return 0;

}
