#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

void create(int* arr, int SIZE, int MIN, int MAX)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }
}

void Print(int* arr, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << setw(4) << arr[i];
    cout << endl;
}

int FindMin(int* arr, int SIZE)
{
    int minVal = arr[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }
    return minVal;
}

template <typename T>
void SecondCreate(T* arr, const int SIZE, T MIN, T MAX)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }
}

template <typename T>
void SecondPrint(T* arr, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << setw(4) << arr[i];
    cout << endl;
}

template <typename T>
int SecondFindMin(T* arr, int SIZE)
{
    int minVal = arr[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main()
{
    srand((unsigned)time(NULL));

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 10;
    int MIN = -10;
    int MAX = 10;

    int* arr = new int[SIZE];
    create(arr, SIZE, MIN, MAX);

    Print(arr, SIZE);
    cout << endl;
    cout << "count = " << FindMin(arr, SIZE) << endl;

    SecondCreate(arr, SIZE, MIN, MAX);

    SecondPrint(arr, SIZE);
    cout << endl;
    cout << "SecondCount = " << SecondFindMin(arr, SIZE) << endl;

    delete[] arr;

    return 0;
}
