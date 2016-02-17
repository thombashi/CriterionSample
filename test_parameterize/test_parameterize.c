#include <stdio.h>
#include <criterion/parameterized.h>
#include "add.h"

struct parameter_tuple {
    int lhs;
    int rhs;
    int expected;
};

ParameterizedTestParameters(parameterized_test, add) {
    static struct parameter_tuple params[] = {
        {1, 1, 2},
        {-1, -1, -2},
        {-100, 200, 100},
    };

    return cr_make_param_array(
        struct parameter_tuple,
        params, sizeof (params) / sizeof (struct parameter_tuple));
}

ParameterizedTest(struct parameter_tuple *tup, parameterized_test, add) {
    int result;
    
    fprintf(stdout,
        "Test: lhs=%d, rhs=%d, expected=%d\n", 
        tup->lhs, tup->rhs, tup->expected);
    fflush(stdout);

    result = add(tup->lhs, tup->rhs);
    cr_assert_eq(
        result, tup->expected,
        "Failed: lhs=%d, rhs=%d, result=%d, expected=%d\n", 
        tup->lhs, tup->rhs, result, tup->expected);
}
