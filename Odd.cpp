#include <iostream>

using namespace std;
class Odd
{
    private:
    int s,p,i;
    public:
    void get()
    {
        cout<<"Enter the number";
        cin>>s>>p;
        for(i=s;i<=p;i++)
        { 
           
            if(s%2==1)
            {
                cout<<s<<"\t";
            }
             s=s+1;
        }
    }

};

int main()
{
 Odd o;
 o.get();
  
}
