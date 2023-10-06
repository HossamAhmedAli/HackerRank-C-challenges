#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, sum=0;
    scanf("%d", &n);
    for(char i=1; i<=6 ; i++)
    {
        sum+=(n%10); // store the reminder in sum
        n/=10; // delete the reminder digit
    }
    printf("%d",sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
