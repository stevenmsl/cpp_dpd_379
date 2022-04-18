#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol379;

/*
// Init a phone directory containing a total of 3 numbers: 0, 1, and 2.
 PhoneDirectory directory = new PhoneDirectory(3);

 // It can return any available phone number. Here we assume it returns 0.
 directory.get();

 // Assume it returns 1.
 directory.get();

 // The number 2 is available, so return true.
 directory.check(2);

 // It returns 2, the only number that is left.
 directory.get();

 // The number 2 is no longer available, so return false.
 directory.check(2);

 // Release number 2 back to the pool.
 directory.release(2);

 // Number 2 is available again, return true.
 directory.check(2);

*/

void test1()
{
  PhoneDirectory sol = PhoneDirectory(3);
  sol.get();
  sol.get();
  cout << "Expect to see 1" << endl;
  cout << "Result: " << sol.check(2) << endl;
  sol.get();
  cout << "Expect to see 0" << endl;
  cout << "Result: " << sol.check(2) << endl;
  sol.release(2);
  cout << "Expect to see 1" << endl;
  cout << "Result: " << sol.check(2) << endl;
}

main()
{
  test1();
  return 0;
}