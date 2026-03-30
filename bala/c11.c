#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) return 1;

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%lld\n", sum);
    free(arr);

    return 0;
}

