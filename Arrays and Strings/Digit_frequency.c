#include <stdio.h>
#include <string.h> 
#include <math.h>
#include <stdlib.h>

int main() {
    unsigned int digits[10]={0}; // to store number of repeatition of digits 0 >> 9
    char string[1000]; int index=0;
    scanf("%s",string); // read a string and add '\0' to the end of the string
    while (string[index] != '\0') {
    switch(string[index])
    {
        case('0'):
        digits[0]++;
        break;
        case('1'):
        digits[1]++;
        break;
        case('2'):
        digits[2]++;
        break;
        case('3'):
        digits[3]++;
        break;
        case('4'):
        digits[4]++;
        break;
        case('5'):
        digits[5]++;
        break;
        case('6'):
        digits[6]++;
        break;
        case('7'):
        digits[7]++;
        break;
        case('8'):
        digits[8]++;
        break;
        case('9'):
        digits[9]++;
        break;
    }// end switch
    index++;
    }// end while

    /* Now printing the result*/
    index=0;
    for(index=0;index<10;index++)
        printf("%d ",digits[index]);
  
    return 0;
}

