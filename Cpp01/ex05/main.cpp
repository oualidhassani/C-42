#include "Harl.hpp"

int main()
{
    Harl test;

    test.complain(NULL);
    test.complain("debug");
    test.complain("warning");
    test.complain("info");
    test.complain("a");
    
}