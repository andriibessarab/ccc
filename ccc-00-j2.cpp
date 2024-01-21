#include <iostream>
using namespace std;

int same_upside_down(int n);


int main() {
    // store start and end values
    unsigned short int start_val;
    unsigned short int end_val;
    cin>>start_val;
    cin>>end_val;

    int c = 0;  // count how many digits look the same upside down
    for(int i=start_val; i<end_val; i++)
    {
        c+= same_upside_down(i);
    }

    cout<<c<<endl; // output the counter
}


// Checks if upside down number looks the same as original
int same_upside_down(int n)
{
   int old_n = n;
   int new_n = 0;

   while(old_n > 0)
   {
       int d = old_n % 10;

       switch (d)
       {
           case 6:
               d = 9;
               break;
           case 9:
               d = 6;
               break;
           case 0:
           case 1:
           case 8:
               break;
           default:
               return 0;
       }

       new_n *= 10; // move previously added digits one place left
       new_n += d;
       old_n /= 10; // remove ones place from old n
   }

   return new_n == n ? 1: 0; // check if upside down number looks the same as original
}
