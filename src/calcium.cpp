//Standard Library
#include <iostream>

#include <string>

//Source Includes
#include "calcium/calcium.hpp"
#include "calcium/quantity.hpp"
#include "calcium/core/translator.hpp"

int main(int arg_total, char** arg_list)
{
    //File Declarations
    
    //Check if Argument List is Empty
    if (arg_total <= 1) return 0;
    
    //Convert Executable Arguments to String, Separated with Spaces
    std::string program_args;
    for (int i = 1; i < arg_total; i++) program_args.append(((std::string) arg_list[i]) + " ");
    
    

    return 0;
}
