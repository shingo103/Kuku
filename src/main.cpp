#include<unistd.h>
#include<iostream>
using namespace std;

void print_table(int x, int y, bool add){
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= y; j++){
            printf("%2d ", add ? i + j : i * j);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]){
    int x = 9;
    int y = 9;
    bool add = false;
    int opt;
    while((opt = getopt(argc, argv, "ax:y:")) != -1){
        switch(opt){
        case 'a' :
            add=true;
            break;
        case 'x':
            x = atoi(optarg);
            break;
        case 'y':
            y = atoi(optarg);
            break;
        }
    }
    print_table(x, y, add);
    return 0;
}


