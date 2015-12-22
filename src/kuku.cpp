#include "kuku.h"

void Kuku::print_table(bool add){
    for(int i = 1; i <= x_; i++){
        for(int j = 1; j <= y_; j++){
            printf("%2d ", add ? i + j : i * j);
        }
        printf("\n");
    }
}

