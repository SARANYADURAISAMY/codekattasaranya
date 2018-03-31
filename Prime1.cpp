#include <iostream>

using namespace std;
class Prime
{
    private:
    int i,s,p,count=0,j;
    public:
    void get()
    {
        cout<<"enter your number";
        cin>>s;
        cin>>p;
        for(i=s;i<=p;i++)
        {
            count=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    count++;
                    break;
                    
                }
            }
            if(count==0&&i!=1)
            
                cout<<"The output is"<<i<<"\t";
            
        }
    
    }
};

int main()
{
    Prime p;
    p.get();

    return 0;
}
