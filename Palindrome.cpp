#include <iostream>

using namespace std;
class Palindrome
{
    private:
    int temp,n,re,rev=0,s ;
    public:
    void get()
    {
        cout<<"Enter the number";
        cin>>n;
        s=n;
        while(n!=0)
        {
            re=n%10;
            rev=rev*10+re;
            n=n/10;
        }
        
        if(s==rev)
        {
            cout<<"It is palindrome";
        }
        else
        {
            cout<<"It is not palindrome";
        }
    }
        
};

int main()
{
  Palindrome p;
  p.get();
  
}
