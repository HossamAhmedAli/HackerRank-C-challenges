#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int size=0;
    int index=0;
    int sum=0;
    scanf("%d",&size); // read input
    int *array=(int*)malloc(size*sizeof(int)); // dynamic memory allocation 
    if( NULL != array) // if the bytes requsted exist..
    {
        for(index=0 ; index<size ; index++)
        {
            scanf("%d",(array+index));
        } // end for  
        for(index=0 ; index<size ; index++)
         {
             sum+=*(array+index);
         } // end for 
         printf("%d",sum);
    } // end if
    else
    {
        printf("Error!"); // requsted bytes not exist which means error
    }


    return 0;
}
