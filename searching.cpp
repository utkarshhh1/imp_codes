#include<iostream>
using namespace std;
int linearsearch(int a[], int n , int p)
{

for(int i=0; i<n;i++)
{
if(a[i]==p)
{
   return i;
}
}
return -1;
}
int main()
{
    int n,p ;
 cout<<"enter the size of an array"<<endl;
 cin>>n;
 int a[n];
cout<<"enter the elements of the array"<<endl;
for(int i=0; i<n;i++)
{
    cin>>a[i];
}
cout<<"enter the element which you want to check"<<endl;
cin>>p;
cout<<linearsearch(a,n,p );
}