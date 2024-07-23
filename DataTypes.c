#include <stdio.h>
#include <stdbool.h>

int main()
{

    float pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;  // %f
    double pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679; // %f
    char a = 'W';                                                                                                       // %c
    char b[] = "Win";                                                                                                   // %s
    bool e = false;                                                                                                     //%d
    char f = 101;                                                                                                       // 1 byte %d or %c
    unsigned char g = 200;                                                                                              // 1 byte %d or %c
    short int h = 32767;                                                                                                // 2 bytes %d
    unsigned short int i = 20000;                                                                                       // 2 bytes %d
    int m = 97157510860;                                                                                                // 4 bytes %d
    unsigned int n = 89410581;                                                                                          // 4 bytes %u
    long long int l = 81595701505805;                                                                                   // 8 bytes %lld
    unsigned long long int o = 1975158011801505;                                                                        // 8 bytes %llu
    return 0;
}