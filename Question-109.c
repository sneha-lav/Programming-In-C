/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

*/

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n], i, j;
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    int max_sum = 0;
    for(i = 0; i <= n - k; i++) {
        int sum = 0;
        for(j = i; j < i + k; j++) sum += arr[j];
        if(sum > max_sum || i == 0) max_sum = sum;
    }
    printf("%d", max_sum);
    return 0;
}
