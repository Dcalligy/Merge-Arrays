# Merge-Arrays

Modify project 2, #1, merge.c so that it includes the following function. Name your program merge2.c.

```void merge(int a1[], int size_a1, int a2[], int size_a2, intunique[], int * size_u);```

The merge function finds all the unique elements of a1 and a2 store them in array unique.Parameter size_a1 contains the size of the array a1 and parameter size_a2 contains the size ofthe array a2. The sixth parameter size_u points to a variable in which the function will store the numbers of unique elements of the a1 and a2.

In the main function, ask the user to enter the length of each array, declare and reads in the numbers for each array, declare the array unique with the largest possible size (size of the first array + size of the second array), call the merger function, and then display the array unique using the actual number of elements of the array (the variable pointed by size_u).
