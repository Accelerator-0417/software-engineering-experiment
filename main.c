#include <stdio.h>
#include "add.h"

int main(void)
{
    int a[4] = {2, -1, 0, -5};
    int b[4] = {3, 1, 0, -3};
    int e[4] = {5, 0, 0, -8};
    int i, fail = 0;
    for (i = 0; i < 4; i++) {
        int got = add(a[i], b[i]);
        if (got != e[i]) {
            printf("FAIL: add(%d, %d) = %d, expected %d\n", a[i], b[i], got, e[i]);
            fail++;
        }
    }
    if (fail == 0) {
        printf("PASS: all 4 cases passed\n");
        return 0;
    }
    printf("FAIL: %d case(s) failed\n", fail);
    return 1;
}
