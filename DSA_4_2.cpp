#include <iostream>
using namespace std;

struct node
{
  int data;
  node *next;
};
class queue
{
  node *front=NULL;
  node *rear=NULL;

  public:
  void enqueue(int);
  void dequeue();
  void peek();
  void display();
};

void queue::enqueue(int x)
{
  node *newnode=new node();
   newnode->data=x;
   newnode->next=NULL;
  if(front==NULL && rear==NULL)
  {
    front=rear=newnode;
  }
  else
   {
     rear->next=newnode;
      rear=newnode;
   }
}
void queue::dequeue()
{
  node *temp;
  temp=front;
  if(front==NULL && rear==NULL)
    cout<<"Queue is empty (underflow condition) "<<endl;
  else
  {
  cout<<"Dequeue element is "<<temp->data<<endl;
    front=front->next;
    delete(temp);
  }
}
void queue::peek()
{
  if(front==NULL && rear==NULL)
    cout<<"Queue is empty (underflow condition) "<<endl;
  else
  {
    cout<<"Top element of Queue is :- "<<front->data<<endl;
  }
}
void queue::display()
{
  node *temp;
  temp=front;
  if(front==NULL && rear==NULL)
    cout<<"Queue is empty (underflow condition) "<<endl;
  else
  {
    while(temp!=NULL)
      {
        cout<<temp->data<<endl;
        temp=temp->next;
      }
  }
}
int main() {
  queue s;
  int ch,x;
  cout<<"\n\n\t\t****** Welcome to Queue Program ******\n\n";
  do
  {
    cout<<"\n 1. Insert Element into Queue\n 2. Delete element from Queue\n 3. Top element of Queue\n 4. Display Queue\n 5. Exit"<<endl;
    cout<<"Enter your Choice :- "<<endl;
    cin>>ch;
    switch(ch)
      {
        case 1:
        cout<<"Enter element to Push it into Queue :- "<<endl;
        cin>>x;
        s.enqueue(x);
        cout<<"\tElement inserted Succesfully"<<endl;
        break;

        case 2:
        s.dequeue();
        break;

        case 3:
        s.peek();
        break;

        case 4:
          cout<<"Queue Elements are :- "<<endl;
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
