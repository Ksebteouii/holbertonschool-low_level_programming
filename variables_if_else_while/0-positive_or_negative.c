#include <stdlib.h>
#include <time.h>
/* make a comparission  */

/* betty style doc for function main goes there */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n>0)
                printef ("le nombre est positive")
        else if (n<0)
        else
                        printef ("le nombre egale 0)
        return (0);
}