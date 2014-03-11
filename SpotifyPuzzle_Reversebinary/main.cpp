//
//  main.cpp
//  SpotifyPuzzle_Reversebinary
//
//  Created by Cedric Lamoriniere on 11/03/14.
//  Copyright (c) 2014 Cedric Lamoriniere. All rights reserved.
//

#include <iostream>
#include <string>


#include "utils.h"

int main(int argc, const char * argv[])
{
    std::string input;
    std::cin >> input;
    if (!tools::Validation::IsPositiveInteger(input))
    {
        std::cout << "Error: " << input << " is not an integer";
        return 1;
    }
    
    int int_input = atoi(input.c_str());
    std::string string_input = tools::Converter::Int2BinString(int_input);
    std::string string_ouput = tools::Converter::RevertBinString(string_input);
    std::cout << tools::Converter::BinString2Int(string_ouput) << "\n";
    return 0;
}

