#include <stdlib.h>
#include <iostream>
#include <string>
#include <unistd.h>

void PrintHello(int incr) {
    std::string inc = "";
    for(int i=0; i!=incr; i++) {
        inc += " ";
    }

    std::cout <<
    inc << R"(     ______________________________________________________________________________  )" << '\n' <<
    inc << R"(    |    __      __     _________      __             __             __________    | )" << '\n' <<
    inc << R"(    |   |\_\    |\_\   |\________\    |\_\           |\_\           |\_________\   | )" << '\n' <<
    inc << R"(    |   || |    || |   ||  _______|   || |           || |           ||  _____  |   | )" << '\n' <<
    inc << R"(    |   || |____|| |   || |______     || |           || |           || |    || |   | )" << '\n' <<
    inc << R"(    |   || |____\| |   || |______\    || |           || |           || |    || |   | )" << '\n' <<
    inc << R"(    |   ||  _____  |   ||  _______|   || |           || |           || |    || |   | )" << '\n' <<
    inc << R"(    |   || |    || |   || |______     || |______     || |______     || |____|| |   | )" << '\n' <<
    inc << R"(    |   || |    || |   || |______\    || |______\    || |______\    || |____\| |   | )" << '\n' <<
    inc << R"(    |   \|_|    \|_|   \|_________|   \|_________|   \|_________|   \|_________|   | )" << '\n' <<
    inc << R"(    |______________________________________________________________________________|

)" << inc << '\n';
}

void ClearScreen() {
    system("clear");
    // std::cout << std::string(100, '\n') << std::endl;
}

void UpDown(int vert) {
    std::cout << std::string(vert, '\n') << std::endl;
}

int main() {

    char input;
    bool flag = false;
    unsigned int microsecond = 1000000;
    int incr = 1;
    int vert = 1;

    int direction = 1;
    int directionVert = 1;



    while(!flag) {
        //std::cin >> input;
        /*
        if(input == 'a') {
            flag = true;
        }
        */
        if (incr == 0 || incr == 57) {direction = -direction;}
        if (vert == 0 || vert == 23) {directionVert = -directionVert;}
        incr += direction;
        vert += directionVert;

        ClearScreen();
        UpDown(vert);
        PrintHello(incr);
        usleep(0.1 * microsecond);
    }
    return 0;
}
