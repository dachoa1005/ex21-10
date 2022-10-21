#include <iostream>
#include <cstring>

using namespace std;

char* buffer_overflow(char buffer[])
{
    char *result = new char[10];
    strcpy(result, buffer);
    return result;
}

char* fix(char buffer[])
{
    char *result = new char[strlen(buffer)];
    strcpy(result, buffer);
    return result;
}

int main(int argc, char const *argv[])
{
    char buffer[] = "Hello Worldaaaaaaaaaaaaaaaa";
    // cout << buffer_overflow(buffer) << endl;
    cout << fix(buffer) << endl;
    return 0;
}
