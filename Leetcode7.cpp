//
// Created by wxh on 2021/6/4.
//

#include <iostream>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while (x != 0) {
            int r = x % 10;
            if (x > 0 && res > (INT_MAX - r) / 10 || x < 0 && res < (INT_MIN - r) / 10)
                return 0;
            res = res * 10 + r;
            x /= 10;
        }
        return res;
    }
};
int main()
{
    Solution solution;
    int x = 321;
    int y = solution.reverse(x);
    cout << y << endl;
}