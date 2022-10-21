#include <iostream>
#include <pthread.h>
#include <chrono>
#include <unistd.h>

using namespace std;

#define SE 1000000

void *printA(void *)
{
    while (1)
    {
        usleep(0.2 * SE);
        cout << "A" << endl;
    }
}

void *printB(void *)
{
    while (true)
    {
        usleep(0.3 * SE);
        cout << "B" << endl;
    }
}

void *printC(void *)
{
    while (true)
    {
        usleep(0.5 * SE);
        cout << "C" << endl;
    }
}

int main(int argc, char const *argv[])
{
    pthread_t threadA, threadB, threadC;
    
    pthread_create(&threadA, NULL, printA, NULL);
    pthread_create(&threadB, NULL, printB, NULL);
    pthread_create(&threadC, NULL, printC, NULL);

    pthread_join(threadA, NULL);
    pthread_join(threadB, NULL);
    pthread_join(threadC, NULL);

    return 0;
}
