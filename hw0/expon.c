// 123456789
#include <stdio.h>

unsigned long long findMinN(const unsigned long long*);
unsigned long long llPow(const unsigned long long*, const unsigned long long*);
int main() {
    unsigned long long A;
    if(scanf("%llu", &A) != 1) return 0;
    fprintf(stdout, "%llu\n\n", findMinN(&A));
    return 0;
}

unsigned long long findMinN(const unsigned long long* A){
    unsigned long long N = 1;
    while((llPow(&N,&N) % *A) != 0)
        N++;
    return N;
}

unsigned long long llPow(const unsigned long long* base, const unsigned long long* power){
    unsigned long long out_num = 1;
    for(unsigned long long i = 1; i <= *power; i++)
        out_num *= *base;
    return out_num;
}
