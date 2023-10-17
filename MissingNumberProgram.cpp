#include<iostream>
using namespace std;
int main()
{
  int n,m,flag=0;
cout<<"Enter n elements in array ";
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{
cout<<"Enter arr["<<i<<"] ";
cin>>arr[i];
}

cout<<"Enter m for check mising number in 1 to m range ";
cin>>m;

cout<<"Missing element between 1 to m\n";
for(int i=1;i<=m;i++)
{
  flag=0;
for(int j=0;j<n;j++)
{
if(arr[j]==i)
{
flag=1;
break;
}
}if(flag==0)
{
cout<<i<<" ";
}
}

return 0;
}
