//Alphanzo Moore
//CIS-5 Online
//October 7, 2023
//Assignment 10B: Arrays as Parameters

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void printList(int numList[], int size);
int countIt(int list[], int size, int numToCount);
void resetList(int newList[], int size);

int main() 
{
  srand(time(0));
  const int SIZE = 20;
  int numArray[SIZE];
  int count;

  cout << numArray << endl;

  for (int i = 0; i < SIZE; i++)
    {
      numArray[i] = rand() % 3 + 1;
    }
  
  printList(numArray, SIZE);

  count = countIt(numArray, SIZE, 3);
  cout << "The number 3 occurs " << "times in the list." << endl;

  resetList(numArray, SIZE);
  printList(numArray, SIZE);

  system("pause");
  return 0;
  
}