#include <iostream>
#include <cstdlib>

using namespace std;

void gen_rand_array(int* arr);
void quicksort (int* arr, int low, int high);

int main() {
    int ini[100];
    int len;

    cout << "Array out-of-order" << endl;
    gen_rand_array(ini);
    len = sizeof (ini) / sizeof (ini[0]);
    quicksort(ini, 0, len-1);
    cout << "Array in order" << endl;

    for (int i = 0; i < len; i++)
    {
        cout << "No." << i << ": ";
        cout << ini[i] << endl;
    }

    return 0;
}

void gen_rand_array(int* arr)
{
    for (int i = 0; i < 100; i++)
    {
        arr[i] = 1 + rand() % 1000;
        cout << arr[i] << " ";
    }
}