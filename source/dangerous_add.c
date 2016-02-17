#include <stdlib.h>
#include "dangerous_add.h"

int dangerous_add(int lhs, int rhs)
{
    int sum;
    
	sum = lhs + rhs;
    if (sum == 0)
    {
        exit(1);
    } 
    else if (sum < 0)
    {
        abort();
    }
}

int* a()
{
    return (int*)malloc((uint)-1);
}