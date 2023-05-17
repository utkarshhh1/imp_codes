#include<iostream>
using namespace std;
int binarySearch(int a[], int n, int p)
{
    int s=0;
    int e=n;
    while(s<=n)
    {
        int mid = (e+s)/2;
        if(a[mid]==p)
        {
            return mid;
        }
        else if(p<a[mid])
        {
            e= a[mid]-1;
        }
        else{
        s=mid+1;
        }
        return -1;
    }
}
int main()
{
int n, key;
cout<<"enter the size of array"<<endl;
cin>>n;
int a[n];
cout<<"enter the elements of the array"<<endl;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"enter the element which you want to search"<<endl;
cin>>key;
cout<<binarySearch(a,n,key);
}