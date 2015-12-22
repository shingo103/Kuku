#include "kuku.h"

using namespace std;

void print_table(int x, int y, bool add){
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= y; j++){
            printf("%2d ", add ? i + j : i * j);
        }
        printf("\n");
    }
}


void show_help(){
    cerr << "Usage: kuku [-h|--help] [-v|--version] [-a|--add] x y" << endl;
    cerr << "Positional arguments:" << endl;
    cerr << "\tx\tthe number of rows (integer)" << endl;
    cerr << "\ty\tthe number of columns (integer)" << endl;
    cerr << "Optional arguments:" << endl;
    cerr << "\t-h --help\tshow this message and exit" << endl;
    cerr << "\t-v --version\tshow program version and exit" << endl;
    cerr << "\t-a --add\tadd two integers, not multiply" << endl;
}

bool is_int(char* s){
    char *p = s;
    while(*p != '\0'){
        if(!isdigit(*p)) return false;
        p++;
    }
    return true;
}

