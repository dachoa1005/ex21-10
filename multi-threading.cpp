#include <iostream>
#include <pthread.h>
#include <thread>
#include <chrono>
#include <unistd.h>

using namespace std;

void printA()
{
    while (true)
    {
        sleep(0.2);
        cout << "A" << endl;
    }
}

void printB()
{
    while (true)
    {
        sleep(0.3);
        cout << "B" << endl;
    }
}

void printC()
{
    while (true)
    {
        sleep(0.5);
        cout << "C" << endl;
    }
}

int main(int argc, char const *argv[])
{
    thread th1(printA);
    thread th2(printB);
    thread th3(printC);

    th1.join();
    th2.join();
    th3.join();

    return 0;
}
