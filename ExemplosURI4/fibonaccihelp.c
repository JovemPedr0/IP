#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, f, n, i;
    
    printf ("Informe a quantidade de elementos..: \n");
    scanf ("%d", &n);
    
    a = 0;
    b = 1;

    for (i = 1; i <= n; i++ ){
        if (i == 1)
        {
            printf ("%d",a);
        }
        else if (i == 2)
        {
            printf ("%d", b);
        }
        else
        {
            f = a + b;
            a = b;
            b = f;
            if (i == n)
            {
                printf ("%d\n", f);
            } else {
                printf("%d ", f);
            }
        }
    }

    return 0;
}