#include <iostream>

using namespace std;
class Sum
{
    private:
    int s,count=0 ;
    public:
    void get()
    {
        cout<<"Enter the number";
        cin>>s;
        while(s!=0)
        {
          s=s/10;
          count++;
        }
     cout<<"number of digit"<<count;
        
    }
    };

int main()
{
  Sum s;
  s.get();
  
}
