#include <iostream>
#include <pthread.h>
#include <fstream>
#include <unistd.h>

#define SECOND 1000000

using namespace std;

int number = 0;

void *inc_by_1(void *)
{
    while (1)
    {
        usleep(0.4 * SECOND);
        number += 1;
        cout << "Thread 1: " << number << endl;
    }
}

void *dec_by_2(void *)
{
    while (1)
    {
        usleep(0.6 * SECOND);
        number -= 2;
        cout << "Thread 2: " << number << endl;
    }
}

int main(int argc, char const *argv[])
{
    pthread_t thread1, thread2;

    pthread_create(&thread1, NULL, inc_by_1, NULL);
    pthread_create(&thread2, NULL, dec_by_2, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    return 0;
}