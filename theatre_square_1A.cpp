#include <iostream>
using namespace std;

int main()
{
    int n,m,a;

    cin >> n >> m >> a;

    if(m % a == 0)
     {
         if(n % a == 0)
         {
             cout << ((m/a)*(n/a));
         }
         else{
             cout << ((m/a)*(n/a) + 1);
         }
     }
     else if(m % a != 0)
     {
         if(n % a == 0)
         {
             cout << (((m/a)+1)*(n/a));
         }
         else {
             cout << (((m/a)+1)*((n/a)+1));
         }
     }
    
}