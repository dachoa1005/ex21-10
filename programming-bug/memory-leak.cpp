#include <iostream>

using namespace std;

void memory_leak()
{
    int *ptr1 = new int;
    int *ptr = (int*)malloc(sizeof(int));
    cout << "Memory allocated: " << sizeof(ptr) << " bytes" << endl;
    
}

void handle_memory_leak()
{
    int *ptr = new int[10000];
    // show how many bytes are allocated
    cout << "Memory allocated: " << sizeof(ptr) << " bytes" << endl;
    delete[] ptr;
    // after delete, the memory is freed
    cout << "After delete, memory allocated: " << sizeof(ptr) << " bytes" << endl;
}

int main(int argc, char const *argv[])
{
    memory_leak();
    handle_memory_leak();
    return 0;
}
