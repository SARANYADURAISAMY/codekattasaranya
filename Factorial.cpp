#include <iostream>

using namespace std;
class Factorial
{
    private:
    int s,i,f=1;
    public:
    void get()
    {
        cout<<"Enter the number";
        cin>>s;
        for(i=1;i<=s;i++)
        {
            f=f*i;
        }
        cout<<"The output is :"<<f;
        
    }
};

int main()
{
 Factorial s;
 s.get();

 }
