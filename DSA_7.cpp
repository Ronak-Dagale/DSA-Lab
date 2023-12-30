#include<iostream>
using namespace std;

int q[20],top=-1,front=-1,rear=-1,a[20][20],visited[20],stack[20];
int del();
void add(int item);
void bfs(int s,int n);
void dfs(int s,int n);
void push(int item);
int pop();

int main()
{
int n,i,s,ch,j;
char c,dummy;
  cout<<"\n\n ENTER THE NUMBER VERTICES "<<endl;
 cin>>n;
  cout<<" ENTER 1 IF TWO VERTEX HAS A NODE IN BETWEEN THEM ELSE 0 "<<endl;
for(i=1;i<=n;i++)
{
for(j=i;j<=n;j++)
{
  if(i!=j)
  {
cout<<"\n "<< i<<" <--> "<< j<<"  :- ";
cin>>a[i][j];
    
  a[j][i]=a[i][j];
    }
  else
  {
    a[i][j]=0;
  }
}
}
cout<<"\n\nThe ADJACENCY MATRIX IS\n";
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<endl;
}

do
{
for(i=1;i<=n;i++)
visited[i]=0;
cout<<"\n\n************MENU***************";
cout<<"\n1.B.F.S";
cout<<"\n2.D.F.S";
cout<<"\n\nENTER YOUR CHOICE :- \n";
cin>>ch;
cout<<"\nENTER THE SOURCE VERTEX : "<<endl;
cin>>s;

switch(ch)
{
case 1:bfs(s,n);
break;
case 2:
dfs(s,n);
break;
}
cout<<"\n\nDO U WANT TO CONTINUE(Y/N) ? "<<endl;
cin>>dummy;
cin>>c;
}while((c=='y')||(c=='Y'));
}//main exit

void bfs(int s,int n)
{
int p,i;
add(s);
visited[s]=1;
p=del();
if(p!=0)
cout<<" "<<p;
while(p!=0)
{
for(i=1;i<=n;i++)
if((a[p][i]!=0)&&(visited[i]==0))
{
add(i);
visited[i]=1;
}
p=del();
if(p!=0)
cout<<" "<<p;
}
for(i=1;i<=n;i++)
if(visited[i]==0)
bfs(i,n);
}

void add(int item)
{
if(rear==19)
cout<<"QUEUE FULL"<<endl;
else
{
if(rear==-1)
{
q[++rear]=item;
front++;
}
else
q[++rear]=item;
}
}
int del()
{
int k;
if((front>rear)||(front==-1))
return(0);
else
{
k=q[front++];
return(k);
}
}

void dfs(int s,int n)
{
int i,k;
push(s);
visited[s]=1;
k=pop();
if(k!=0)
cout<<" "<<k;
while(k!=0)
{
for(i=1;i<=n;i++)
if((a[k][i]!=0)&&(visited[i]==0))
{
push(i);
visited[i]=1;
}
k=pop();
if(k!=0)
cout<<" "<<k;
}
for(i=1;i<=n;i++)
if(visited[i]==0)
dfs(i,n);
}

void push(int item)
{
if(top==19)
cout<<"Stack overflow ";
else
stack[++top]=item;
}

int pop()
{
int k;
if(top==-1)
return(0);
else
{
k=stack[top--];
return(k);
}
}
