#include    <iostream>
using namespace std;

int main()
{
   int rows;
   cout << "Enter the number of rows: ";
   cin >> rows;
   for (int i = 0; i < rows; ++i) {
      char letter = 'A';
      for (int j = 0; j <= i; ++i) {
         cout << letter << " ";
         letter++;
      }
      cout << endl;
   }
   /* Complete your code */
   return 0;
  
}
