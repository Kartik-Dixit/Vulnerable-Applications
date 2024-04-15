ifndef foo_h__
#define foo_h__

extern void foo(void);
#endif


main.c   foo.c
#include <stdio.h>
#include "foo.h"

int main(void) {
    foo();
    return 0;
}
