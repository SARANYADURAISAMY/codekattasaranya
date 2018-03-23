#include <iostream>

using namespace std;
class Hello
{
    private :
    int s,n;
    public :
    void print()
    {
      cout<<"enter your number"<<endl;
     cin>>s;
     if(n>0)
     {
       for(s=0;s<n;s++) 
       {
           cout<<"hello"<<endl;
       }
     }
     else
     {
         cout<<"Enter the input greater than zero";
     }
    }
};

int main()
{
  Hello h;
  h.print();
}
