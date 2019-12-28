//
//  main.cpp
//  6Tree
//
//  Created by Zhizhu Liu on 2019/11/16.
//

// Programming language standard: C++11.
// Operation system environment: MacOS, Linux.

#include <iostream>
#include <ctime>
#include "definition.hpp"
#include "function1_T.hpp"
#include "function2_G.hpp"
#include "function3_L.hpp"
#include "function4_R.hpp"

using namespace std;

void work(int argc, const char * argv[])
{
    // Analyze the first instruction, if it's not -T/G/L/R, exit.
    if (argc <= 1 || string(argv[1]).length() != 2 || argv[1][0] != '-')
    {
        cout << "[Error] The first instruction is incorrect." << endl;
    }
    else
    {
        switch (argv[1][1]) {
            case 'T':
                // File translation:
                // 6tree -T (-in-std/b* *input file name*) (-out-std/b* *output file name*)
                f1_access(argc, argv);
                break;
            case 'G':
                // Space tree generation:
                // 6tree -G (-in-b* *address file name*) (-out-tree *output folder name*)
                f2_access(argc, argv);
                break;
            case 'L':
                // Local simulation search based on space tree:
                // 6tree -L (-in-tree *tree folder name*) (-test-std/b* *test address file name*) (-out-res *result folder name*)
                f3_access(argc, argv);
                break;
            case 'R':
                // Real Internet-wide search based on space tree:
                // 6tree -R (-in-tree *tree folder name*) (-out-res *result folder name*)
                f4_access(argc, argv);
                break;
            default:
                // Analyze the first instruction, if it's not -T/G/L/R, exit.
                cout << "[Error] The first instruction is incorrect." << endl;
        }
    }
}

int main(int argc, const char * argv[])
{
    work(argc, argv);
    return 0;
}
