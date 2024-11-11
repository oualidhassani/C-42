#include <iostream>

int main()
{ 
     std::string str = "HI THIS IS BRAIN";
     std::string  *stringPTR = &str;
     std::string &stringREF = str;

     std::cout << "the address of this: " << &str << std::endl; 
     std::cout << "the address of this: " << stringPTR << std::endl; 
     std::cout << "the address of this: " << &stringREF << std::endl; 

     std::cout << std::endl;
     std::cout << "the value: " << str << std::endl; 
     std::cout << "the value: " << *stringPTR << std::endl; 
     std::cout << "the value: " << stringREF << std::endl; 
     
}
