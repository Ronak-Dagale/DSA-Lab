//============================================================================
// Name        :  DSA Assignment no :- 1
// Author      :  Ronak Sandeep Dagale
// Description :  Consider an employee database of N employees. Make use of a hash table implementation 
//                to quickly look up the employee‟s id number
// Concept     :  Use of Hashing Concept
//============================================================================
#include <iostream>
using namespace std;

struct employee
{
int id;
string name;
 int key;
};

class hashtable {

private:
 employee table[10];

public:
void insertion();
void deletion();
void searching();
void display();
int hashfunction(int key);
hashtable();

};

void hashtable :: deletion()
{
int x, i,flag=0;
 cout<<"\n  Delete Data: "<<endl;
cout << "Enter id to be deleted" << endl;
 cin >> x;
 for (i = 0; i < 10; i++)
 {
 if (x == table[i].id)
 {
   flag=1;
 table[i].id = -1;
 table[i].key = -1;
 table[i].name = "null";
   cout<<"Employee of ID "<<x<<" is deleted"<<endl;
 }
 }
if(flag==0)
  cout<<"Employee of ID "<<x<<" is not found"<<endl;
}


void hashtable :: searching()
{
 int iKey, j,flag=0;
 cout<<"\n Search Data: "<<endl;
 cout << "Enter the id to be searched " << endl;
 cin >> iKey;

 for (j = 0; j < 10; j++)
 {
 if (iKey == table[j].id)
 {
   flag=1;
 cout << "Employee found at index " << j << endl;
 }
 }
  if(flag==0)
    cout<<"Employee of ID "<<iKey<<" is not found"<<endl;
 }

int hashtable :: hashfunction(int key)
 {
 return key % 10;
}

hashtable :: hashtable() 
{
 for (int i = 0; i < 10; i++)
 {
 table[i].id = -1;
 table[i].key = -1;
table[i].name = "---";
}
}

void hashtable :: insertion()
 {
     int id, flag = 0;
 string name;
 cout<<"\n Insert Data : "<<endl;
 cout << "1. Enter Employee Id " << endl;
 cin >> id;
 cout << "2. Enter Employee Name " << endl;
cin >> name;

 int index = hashfunction(id);

   int c = index;

 while (table[index].key != -1)
 {
 index = (index + 1) % 10;
 flag++;
 }
table[index].id = id;
 table[index].name = name;
 table[index].key = c;

 }

void hashtable :: display()
 {
 cout<<"\n\n\t**********Employee Data*************\n"<<endl;
 cout << "Key  Id  Name " << endl;

 int j = 0;
 for (j = 0; j < 10; j++)
{
 cout << " " << j << "   " << table[j].id << "  " << table[j].name << endl;
}
 }

int main()
{

 int ch;
 hashtable h;
 do
 {
cout << endl;
 cout << "Enter your Choice:" << endl;
cout << "1.Insert Data" << endl;
 cout << "2.Delete Data" << endl;
 cout << "3.Search Data" << endl;
cout << "4.Display Data" << endl;
 cout << "5.Exit" << endl;

 cout << "Enter your choice: ";
 cin >> ch;

switch (ch)
 {
case 1:
h.insertion();
 break;

case 2:
h.deletion();
break;

case 3:
 h.searching();
break;

 case 4:
 h.display();
 break;

   case 5:
     cout<<" Thank You"<<endl;
 break;

 default:
cout << "Invalid Choice" << endl;

 }
} while (ch!=5);
  
return 0;
}
