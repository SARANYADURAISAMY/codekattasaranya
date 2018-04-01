#include <iostream>

using namespace std;
class Print5
{
    private:
    int n,i,s[5];
    public:
    void get()
    {
        cout<<"enter the value of n";
        cin>>n;
        for(i=1;i<=5;i++)
        {
            s[i]=i*n;
            cout<<s[i]<<"\t";
        }
    }
};

int main()
{
  Print5 p;
 p.get();

}
