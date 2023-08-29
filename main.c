#include <stdio.h>

void print_size(){
    int a;
    short b;
    short int c;
    long d;
    long long e;
    float f;
    double g;
    printf("size of int: %llu\n", sizeof(a));
    printf("size of short: %llu\n", sizeof(b));
    printf("size of short int: %llu\n", sizeof(c));
    printf("size of long: %llu\n", sizeof(d));
    printf("size of long long: %llu\n", sizeof(e));
    printf("size of float: %llu\n", sizeof(f));
    printf("size of double: %llu\n", sizeof(g));



}




int main() {
    printf("Hello, World!\n");
    print_size();
    return 0;
}
