#include <iostream.h>
#include <conio.h>

void main() 
{

  int first_number, second_number, sum;
    
  cout << "Enter two integers: ";
  cin >> first_number >> second_number;

  sum = first_number + second_number;
  cout << first_number << " + " <<  second_number << " = " << sum;     

  getch();
}