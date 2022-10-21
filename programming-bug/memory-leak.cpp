#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void memory_leak()
{
    int *ptr = (int*)malloc(sizeof(int));
    return; // return without free ptr causes memory leak  
}

void avoid_memory_leak()
{
    int *ptr = (int*)malloc(sizeof(int));
    free(ptr); // free ptr to avoid memory leak
    return;
}

int main(int argc, char const *argv[])
{
    memory_leak();
    avoid_memory_leak();
    return 0;
}
