#include <stdio.h>

int main()
{

    int firstnum, secondnum, totalsum, totaldiv, totalmul, totalsubt, level2;

    firstnum = 663844372; //[input] add your first number here
    secondnum = 10870; //[input] add your second number here
    totalsum = firstnum + secondnum; //formula to instruct what to do.
    totaldiv = firstnum / secondnum; //formula to instruct to divide.
    totalmul = firstnum * secondnum; //to multiply
    totalsubt = firstnum - secondnum; //to subtract
    


    printf ("the numbers you chosen, %d and %d\n", firstnum, secondnum);
    printf ("addition = %d \n", totalsum);
    printf ("division = %d\n", totaldiv);
    printf ("multiplication = %d\n", totalmul);
    printf ("subtraction = %d\n", totalsubt);

}