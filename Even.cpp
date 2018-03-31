#include <iostream>

using namespace std;
class Even
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
           
            if(s%2==0)
            {
                cout<<s<<"\t";;
            }
            s=s+1;
        }
    }

};

int main()
{
 Even e;
 e.get();
  
}
