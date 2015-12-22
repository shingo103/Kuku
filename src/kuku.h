#include<getopt.h>
#include<iostream>
#include<fstream>
#include<string>

const std::string VERSION = "1.0.0";

void print_table(int x, int y, bool add);
void show_help();
bool is_int(char *s);
