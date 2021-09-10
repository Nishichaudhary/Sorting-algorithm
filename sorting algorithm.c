/*STEP 1: START
STEP 2: INITIALIZE arr[] ={5, 2, 8, 7, 1 }..
STEP 3: SET temp =0
STEP 4: length= sizeof(arr)/sizeof(arr[0])
STEP 5: PRINT "Elements of Original Array"
STEP 6: SET i=0. REPEAT STEP 7 and STEP 8 UNTIL i<length
STEP 7: PRINT arr[i]
STEP 8: i=i+1.
STEP 9: SET i=0. REPEAT STEP 10 to STEP UNTIL i<n
STEP 10: SET j=i+1. REPEAT STEP 11 UNTIL j<length
STEP 11: if(arr[i]>arr[j]) then
              temp = arr[i]
              arr[i]=arr[j]
              arr[j]=temp
STEP 12: j=j+1.
STEP 13: i=i+1.
STEP 14: PRINT new line
STEP 15: PRINT "Elements of array sorted in ascending order"
STEP 16: SET i=0. REPEAT STEP 17 and STEP 18 UNTIL i<length
STEP 17: PRINT arr[i]
STEP 18: i=i+1.
STEP 19: RETURN 0.
STEP 20: END.
*/
#include <stdio.h>

int main()
{
    //Initialize array
    int arr[] = {83,1,45,95,45,52,11,47,0,45,67,82};
    int temp = 0;

    //Calculate length of array arr
    int length = sizeof(arr)/sizeof(arr[0]);

    //Displaying elements of original array
    printf("Elements of original array: \n");
    for (int i = 0; i < length; i++) {
      printf("%d ", arr[i]);
    }

    //Sort the array in ascending order
    for (int i = 0; i < length; i++) {
        for (int j = i+1; j < length; j++) {
           if(arr[i] > arr[j]) {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;

             }
        }
    }

    printf("\n");

    //Displaying elements of array after sorting
    printf("Elements of array sorted in ascending order: \n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


