#include <iostream>

using namespace std;
int main()
{
  int s,p,q;
  cout<<"Enter the input";
  cin>>s;
  cin>>p;
  cin>>q;
  if(s>p&&s>q)
  {
      cout<<"s is biggest number"<<endl;
      cout<<"A="<<s;
  }
  else if(p>q)
  {
      cout<<" p is biggest number"<<endl;
      cout<<"A="<<p;
  }
  else
  {
      cout<<"q is biggest number"<<endl;
      cout<<"A="<<q<<endl;
  }
}
