#include "include/functions.h"
#include <cmath>
#include <cstdint>
#include <vector>

namespace func {
    bool is_pythag_triplet(int a, int b, int c) {
        if ((a * a) + (b * b) == c * c && a < b && b < c) {
            return true;
        } else {
            return false;
        }
    }

    int64_t find_pythag_trip_product(int target_sum) {
        std::vector<int64_t> all_triplet_products;
        int64_t max_a = static_cast<int64_t>(target_sum / 3);

        for (int64_t a = 1; a < max_a; a++) {
            int64_t max_b = static_cast<int64_t>((target_sum - a) / 2);
            for (int64_t b = a + 1; b < max_b; b++) {
                int64_t c = target_sum - (a + b);
                if (is_pythag_triplet(a, b, c)) {
                    all_triplet_products.push_back(a * b * c);
                }
            }
        }

        return all_triplet_products.front();
    }
}