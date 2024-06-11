#include <iostream>
#include <cmath>

bool isEven(int num)
{
  if(num % 2 == 0)
  {
      return true;
  }
  return false;
}

std::string isEvenString(int num)
{
  if(isEven(num))
  {
    return "even";
  }
  return "odd";
}

int main() {
  /* Example: */

  /*
    Q2.1: The "if" statement.
   */
  std::cout << "Q2.1: The \"if\" statement.\n";
  // TODO: Define an int called x and ask the user to enter a number. If x is
  // even, print "x is even". Otherwise, print out the next even number.
  int x;
  std::cout << "Please input a value for 'X': ";
  std::cin >> x;
  if(isEven(x))
  {
    std::cout << "X is even\n";
  }
  else
  {
    std::cout << "X is odd\n";
  }

  /*
    Q2.2: The "while" loop.
   */
  std::cout << "\nQ2.2: The \"while\" loop.\n";
  int count = 0;
  // TODO: Using a while loop, add 1 to count, until it reaches 10.
  // The final value of count should be 10. Print all the values of count.
  while(count < 11)
  {
    std::cout << "\ncount = " << count << "\n";
    count++;
  }

  /*
    Q2.3: The "for" loop.
   */
  std::cout << "\nQ2.3: The \"for\" loop.\n";
  // TODO: Using a for loop, print out all the even integers between
  // (and including) -10 and 10.
  for(int i = -10; i < 11; i++)
  {
    std::cout << "i: " << i << "\n";
  }

  /*
    Q2.4: Loops & branching.
   */
  std::cout << "\nQ2.4: Loops & branching.\n";
  // TODO: Using the loop of your choice, for the numbers from 20 to 29, print out
  // the number and whether it is even or odd.
  // For example, your code should print:
  //   20 is even
  //   21 is odd
  //   22 is even
  // ... etc.
  for(int i = 20; i <= 29; i++)
  {
    std::cout << i << " is " << isEvenString(i) << "\n";
  }

  /*
    Q2.5: Powers of 2.
   */
  std::cout << "\nQ2.5: Powers of 2.\n";
  // TODO: Using the loop of your choice, print out the first 10 powers of 2,
  // starting at 2^0.
  int power = 1;
  for(int i = 0; i < 10; i ++)
  {
    std::cout << power << "\n";
    i = i * i;
  }

  /*
    Q2.6: Addition Machine.
   */
  std::cout << "\nQ2.6: Addition Machine.\n";
  // TODO: Using a while loop, ask the user for a number, and print a running sum
  // of all the numbers. If the user enters a zero, stop the loop. Print the final
  // result at the end.

  /*
    Q2.7: Loops and the "else if" statement.
   */
  std::cout << "\nQ2.7: Loops and the \"else if\" statement.\n";
  int y = 0;
  char op;
  // TODO: In a loop of your choice, ask the user for a character and save it in
  // the char "op". Using an if / else statement: If op is 'w', add 1 to y. If op
  // is 's', subtract 1 from y. If op is any other character, exit the loop.
  // Print y every time it changes.
  while(true)
  {
    std::cout << "y = " << y << "\n";
    std::cout << "Please enter 'w' or 's' to add or subtract: ";
    std::cin >> op;
    if(op == 'w')
    {
      y++;
    }
    else if(op == 's')
    {
      y--;
    }
    else
    {
      break;
    }
  }

}