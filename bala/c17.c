#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b)
 {
    return strcmp(a, b);
}
int lexicographic_sort_reverse(const char* a, const char* b)
 {
    return strcmp(b, a);
}
int count_distinct(const char* s)
 {
    int count = 0;
    int alphabet[26] = {0};
    while (*s)
     {
        if (alphabet[*s - 'a'] == 0)
         {
            alphabet[*s - 'a'] = 1;
            count++;
        }
        s++;
    }
    return count;
}
int sort_by_number_of_distinct_characters(const char* a, const char* b)
 {
    int res = count_distinct(a) - count_distinct(b);
    return (res == 0) ? strcmp(a, b) : res;
}
int sort_by_length(const char* a, const char* b) 
{
    int res = strlen(a) - strlen(b);
    return (res == 0) ? strcmp(a, b) : res;
}
void string_sort(char** arr, const int len, int (*cmp_func)(const char* a, const char* b)) 
{
    for (int i = 0; i < len; i++)
     {
        for (int j = 0; j < len - 1; j++)
         {

            if (cmp_func(arr[j], arr[j + 1]) > 0) 
            {
                char* temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

