#include <stdio.h>
#include <math.h>

int is_armstrong(int num) {
    int x = num < 0 ? -num : num;
    int n = 0, t = x;
    while (t > 0) { n++; t /= 10; }
    if (x == 0) n = 1;

    int sum = 0; t = x;
    while (t > 0) {
        int d = t % 10;
        // pow returns double; round to nearest int
        sum += (int)(pow(d, n) + 0.5);
        t /= 10;
    }
    return sum == x;
}

int main(void) {
    int num;
    if (scanf("%d", &num) != 1) return 1;
    if (is_armstrong(num))
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
    return 0;
}
