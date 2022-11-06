#include <iostream>
#include <vector>
using namespace std;

int main(){
   
   vector<int> v;

   for (int a = 1; a <= 9; a++){
      for (int b = 0 ; b <= 9; b++){
         for (int c = 0;c <= 9; c++){
            for(int d = 0; d <= 9; d++){
               if (d == c || d == b || d == a || c == b || c == a || b == a){
                  continue;
               }
               else {
                  v.push_back(a * 1000 + b * 100 + c * 10 + d );
                  }
               }
            }
         }
      }
   
   vector<int>::iterator it;
   for ( it = v.begin(); it != v.end(); it++){
      cout << *it << endl;
   }
}
