#include <iostream>

using namespace std;
int main()
{
  int s;
  cout<<"Enter the input";
  cin>>s;
  if(s>=1000)
  {
  if(s%4==0)                                     
  {
cout<<"It is leap year";
}
else
{
    cout<<"It is not leap year";
}
}
else
{
    cout<<"Enter the input greater than 1000 only";
}
}
