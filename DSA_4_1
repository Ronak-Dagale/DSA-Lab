#include <iostream>
using namespace std;

struct node
{
  int data;
  node *next;
};
class stac
{
  node *top=NULL;
  public:
  void push(int);
  void pop();
  void peek();
  void display();
};
int main() {
  stac s;
  int ch,x;
  cout<<"\n\n\t\t****** Welcome to Stack Program ******\n\n";
  do
  {
    cout<<"\n 1. Push Element to Stack\n 2. Pop element from Stack\n 3. Top element of stack\n 4. Display Stack\n 5. Exit"<<endl;
    cout<<"Enter your Choice :- "<<endl;
    cin>>ch;
    switch(ch)
      {
        case 1:
        cout<<"Enter element to Push it into Stack :- "<<endl;
        cin>>x;
        s.push(x);
        cout<<"\tElement inserted Succesfully"<<endl;
        break;

        case 2:
        s.pop();
        break;

        case 3:
        s.peek();
        break;

        case 4:
          cout<<"Stack Elements are :- "<<endl;
        s.display();
        break;

        case 5:
        cout<<"\t Thank You "<<endl;
        break;

        default:
        cout<<"Sorry Invalid Choice"<<endl;
      }
  }while(ch!=5);
}
void stac::push(int x)
{
  node *newnode=new node();
   newnode->data=x;
   newnode->next=NULL;
  if(top==NULL)
  {
    top=newnode;
  }
  else
   {
     newnode->next=top;
     top=newnode;
   }
}
void stac::pop()
{
  node *temp;
  temp=top;
  if(top==NULL)
    cout<<"Stack is empty (underflow condition) "<<endl;
  else
  {
  cout<<"Pop element is "<<temp->data<<endl;
    top=top->next;
    delete(temp);
  }
}
void stac::peek()
{
  if(top==NULL)
    cout<<"Stack is empty (underflow condition) "<<endl;
  else
  {
    cout<<"Top element of Stack is :- "<<top->data<<endl;
  }
}
void stac::display()
{
  node *temp;
  temp=top;
  if(top==NULL)
    cout<<"Stack is empty (underflow condition) "<<endl;
  else
  {
    while(temp!=NULL)
      {
        cout<<temp->data<<endl;
        temp=temp->next;
      }
  }
}
