#include <stdio.h>

int main()
{
    int n, x;
    int bin = 0;
    scanf("%d", &x);
    for (int i = 0; i < x; i++){
            scanf("%d", &n);
            if (n == 0){
                bin = 1;
            }
    }
    if (bin == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}