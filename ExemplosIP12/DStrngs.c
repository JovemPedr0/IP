#include <stdio.h>

int main(){
    char str1[] = "string";
    const char *str2 = "constante";

    printf("%s %s", str1, str2);

    return 0;
}