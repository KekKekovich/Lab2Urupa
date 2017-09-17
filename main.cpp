#include <iostream>

using namespace std;

int main() {
char k;
     for (int i=0; i<5; i++) {
          for (int j=i+35; j<127; j+=5) {
              k=j;
              cout << k << "    ";

          }
         cout << endl;



     }


    for (char j=1; j<127; j+=2) {
         cout << j;
     }
int vrnt;
     cout << endl << " enter the case";
     cin >> vrnt;
     switch (vrnt){
         case 1:
             for (char x=14; x>=4; x--) {
                 cout << x << endl;
             }
             break;
         case 2:
             for (char x=49; x>=26; x--) {
                 cout << x;
             }
             break;
         case 3:
             for (char x=19; x<=39; x++){
                 static int i=19;
                 for ( i=i-x+19; i<19; i++){
                     cout << " ";
                 }
                 cout << x << endl;
             }
             break;

     }
    return 0;
}