#include <iostream>

using namespace std;
class Amstrong1
{
private:
  int i, s, p, sum, j, re, n;
public:
  void get ()
  {
    cout << "enter your number";
    cin >> s;
    cin >> p;
    for (i = s; i <= p; i++)
      {
	sum = 0;
	n = i;
	while (n != 0)
	  {
	    re = n % 10;
	    sum = sum + re * re * re;
	    n = n / 10;
	  }
	if (i == sum)
	  {
	    cout <<"The Amstrong number between two numbers is:"<< i<<"\t"<<endl;
	  }
      }
  }

};

int main ()
{
 Amstrong1 a;
a.get();
  return 0;
}
