#include <iostream>
#include <pthread.h>
#include <chrono>
#include <unistd.h>

using namespace std;

#define SECOND 1000000 // 1 second = 1000000 microseconds

void *printA(void *)
{
    while (true)
    {
        usleep(0.2 * SECOND);
        cout << "A" << endl;
    }
}

void *printB(void *)
{
    while (true)
    {
        usleep(0.3 * SECOND);
        cout << "B" << endl;
    }
}

void *printC(void *)
{
    while (true)
    {
        usleep(0.5 * SECOND);
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
