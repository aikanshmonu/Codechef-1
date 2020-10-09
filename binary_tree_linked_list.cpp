#include<iostream>
using namespace std;
struct tree
{
    int data;
    tree *left;
    tree *right;
};
tree *root=NULL;
int isempty()
{
    return(root==NULL);
}
void insert()
{
    int item;
    cout<<"Enter the value"<<endl;
    cin>>item;
    tree *parent;
    tree *p=new tree;
    p->data=item;
    p->left=NULL;
    p->right=NULL;
    parent=NULL;
    if(isempty())
    {
        root=p;
    }
    else
    {
        tree *temp;
        temp=root;
        while(temp!=NULL)
        {
            parent=temp;
            if(item<temp->data)
            {
                temp=temp->left;
            }
            else
            {
                temp=temp->right;
            }
        }
        if(item<parent->data)
        {
            parent->left=p;
        }
        else
        {
            parent->right=p;
        }
    }
}
void inorder_sequence(tree *temp)
{
    if(temp!=NULL)
    {
        inorder_sequence(temp->left);
        cout<<temp->data<<" ";
        inorder_sequence(temp->right);
    }
}
void preorder_sequence(tree *temp)
{
   if(temp!=NULL)
    {
        cout<<temp->data<<" ";
        preorder_sequence(temp->left);
        preorder_sequence(temp->right);
    }
}
void postorder_sequence(tree *temp)
{
   if(temp!=NULL)
    {
        postorder_sequence(temp->left);
        postorder_sequence(temp->right);
        cout<<temp->data<<" ";
    }
}
int main()
{
    insert();
    int x=0;
    while(x!=6)
    {
        cout<<"Enter 1 to insert an element"<<endl;
        cout<<"Enter 2 to check tree is empty or not"<<endl;
        cout<<"Enter 3 to display in INORDER SEQUENCE"<<endl;
        cout<<"Enter 4 to display in PREORDER SEQUENCE"<<endl;
        cout<<"Enter 5 to display in POSTORDER SEQUENCE"<<endl;
        cout<<"Enter 6 to EXIT"<<endl;
        cin>>x;
        int a;
        switch (x)
        {
            case 1:
                  insert();
                  break;
            case 2:
                  a=isempty();
                  if(a==1)
                  {
                      cout<<"EMPTY"<<endl;
                  }
                  else
                  {
                      cout<<"NOT EMPTY"<<endl;
                  }
                  break;
            case 3:
                  cout<<"Elements are:"<<endl;
                  inorder_sequence(root);
                  cout<<endl;
                  break;
            case 4:
                  cout<<"Elements are:"<<endl;
                  preorder_sequence(root);
                  cout<<endl;
                  break;
            case 5:
                  cout<<"Elements are:"<<endl;
                  postorder_sequence(root);
                  cout<<endl;
                  break;
            case 6:
                  break;
            default:
                  break;
        }
    }
}
