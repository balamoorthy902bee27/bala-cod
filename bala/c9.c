#include <stdio.h>
void calculate_the_maximum(int n, int k) 
{
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;
    for (int a = 1; a < n; a++) 
    {
        for (int b = a + 1; b <= n; b++) 
        {
            int and_res = a & b;
            int or_res  = a | b;
            int xor_res = a ^ b;
             if (and_res < k && and_res > max_and) 
            {
                max_and = and_res;
            }
            if (or_res < k && or_res > max_or) 
            {
                max_or = or_res;
            }
            
            if (xor_res < k && xor_res > max_xor) 
            {
                max_xor = xor_res;
            }
        }
    }

    
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) == 2) {
        calculate_the_maximum(n, k);
    }
    return 0;
}
