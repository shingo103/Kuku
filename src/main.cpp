#include "kuku.h"

bool is_int(char* s){
    char *p = s;
    while(*p != '\0'){
        if(!isdigit(*p)) return false;
        p++;
    }
    return true;
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
        return 1;
    } else if(!is_int(argv[optind]) || !is_int(argv[optind+1])){
        if(!is_int(argv[optind]))
            cerr << "Error: Arguments must be integers. '" << argv[optind] << "' was given." << endl;
        if(!is_int(argv[optind+1]))
            cerr << "Error: Arguments must be integers. '" << argv[optind+1] << "' was given." << endl;
        return 1;
    } else {
        int x = atoi(argv[optind]);
        int y = atoi(argv[optind + 1]);
        Kuku kuku(x, y);
        kuku.print_table(add_flag);
    }
    return 0;
}


