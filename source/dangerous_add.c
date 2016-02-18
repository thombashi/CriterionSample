#include <stdlib.h>
#include <stdint.h>
#include "dangerous_add.h"

int dangerous_add(int lhs, int rhs)
{
    int sum;
    
    sum = lhs + rhs;
    
    if (sum == 0)
        exit(1);
    
    if (sum < 0)
        abort();
    
    return sum;
}

uint64_t dangerous_add_2(int lhs, int rhs)
{
    if (lhs < 0)
        exit(1);

    if (rhs < 0)
        abort();
        
	return lhs + rhs;
}
