#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool predicate(int n) {
   return (n %2 != 0);
}

int main(void) {
   vector<int> v1 = {1, 2, 3, 4, 5};
   vector<int> v2(3);

   copy_if(v1.begin(), v1.end(), v2.begin(), predicate);

   cout << "Following are the Odd numbers from vector" << endl;

   for (auto it = v2.begin(); it != v2.end(); ++it)
      cout << *it << endl;

   return 0;
} 