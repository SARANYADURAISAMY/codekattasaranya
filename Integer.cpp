#include <iostream>

using namespace std;
class Sum
{
    private:
    int n,s,p[100],i,sum=0;
    public:
    void get()
    {
        cout<<"enter your number";
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
        {
            cin>>p[i];
        }
    }
    void display()
    {
        for(i=0;i<s;i++)
        {
            sum=sum+p[i];
        }
        cout<<"The answer is: "<<sum;
    }
};

int main()
{
  Sum s;
  s.get();
  s.display();
}
