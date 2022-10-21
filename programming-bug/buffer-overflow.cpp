#include <iostream>
#include <cstring>

using namespace std;

char* buffer_overflow(char* str, int n) 
{
    char* result = new char[n];
    strcpy(result, str);
    return result;
}

char* fix(char* str, int n) 
{
    char* result = new char[n];
    for (int i = 0; i < strlen(str); i++) 
    {
        result[i] = str[i];
    }
    return result;
}

int main(int argc, char const *argv[])
{
    char buffer[10];
    char str[] = "Hello World, this is a buffer overflow";
    cout << buffer_overflow(str, 10);
    cout << endl;
    
    cout << fix(str, 10);
    cout << endl;
}
