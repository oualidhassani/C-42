#include "main.hpp"

int main(int ac, char **av)
{
    if(ac == 4)
    {
        std::string file;
        std::string s1;
        std::string s2;
        file = av[1];
        s1 = av[2];
        s2 = av[3];
        
        if(s1.empty() || s2.empty())
        {
            std::cout << "there is an empty string " << std::endl;
            return 1;
        }
        
        std::ifstream inFile(file); 
        
        if(!inFile)
        {
            std::cout << "Failed to open the file" << std::endl;
            return 1;
        }
        
        std::string content;
        std::string line;
        
        while(getline(inFile, line))
        {
            content += line + "\n";
        }
        inFile.close();
        
        size_t pos = 0;
        while((pos = content.find(s1, pos)) != std::string::npos)
        {
            content.erase(pos, s1.length());
            content.insert(pos, s2);
            pos += s2.length();
        }
        
        if (!content.empty() && content.back() == '\n')
            content.pop_back();
            
        std::string outfile = file + ".replace";
        std::ofstream Outfile(outfile);
        if(!Outfile)
        {
            std::cout << "Failed to open the file" << std::endl;
            return 1;
        }
        
        Outfile << content;
        Outfile.close();
    }
    else
        std::cout << "need to enter arguments like this: <file name> s1 s2" << std::endl;
    
    return 0;
}