#include <stdio.h>

double a[] = {
    83.7361,      /* 00000083.736 */
    29748.6607,   /* 00000029749. */
    1054932234.0, /* 001.0549e+09 */
    0.0000235218  /* 002.3522e-05 */
};

int main(void) {
    int i;

    for (i = 0; i < 4; i++) {
        printf("%#012.5g\n", a[i]);
    }

    return 0;
}