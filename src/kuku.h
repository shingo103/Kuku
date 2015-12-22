#include<iostream>

using namespace std;

const std::string VERSION = "1.0.0";

class Kuku{
    private:
    const int x_;
    const int y_;
    public:
    Kuku(const int x, const int y):x_(x), y_(y){}
    void print_table(bool add);
};
