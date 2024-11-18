#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

 class Harl
{
    public:
        Harl();
        ~Harl();
        void complain( std::string level);
        void complain(const char* level);
        void switch_function(std::string &level);
        void declaration();
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

};


#endif