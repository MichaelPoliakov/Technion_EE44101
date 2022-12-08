// 123456789
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define LEN_OF_S 1000
#define LEN_OF_HIST 10

int isNumber(const char*);
unsigned int charToNumber(const char*);
void printArray(const int[]);

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[LEN_OF_S];
    int hist[LEN_OF_HIST] = {0};
    if(fscanf(stdin,"%s", s) < 1) exit(0);
    char* tmp_char_of_string = s;
    while (*tmp_char_of_string){ //string end by NULL char.
        if (isNumber(tmp_char_of_string)) hist[charToNumber(tmp_char_of_string)]++;
        tmp_char_of_string++;  //pointers arithmetic
    }
    /* #TODO: printing results.*/
    printArray(hist);
    return 0;
}

int isNumber(const char* ch){
    int char_as_num = (int) *ch;
    if(((int)'0' <= char_as_num) && (char_as_num <= (int)'9'))
        return 1;
    else
        return 0;
}

unsigned int charToNumber(const char* ch){
    return (int) *ch - (int)'0';
}

void printArray(const int* hist){
    int i = 0;
    for(; i < LEN_OF_HIST - 1; ++i)
        fprintf(stdout, "%d ", hist[i]);
    fprintf(stdout, "%d\n", hist[i]);
    return;
}
