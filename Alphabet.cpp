#include <iostream>

using namespace std;

int main()
{
  char s;
  cout<<"Enter the input";
  cin>>s;
  if((s >= 'a'&& s<='z') || (s>='A'&& s<='Z'))
  {
      cout<<"it is alphabet";
  }
  else if (s>='0'&&s<='9')
  {
      cout<<"It is number";
  }
  else
  {
      cout<<" It is special character";
  }
}
