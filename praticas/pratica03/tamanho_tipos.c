#include <stuio.h>

int main () {
    
    printf("Tamanho dos tipos em bytes:\n\n");
    printf("char: %lu bytes\n", sizeof(char));
    printf("short int: %lu bytes\n", sizeof(short int));
    printf("int: %lu bytes\n", sizeof(int));
    printf("long int: %lu bytes\n", sizeof(long int));
    printf("long long int: %lu bytes\n", sizeof(long long int));
    printf("float: %lu bytes\n", sizeof(float));
    printf("double: Xlu bytes\n", sizeof(double));
    printf("long double: %lu bytes\n", sizeof(long double));

    return 0;
}