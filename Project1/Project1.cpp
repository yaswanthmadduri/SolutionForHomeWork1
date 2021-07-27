// About main function and its arguments : https://www.ibm.com/docs/en/zos/2.2.0?topic=functions-main-function

#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    std::cout << "Hello World from Project 1 ! \n" << endl;

    if (argc > 1) {

        //displaying num of arguments
        std::cout << "No of arguments to the main function in Project 1 are " << argc << endl << endl;

        //displaying each argument with iteration
        std::cout << "The arguments given to the main function are : " << endl;

        for (int l_index = 1; l_index < argc; l_index++) {
            std::cout << argv[l_index] << endl;
        }

    }

    else {
        std::cout << "No arguments sent to the main function." << endl << endl;
        std::cout << "Program name being executed is : " << argv[0] << endl << endl;
    }

    return 0;
}