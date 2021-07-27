// Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// using namespace std : https://www.tutorialspoint.com/cplusplus/cpp_namespaces.htm

#include <iostream>

// learning namespace
using namespace std; //using is a directive
namespace NSpace1 {

    int aInteger = 10;
    int aFunction() {
        cout << "Hello from namespace NSpace 1" << endl;
        return 0;
    }
}

using namespace NSpace1;


int main(int argc, char* argv[])
{
    cout << "Hello World from Project 2 !\n" << endl;

    if (argc > 1) {

        //displaying num of arguments
        cout << "No of arguments to the main function of Project 2 are " << argc << endl;

        //displaying each argument with iteration
        cout << "The arguments given to the main function are : " << endl << endl;

        for (int l_index = 1; l_index < argc; l_index++) {
            cout << argv[l_index] << endl;
        }

    }

    else {
        cout << "No arguments sent to the main function of Project 2." << endl << endl;
        cout << "Program name being executed is : " << argv[0] << endl << endl;
    }


    NSpace1::aFunction();
    cout << NSpace1::aInteger << endl;

    return 0;
}
