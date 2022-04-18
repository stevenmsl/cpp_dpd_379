#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <algorithm>
#include <iterator>
#include <unordered_map>
#include <set>
using namespace sol379;
using namespace std;

/*takeaways
  - you can design two data structures of which one is to
    hold the available numbers the other numbers in use
  - you can choose queue to store the numbers so that it
    can give away the numbers in the order of 0,1,2
    initially - this is not really required and is just
    for the sake of making the testing easier
  - Use a set to store the numbers that are in use
    as we can easily query this set to find if an
    number is not in use hence available
*/

PhoneDirectory::PhoneDirectory(int n)
{
  for (auto i = 0; i < n; i++)
    phones.push(i);
}
int PhoneDirectory::get()
{
  if (phones.empty())
    return -1;
  auto phone = phones.front();
  phones.pop();
  in_use.insert(phone);

  return phone;
}
bool PhoneDirectory::check(int number)
{
  return in_use.count(number) == 0;
}
void PhoneDirectory::release(int number)
{
  if (in_use.count(number) == 0)
    return;
  in_use.erase(number);
  phones.push(number);
}
