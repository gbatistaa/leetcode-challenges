#include <stdlib.h>
#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int factorial(int n) {
    if(n < 2) 
        return 1;
    else 
        return n * factorial(n - 1);
}


int subsetXORSum(int* nums, int numsSize) {
    int combination;
    int total = 0;
    for (int i = 1; i <= numsSize; i++){
        combination = factorial(numsSize)/(factorial(i) * factorial(numsSize - i));
        printf("Combinações possíveis de %d com %d: %d\n", numsSize, i, combination);
        total += combination;
    }
    printf("Combinações totais: %d\n", total);
}

int main() {
    int fact = factorial(4);
    int arr[4] = {1, 2, 3, 4};
    printf("%d\n", fact);
    subsetXORSum(arr, sizeof(arr)/sizeof(arr[0]));
    return EXIT_SUCCESS;
}