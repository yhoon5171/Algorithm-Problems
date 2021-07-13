#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    int num, index;

    scanf("%d %d", &num, &index);
    int *arr = new int[num];

    for (int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    sort(&arr[0], &arr[num]);
    printf("%d", arr[index - 1]);

    return 0;
}