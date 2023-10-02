#include "include/functions.h"
#include <cmath>

/*
A Pythagorean triplet is a set of three natural numbers, a<b<c, for which a^2 + b^2 = c^2
For example 3^2 + 4^2 = 9 + 16 = 25 = 5^2
There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc.
*/

namespace func {
    bool is_pythag_triplet(int a, int b, int c) {
        int temp = (a * a) + (b * b);
        if (temp == c * c && a < b && b < c) {
            return true;
        } else {
            return false;
        }
    }
}