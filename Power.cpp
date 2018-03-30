#include <iostream>

using namespace std;
class Sum
{
    private:
    int n,s,p=1,i;
    public:
    void get()
    {
        cout<<"Enter the two numbers";
        cin>>n;
        cin>>s;
        for(i=1;i<=s;i++)
        {
            p=p*n;
        }
        cout<<p;
    }
        
};

int main()
{
  Sum s;
  s.get();
  
}
