#include <iostream>

using namespace std;
int main()
{
  char s;
  cout<<"Enter the input";
  cin>>s;
  if( s=='a'|| s=='e'|| s=='i'|| s== 'o'|| s=='u'||
  s == 'A'||s== 'E'||s =='I'||s == 'O'||s =='U')
  {
      cout<<"it is vowel";
  }
  else if((s >= 'a'&& s<='z') || (s>='A'&& s<='Z'))
  {
      cout<<"It is consonant";
  }
  else
  {
      cout<<"Enter only alphabet letters";
  }
}
