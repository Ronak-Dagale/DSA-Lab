//===================================================================================================================
// Name        :  DSA Assignment no :- 2
// Author      :  Ronak Sandeep Dagale
// Description :  program to implement a singly link list and perform operations such as insert,delete, display,
//                   search element from it and reverse the list
// Concept     :  Singly link list
//=====================================================================================================================
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  struct node *next;
};
class linklist
{

  node *head = NULL;
  node *temp = NULL;

public:
  void insertatbeg ();
  void insertatend ();
  void insertatpos ();
  void deleteatbeg ();
  void deleteatend ();
  void deleteatpos ();
  void display ();
  void reverse ();
};

int
main ()
{
  int ch;
  linklist l;
  do
    {
      cout <<
	"\n 1. Insert the data at begining \n 2. Insert the data at end \n 3. Insert the data at specific position \n 4. Delete the Data at begining \n 5. Delete the Data at end  \n 6. Delete the data from specific position \n 7. Display Data \n 8. Reverse the list  \n 9. Exit"
	<< endl;
      cout << "Enter Your Choice :-" << endl;
      cin >> ch;
      switch (ch)
	{
	case 1:
	  l.insertatbeg ();
	  break;

	case 2:
	  l.insertatend ();
	  break;

	case 3:
	  l.insertatpos ();
	  break;

	case 4:
	  l.deleteatbeg ();
	  break;

	case 5:
	  l.deleteatend ();
	  break;

	case 6:
	  l.deleteatpos ();
	  break;

	case 7:
	  l.display ();
	  break;

	case 8:
	  l.reverse ();
	  break;

	case 9:
	  cout << " Thank You \n";
	  break;

	default:
	  cout << "Invalid Choice " << endl;

	}
    }
  while (ch != 9);
}
void
linklist::insertatbeg ()
{
  struct node *newnode;
  newnode = new node;
  cout << "Enter Data to insert at begining:-" << endl;
  cin >> newnode->data;
  newnode->next = 0;
  if (head == 0)
    {
      newnode->next = 0;
      head = newnode;
      temp = newnode;
    }
  else
    {
      newnode->next = head;
      head = newnode;
    }
}

void
linklist::insertatend ()
{
  struct node *newnode;
  struct node *t;
  t = head;
  newnode = new node;
  cout << "Enter Data to insert at end:-" << endl;
  cin >> newnode->data;
  newnode->next = 0;
  if (head == 0)
    {
      newnode->next = 0;
      head = newnode;
      temp = newnode;
    }
  else
    {
      while (t->next != 0)
	{
	  t = t->next;
	}
      t->next = newnode;
    }

}

void
linklist::insertatpos ()
{
  struct node *newnode;
  int pos, p = 1, f = 0;
  struct node *t;
  t = head;
  cout << "Enter position after which you want to insert data :-" << endl;
  cin >> pos;

  while (t != 0)
    {
      if (p == pos)
	{
	  f = 1;
	  newnode = new node;
	  cout << " Enter Data :-" << endl;
	  cin >> newnode->data;
	  newnode->next = t->next;
	  t->next = newnode;
	  break;
	}
      else
	{
	  t = t->next;
	  p++;
	}
    }
  if (f == 0)
    cout << " Invalid Position " << endl;
}

void
linklist::display ()
{
  struct node *newnode;
  struct node *t;
  t = head;
  cout << "\n\t***********Display Data************\n" << endl;
  while (t != 0)
    {
      cout << t->data << endl;
      t = t->next;
    }
}

void
linklist::deleteatbeg ()
{
  struct node *t;
  t = head;
  head = head->next;
  delete (t);
}

void
linklist::deleteatend ()
{
  struct node *t, *pre;
  t = head;
  while (t->next != 0)
    {
      pre = t;
      t = t->next;
    }
  if (t == head)
    {
      head = 0;
      delete (t);
    }
  else
    {
      pre->next = 0;
      delete (t);
    }
}

void
linklist::deleteatpos ()
{
  struct node *t, *a;
  int pos, p = 1, f = 0;
  t = head;
  cout << "Enter position to delete an element :- " << endl;
  cin >> pos;
  while (t != 0)
    {
      if (p == pos - 1)
	{
	  f = 1;
	  a = t->next;
	  t->next = a->next;
	  //  delete(a);
	  break;
	}
      else
	{
	  t = t->next;
	  p++;
	}
    }
  if (f == 0)
    cout << " Invalid Position " << endl;
}

void
linklist::reverse ()
{
  struct node *temp, *current, *prev;
  temp = current = head->next;
  prev = head;
  head->next = 0;
  while (current != 0)
    {
      temp = current->next;
      current->next = prev;
      prev = current;
      head = current;
      current = temp;
    }
  cout << "List is Reversed" << endl;
}
