//#include<unistd.h>
#include<getopt.h>
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


int main(int argc, char *argv[]){
    struct option longopts[] = {
        {"help", no_argument, NULL, 'h'},
        {"version", no_argument, NULL, 'v'},
        {"add", no_argument, NULL, 'a'}
    };
    bool add_flag = false;
    int opt;
    while((opt = getopt_long(argc, argv, "hva", longopts, NULL)) != -1){
        switch(opt){
        case 'h':
            show_help();
            return 1;
            break;
        case 'v':
            cout << "kuku version "<< VERSION << endl;
            return 1;
            break;
        case 'a':
            add_flag=true;
            break;
        }
    }
    if(argc - optind != 2){
        cerr << "Error: Give two integers." << endl;
        show_help();
    }
    else{
        int x = atoi(argv[optind]);
        int y = atoi(argv[optind + 1]);
        print_table(x, y, add_flag);
    }
    return 0;
}


