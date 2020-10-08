#include <algorithm>
#include <climits>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include "../utils/PrintUtils.hpp"
#include "../utils/VectorUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// https://leetcode.com/problems/check-if-it-is-a-straight-line/
// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() { // NOLINT
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  return nullptr;
}();

class Solution {
public:
  int minStartValue(vector<int> &nums) {
    int total = 0;
    int minStart = 1;
    for (auto &&i : nums) {
      total += i;
      // PV1(total);
      if (total + minStart < 1) {
        minStart = -total + 1;
        // PV2(total, minStart);
      }
    }
    return minStart;
  }
};

void test1() {
  cout << boolalpha;
  vector<int> arr{-3, 2, -3, 4, 2};
  vector<int> arr2{1, 2};
  vector<int> arr3{1, -2, -3};
  cout << "5 ? " << Solution().minStartValue(arr) << endl;
  cout << "1 ? " << Solution().minStartValue(arr2) << endl;
  cout << "5 ? " << Solution().minStartValue(arr3) << endl;
}

void test2() {}

void test3() {}