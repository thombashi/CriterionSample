#include <criterion/criterion.h>
#include "dangerous_add.h"


Test(dangerous_add, test_passing, .exit_code=1,
        .description="passing: expected exit code == 1") {
    dangerous_add(1, -1);
}

Test(dangerous_add, test_failing_1, .exit_code=2,
        .description="failing: expected exit code == 2") {
    dangerous_add(1, -1);
}

Test(dangerous_add, test_failing_2,
        .description="failing: without '.exit_code'") {
    dangerous_add(1, -1);
}
