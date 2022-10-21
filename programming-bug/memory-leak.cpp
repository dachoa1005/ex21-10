#include <iostream>

using namespace std;

int total_memory_leak = 0;

void memory_leak()
{
    int *ptr = (int*)malloc(sizeof(int));
    cout << "Memory allocated: " << sizeof(ptr) << " bytes" << endl;
    total_memory_leak += sizeof(ptr);   
}

void avoid_memory_leak()
{
    int *ptr = (int*)malloc(sizeof(int));
    cout << "Memory allocated: " << sizeof(ptr) << " bytes" << endl;
    free(ptr);
}

int main(int argc, char const *argv[])
{
    total_memory_leak = 0;
    for (int i = 0; i < 100; i++)
    {
        avoid_memory_leak();
    }
    cout << "Total memory leak: " << total_memory_leak << " bytes" << endl;
    return 0;
}
