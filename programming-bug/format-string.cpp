#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // if print with wrong format, it will print the wrong result
    printf("%d %d %d\n", 1, 2, 3, 4); // too many arguments -> 1 2 3
    printf("%d %d %d\n", 1, 2); // too few arguments -> 1 2 0
    printf("%c %d\n",'a','a'); // wrong format -> a 97
    
    return 0;
}
