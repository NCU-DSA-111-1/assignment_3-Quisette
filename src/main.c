#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ITERATION 20

int main(){
    char str[200];
    system("./obj/crapwordgen.o");
    puts("---------Arithmetic Encoding-----------");
    for(int i = 1; i <= ITERATION; i++){
        strcpy(str, "\0");
        printf("Arith Attempt #%d\n\n", i);
        sprintf(str, "./obj/arth.o -e ./craptext/crap%d.txt ./io_files/arith/arith_out", i);
        system(str);
        system("./obj/arth.o -d ./io_files/arith/arith_out ./io_files/arith/arith_back.txt");
        puts("-----------------------");
    }
    puts("---------Huffmann Encoding-----------");
    for(int i = 1; i <= ITERATION; i++){
        printf("Huff Attempt #%d\n\n", i);
        strcpy(str, "\0");
        sprintf(str, "./obj/huff.o -e ./craptext/crap%d.txt -b ./io_files/huff/huff_booktable.txt -o ./io_files/huff/huff_out.txt", i);
        system(str);
        system("./obj/huff.o -d ./io_files/huff/huff_out -b ./io_files/huff/huff_booktable.txt -o io_files/huff/huff_back.txt");
        puts("-----------------------");
    }

}
