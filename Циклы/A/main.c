#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, m;
    scanf("%d" "%d", &n, &m);
    for(int i = n; i < m; i++){
        if (i % 2 == 0){
            printf("%d \n", i);
        }
    }

    return 0;
}
