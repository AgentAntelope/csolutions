int main(void) {
    struct {
        double re, im;
    } c1 = {0.0, 0.1}, c2 = {0.0, 0.1}, c3;

    c1 = c2;
    c3.re = c1.re + c2.re;
    c3.im = c1.im + c2.im;

    return 0;
}
