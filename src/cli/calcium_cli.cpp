//Standard Library
#include <iostream>
#include <sstream>

#include <string>

//Source Includes
#include "quantity.hpp"
#include "parser.hpp"

int main(int arg_total, char* arg_list[])
{
    if (arg_total <= 1) return 0;
    
    //Convert Executable Arguments to String
    std::string program_args;
    for (int i = 1; i <= arg_total; i++)
    {   //Push Into String
        program_args.push_back(**(arg_list + i));
        program_args.append(" ");
    }
    
    std::cout << program_args;
    
    return 0;
}
