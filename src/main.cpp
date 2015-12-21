#include<unistd.h>
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

const string VERSION = "1.0.0";

void print_table(int x, int y, bool add){
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= y; j++){
            printf("%2d ", add ? i + j : i * j);
        }
        printf("\n");
    }
}


void print_help(){
    
}

int main(int argc, char *argv[]){
    bool add = false;
    int opt;
    while((opt = getopt(argc, argv, "hvax:y:")) != -1){
        switch(opt){
        case 'h':
            print_help();
            return 1;
            break;
        case 'v': {
            cout << "kuku version "<< VERSION << endl;
            return 1;
            break;
            }
        case 'a':
            add=true;
            break;
        }
    }
    if(argc - optind != 2){
        cout << "Give two integers." << endl;
    }
    else{
        int x = atoi(argv[optind]);
        int y = atoi(argv[optind + 1]);
        print_table(x, y, add);
    }
    return 0;
}


