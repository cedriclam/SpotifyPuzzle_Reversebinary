//
//  utils.cpp
//  SpotifyPuzzle
//
//  Created by Cedric Lamoriniere on 7/11/13.
//  Copyright (c) 2013 Cedric Lamoriniere. All rights reserved.
//

#include "utils.h"
#include <bitset>
#include <sstream>
#include <algorithm>
#include <iostream>
#include <algorithm>    // for count, count_if
#include <functional>   // bind2nd, less
#include <iostream>     // for cout, endl
#include <vector>       // for vector

namespace tools {

    int Converter::BinString2Int(const std::string& iString)
    {
        std::bitset< 64 > ouput;
        std::istringstream iss(iString);
        iss >> ouput;
        return (int)ouput.to_ulong();
    }
    
    std::string Converter::Int2BinString(const int &iInt){
        std::string output = std::bitset< 64 >(iInt).to_string();
        return std::string(output.substr(output.find("1")));
    }
    
    std::string Converter::RevertBinString(const std::string &iString){
        return std::string(iString.rbegin(),iString.rend());
    }
    
    bool Validation::IsPositiveInteger(std::string& iString)
    {
        for (auto& iter : iString){
            if (!std::isdigit(iter))
            {
                return false;
            }
        }
        
        return true;
    }


}