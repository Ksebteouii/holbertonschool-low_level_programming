#include <math.h>

int main (int argc, char *argv[]) {
    int n;

    scanf("%d", &n);
    if(n < 0) {
        printf("absValue = -%d\n", n);
    } else {
        printf("absValue = %d\n", n);
    }
return 0;
}
