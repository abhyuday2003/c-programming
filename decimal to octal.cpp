#include <stdio.h>
#include <math.h>
int decimalToOctal(int decimalnum)
{
    int octalnum = 0, t = 1;

    while (decimalnum != 0)
    {
    	octalnum = octalnum + (decimalnum % 8) * t;
    	decimalnum = decimalnum / 8;
        t = t * 10;
    }

    return octalnum;
}
int main()
{
    int decimalnum;

    printf("Enter a Decimal Number: ");
    scanf("%d", &decimalnum);

    printf("Equivalent Octal Number: %d", decimalToOctal(decimalnum));

    return 0;
}
