/* Input Format
        The first line contains an integer N,
        The next line contains, N space-separated integers.
Output Format
        Print in a single line the sum of the integers in the array. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i=0,sum=0;
    scanf("%d",&n);
    int *arr= (int*)malloc(n*sizeof(int)); // reserve n allicated memory space for array 
    while(i<n){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        i++; }
    printf("%d",sum);
    return 0;
}
