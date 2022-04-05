#include "class2.h"

int class2::func()
{
    int k = a[0];
    for (int i = 1; i < n; i++) {
        k += a[i];
    }
    return k;
}
