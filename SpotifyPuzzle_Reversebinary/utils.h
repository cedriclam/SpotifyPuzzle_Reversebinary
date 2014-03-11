//
//  utils.h
//  SpotifyPuzzle
//
//  Created by Cedric Lamoriniere on 7/11/13.
//  Copyright (c) 2013 Cedric Lamoriniere. All rights reserved.
//

#ifndef __SpotifyPuzzle__utils__
#define __SpotifyPuzzle__utils__

#include <iostream>
#include <string>

namespace tools {
    
    class Converter{
    public:
        Converter(){};
        virtual ~Converter(){};
        
        /**
         * \brief use to convert an Integer to a Binary number in string
         */
        static int BinString2Int(const std::string& iString);
        static std::string Int2BinString(const int &iInt);
        
        static std::string RevertBinString(const std::string &iString);
        
          };
  
    class Validation{
    public:
        Validation(){};
        virtual ~Validation(){};
        
        static bool IsPositiveInteger(std::string& s);

    };
  

}

#endif /* defined(__SpotifyPuzzle__utils__) */
