#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <criterion/theories.h>
#include "dangerous_add.h"

TheoryDataPoints(theory_test, passing) = {
    DataPoints(int, 0, -1, 1, INT_MAX, INT_MIN),
    DataPoints(int, 0, -1, 1, INT_MAX, INT_MIN),
};

Theory((int lhs, int rhs), theory_test, passing) {
    uint64_t result;
    
    cr_assume_gt(lhs, 0);
    cr_assume_gt(rhs, 0);
    
    fprintf(stdout,
        "Test: lhs=%d, rhs=%d\n", 
        lhs, rhs);
    fflush(stdout);
    
    result = dangerous_add_2(lhs, rhs);
    cr_assert_gt(
        result, 0,
        "Failed: lhs=%d, rhs=%d, result=%d\n", 
        lhs, rhs, result);
}
