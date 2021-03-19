#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
 
int main()
{
 setlocale(LC_ALL, "rus");
 
 const int SIZE = 15;
 
 int ourArr[SIZE] = {};
 int ourArr2[SIZE] = {};
 
 srand(time(NULL));
 cout << "Array ourArr:";
 for(int i = 0; i < SIZE; i++)
 {
 ourArr[i] = 15 + rand() % 40;
 cout << ourArr[i] << "|";
 }
 cout << endl << endl;
 
 int averageValue = 0;
 
 cout << "Finally ourArr2: ";
 for(int i = 0; i < SIZE; i++)
 {
 ourArr2[i] = ourArr[i] - averageValue ;
 cout << ourArr2[i] << "|";
 }
 cout << endl << endl;
 
 return 0;
}
