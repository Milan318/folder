#include <iostream>
using namespace std;

int main()
{
  int sub1, sub2, sub3, total;
  float avg;
  char grade;
  cout << "Enter sub1 marks:";
  cin >> sub1;

  cout << "Enter sub2 marks:";
  cin >> sub2;

  cout << "Enter sub3 marks:";
  cin >> sub3;

  total = sub1 + sub2 + sub3;
  cout << "Total is:" << total << endl;

  avg = total / 3;
  cout << "Avrege is:" << avg << endl;

  grade = avg >= 90 ? 'A':avg >= 80?'B': avg >= 70?'C':avg >= 60?'D': 'F';
  cout << "Your Grade Is " << grade <<endl;

  switch (grade)
  {
  case 'A':
    cout << "Excellent work!." << endl;
    break;

  case 'B':
    cout << "Well done." << endl;
    break;

  case 'C':
    cout << "Good job." << endl;
    break;

  case 'D':
    cout << "You passed, but you could do better." << endl;
    break;

  default:
    cout << "fail..." << endl;
    break;
  }

  if ((grade == 'A') || (grade == 'B') || (grade == 'C') || (grade == 'D'))
  {
    cout << "Congratulations! You are eligible for the next level" << endl;
  }
  else
  {
    cout << "Please try again next time:" << endl;
  }

  return 0;
}         