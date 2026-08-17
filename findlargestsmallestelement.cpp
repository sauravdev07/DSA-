#include <iostream>
#include <climits> //it include a file that consider min and max integral value
using namespace std;
int main()
{
  int size = 7;
  int marks[size];
  int smallest = INT_MAX; // this gives the value of +infinity
  int largest = INT_MIN;  // this gives the value of -infinity

  for (int i = 0; i < size; i++)
  {
    cout << "Enter the value of index at " << i << ":" << endl;
    cin >> marks[i]; // this will take input one by one for all the index value
  }

  for (int i = 0; i < size; i++)
  { // this loops compare of the array vaalue and provide smallest one
    if (marks[i] < smallest)
      smallest = marks[i];
  }
  for (int i = 0; i < size; i++)
  { // this will compare all array value and provide largest one
    if (marks[i] > largest)
      largest = marks[i];
  }
  cout << "Smallest NUmber is : " << smallest << endl;
  cout << "Largest Number is : " << largest << endl;
}