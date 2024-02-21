#include <iostream>

using namespace std;


int main() {
   unsigned int D, yobi_size;
   cin >> D;
   while(true)
   {
       cin >> yobi_size;

       if(yobi_size >= D)
       {
           break;
       }

       D += yobi_size;
   }

   cout << D << endl;

   return 0;
}
