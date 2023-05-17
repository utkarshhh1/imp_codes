#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0 ; i<n; i++)
    {
        cin>>a[i];
    }
  int counter=1;
  while (counter<n)
  {
    for(int i=0;i<n-counter;i++)
    {
      if(a[i]>a[i+i])
      {
        int temp;
        temp= a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
      }
      counter++;
    }
  }
  for(int i=0;i<n;i++)

  {
    cout<<a[i]<<endl;
  }
return 0;
}