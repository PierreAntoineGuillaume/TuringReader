//
// Created by pierreantoine on 11/10/2019.
//

#include <iostream>
#include "turingparser.hpp"


int main(int argc, char **argv)
{
    try
    {
        freopen("test.json", "r", stdin);
        yyparse();
    }
    catch (const std::runtime_error & e)
    {
        std::cerr << "Bison error : " << e.what() << std::endl;
    }
    return 0;
}
