#include<iostream>
#include<queue>

using namespace std;


struct TNode
{
    int data;
    TNode *right, *left;
};
struct TNode *root=NULL;


struct TNode* createNode(int x)
{
  TNode *newnode=new TNode;
    if(!newnode)
    {
        cout<<"Memory Error";
    }
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
};
void insert(TNode *root, int x)
{    TNode *temp;
     TNode *newnode=createNode(x);

    if(root==NULL)
    {
        root=newnode;
    }
     queue<struct TNode*> q;
      q.push(root);

     while(!q.empty())
      {
          temp=q.front();

         if(!temp->left)
         {
              temp->left=newnode;
              break;
         }
         else
              q.push(temp->left);




     if(!temp->right)
     {
       temp->right=newnode;
       break;
     }
     else
         q.push(temp->right);




      }

}

void preorder(TNode *root)
{
    if(root)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }


}



int main()
{
    TNode *root=createNode(6);
        root->left=createNode(7);
        root->left->left=createNode(3);

        root->right=createNode(0);
        root->right->right=createNode(5);
/*    insert(root, 6);
    insert(root, 7);
    insert(root, 9);
    insert(root, 2);
    insert(root, 8);*/
    preorder(root);
  //  insert(root, 9);
    preorder(root);

    return 0;

}
