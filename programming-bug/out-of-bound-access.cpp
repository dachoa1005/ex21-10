#include <iostream>
#include <cstring>

using namespace std;

char* out_of_bound(char str[], int n)
{
    char *result = new char[n];
    for (int i = 0; i < n; i++)
    {
        result[i] = str[i];
    }
    return result;
}

char* fix(char str[], int n)
{
    char *result = new char[n];
    for (int i = 0; i < n; i++)
    {
        result[i] = str[i];
        if (str[i] == '\0')
        {
            break;
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    char str[] = "Hello World";
    
    char *test = out_of_bound(str, 30);
    for (int i = 0; i < 30; i++)
    {
        cout << test[i];
    }
    cout << endl;

    char *test2 = fix(str, 30);
    for (int i = 0; i < 30; i++)
    {
        cout << test2[i];
    }
    // cout << strlen(test2) << endl;
    cout << endl;
    return 0;
}