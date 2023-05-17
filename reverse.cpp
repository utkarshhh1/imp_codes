#include<iostream>
using namespace std;
int main()
{ 
    int num,a,reverse=0;
     cout<<"enter a number"<<endl;
cin>>num;
while(num>0)
{
    a = num%10;
    reverse = reverse*10+a;
   num=num/10;
}
cout<<reverse<<endl;
   return 0; 
}