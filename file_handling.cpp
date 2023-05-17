#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  string str,str2;
  str= " utkarsh is a web developer ";
  str2 = " utkarsh is a designer";
  ofstream out("sample.txt");
  out<<str;
  ifstream in("sample.txt");
  getline(in,str2);
  cout<<str2;
  return 0;
}