#include <signal.h>
#include <criterion/criterion.h>
#include "dangerous_add.h"


Test(dangerous_add, test_passed, .signal=SIGABRT,
        .description="expected signal == SIGABRT") {
    dangerous_add(-1, -1);
}

Test(dangerous_add, test_fail_1, .signal=SIGSEGV,
        .description="expected signal == SIGSEGV") {
    dangerous_add(-1, -1);
}

Test(dangerous_add, test_fail_2,
        .description="without '.signal'") {
    dangerous_add(-1, -1);
}
