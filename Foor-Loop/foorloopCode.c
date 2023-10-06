#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool Even(int number);

int main()
{
    int a, b;
    int test;
    scanf("%d\n%d", &a, &b);
    for(char i=a;i<=b;i++)
    {
      /*  if(i==1) // first loop
        {
            test=a;
        }
        else if(i == 2)
        {
            test=b;
        }
        */

    switch (i) {
    case 1:
    printf("one\n");
    break;
    case 2:
    printf("two\n");
    break;
    case 3:
    printf("three\n");
    break;
    case 4:
    printf("four\n");
    break;
    case 5:
    printf("five\n");
    break;
    case 6:
    printf("six\n");
    break;
    case 7:
    printf("seven\n");
    break;
    case 8:
    printf("eight\n");
    break;
    case 9:
    printf("nine\n");
    break;
    default: // number > 9
    	// do nothing
    	break;
    } // end switch casese

    }
    /* now we print the numbers above 9 in a form of odd or even */
    if(b>9) // to print only the numbers above 9
    {
        for(char i=10;i<=b;i++)
        { // start from 9 till b which is above 9
        		 if( Even(i)) printf("even\n");
        		 else printf("odd\n");
        } // end for loop

    } // end if condition





    return 0;
}

bool Even(int number)
{

	if(number%2 == 0) return true; // if even return true
	else return false; // if odd return false



}
