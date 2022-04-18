
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_set>
#include <string>

using namespace std;
namespace sol379
{
    class PhoneDirectory
    {
    private:
        unordered_set<int> in_use;
        queue<int> phones;

    public:
        PhoneDirectory(int n);
        int get();
        bool check(int number);
        void release(int number);
    };
}
#endif