#include <stdio.h>

int main(void) {
    int tipoInt = 42;
    short int tipoShortInt = -32768;
    unsigned short int tipoUnsignedShortInt = 65535;
    char tipoChar = 'A';
    unsigned char tipoUnsignedChar = 255;
    float tipoFloat = 3.14159;
    unsigned int tipoUnsignedInt = 4294967295;
    double tipoDouble = 1.234567890123456;
    long double tipoLongDouble = 1.2345678901234567890123456789012345;
    long long int tipoLongLongInt = 9223372036854775807;
    unsigned long int tipoUnsignedLongInt = 4294967295;
    _Bool tipoBool = 1;

    printf("int: %d\n", tipoInt);
    printf("short int: %hd\n", tipoShortInt);
    printf("unsigned short int: %hu\n", tipoUnsignedShortInt);
    printf("char: %c\n", tipoChar);
    printf("unsigned char: %u\n", tipoUnsignedChar);
    printf("float: %f\n", tipoFloat);
    printf("unsigned int: %u\n", tipoUnsignedInt);
    printf("double: %lf\n", tipoDouble);
    printf("long double: %Lf\n", tipoLongDouble);
    printf("long long int: %lld\n", tipoLongLongInt);
    printf("unsigned long int: %lu\n", tipoUnsignedLongInt);
    printf("_Bool: %d\n", tipoBool);

    return 0;
}