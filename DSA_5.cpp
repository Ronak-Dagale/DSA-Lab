//============================================================================
// Name        :  DSA Assignment no :- 5
// Author      :  Ronak Sandeep Dagale
// Description :  Implementation of Threaded Binary Tree             
//============================================================================
#include <iostream>

using namespace std;
struct node
{
    int data;
    node *left,*right;
    int lbit,rbit;
};
class DoublethreadedTree
{
    public:
     node *root=NULL;
     node *head=new node();
     
   void create()
   {
     cout<<"\nTo create a tree please enter the Element"<<endl;
       node *temp=new node();
       cin>>temp->data;
       temp->left=NULL;
       temp->right=NULL;
       temp->lbit=0;
       temp->lbit=0;
       
       if(root==NULL)
       {
           root=temp;
           head->data=999;
           head->left=root;
           head->right=head;
           head->lbit=1;
           head->rbit=1;
           root->left=head;
           root->right=head;
           
       }
           int ch;
           do
           {
           cout<<"Do you Want to insert more node (0.No) :-"<<endl;
           cin>>ch;
        if(ch!=0){
           node *temp=new node();
          cout<<"Enter the data :- "<<endl;
       cin>>temp->data;
       temp->left=NULL;
       temp->right=NULL;
       temp->lbit=0;
       temp->lbit=0;
       insert(root, temp);
          }
           }while(ch!=0);   
   }
   
   void insert(node *root,node *temp)
   {
         if(temp->data<root->data)
       {
         if(root->left==NULL || root->lbit==0)
           {
               temp->left=root->left;
               root->left=temp;
               temp->right=root;
               root->lbit=1;
           }
           else
           {
               insert(root->left,temp);
           }
       }
       if(temp->data>root->data)
       {
           if(root->right==NULL || root->rbit==0)
           {
               temp->right=root->right;
               root->right=temp;
               temp->left=root;
               root->rbit=1;
           }
           else
           {
               insert(root->right,temp);
           }
       }
       }
       
    void inorder()
    {
        node *t=head->left;
        do{
            while(t->lbit!=0)
            {
                t=t->left;
            }
         cout<<t->data<<" ";
         while(t->rbit==0)
         {
             t=t->right;
             if(t==head)
              return;
             cout<<t->data<<" ";
         }
         t=t->right;
        }while(t!=head);
        }
    };
   
    


int main()
{
  cout<<"\n\t Welcome to Threaded Binary tree traversal "<<endl;
    DoublethreadedTree t;
    t.create();
   cout<<"\n\t ------------- Inorder --------------"<<endl;
    t.inorder();

    return 0;
}
