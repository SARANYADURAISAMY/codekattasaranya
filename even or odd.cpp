#include <iostream>

using namespace std;
int main()
{
  int s;
  cout<<"Enter your number";
  cin>>s;
  if(s>=1&&s<=100000)
  {
  if(s%2==0)
  {
      cout<<"It is Even";
}
else
{
    cout<<"It is odd";
}
}
else
{
    cout<<"It is greater than 100000 Or It is less than zero";
}


    return 0;
}
