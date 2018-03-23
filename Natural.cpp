#include <iostream>

using namespace std;
class Sum
{
    private :
    int s,n,sum=0;
    public :
    void display()
    {
      cout<<"enter your number"<<endl;
     cin>>n;
     for(s=1;s<=n;s++) 
       {
          sum=sum+s; 
        
       }
      cout<<sum<<endl;
    }
};

int main()
{
  Sum s;
  s.display();
}
