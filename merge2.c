#include <stdio.h>
#include <stdlib.h>

// Function prototype
void merge(int a1[], int size_a1, int a2[], int size_a2, int unique[], int *size_u);

int main(void){
    
    // variables for user input
    int *first_arr;
    int *second_arr;
    int *unique;
    int size1, size2, size_u, i;
    
    // asks user for the size of the first array
    printf("Enter the length of array 1: ");
    scanf("%d", &size1);

    // assign the memory needed for the first array
    first_arr = (int *)malloc(size1 *sizeof(int));
    printf("Enter the elements of the array: ");
    
    for(i = 0; i < size1; i++){
        // scan the first array of elements
        scanf("%d", &first_arr[i]);
    }
    
    // asks user for the size of the second array
    printf("Enter the length of array 2: ");
    scanf("%d", &size2);

    // assign the memory needed for the second array
    second_arr = (int *)malloc(size2 *sizeof(int));
    printf("Enter the elements of the array: ");
    
    for(i = 0; i < size2; i++){
        // scan the second array of elements
        scanf("%d", &second_arr[i]);
    }
    
    unique = (int *)malloc((size1+size2) *sizeof(int));
    // assign the memory needed for the unique array (array 3)
    merge(first_arr,size1,second_arr,size2,unique,&size_u);
    printf("Output array: ");
    
    for(i = 0; i < size_u; i++){
        // print output array
        printf("%d ", unique[i]);
    }
    return 0;
}

// The search function is used to make sure that we dont
// copy any duplicate elements into arr3
int search(int arr3[], int size1, int size2){
    
    int i;
    
    // loop through the elements in the arr3
    // make sure to avoid copying any 
    // duplicate elements into arr3 
    for(i = 0; i < size1; i++){
        
        if(arr3[i] == size2){
            
            return i;
        }
    }
    return -1;
}

// Function used to merge the two arrays into a new array called 
// unique[] and displays each element, without duplicates
void merge(int a1[], int size_a1, int a2[], int size_a2, int unique[], int *size_u){
    
    int i, k = 0;
    
    // loop through every element in the array
    // and remove any duplicate elements that
    // are found in both arrays.
    for(i = 0; i < size_a1; i++){
    
        unique[k] = a1[i];
        k++;
    }
    
    for(i = 0; i < size_a2; i++){
        
        // search the elements in arr3
        // if the elements are not present
        // then insert the element into arr3
        if(search(unique, size_a1, a2[i]) == -1){

            // copy the elements from arr3 into arr3
            unique[k] = a2[i];
            k++;
        }
    }
    *size_u = k;
}
