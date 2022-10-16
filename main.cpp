#include <iostream>

using namespace std;

int get_number()
{
    int n;
    
    cin >> n;

    return n;
}

int main()
{
    int odd_count = 0;
    int total = 0;

    cout << "Enter N: ";

    int N = get_number();

    while (N > 0)
    {
        cout << "Enter integer: ";
        int num = get_number();

        if (num % 2 != 0)
        {
            odd_count ++;
            total += num;
        }

        N--;
    }

    float avg = (float) total / odd_count;

    cout << avg;
}
