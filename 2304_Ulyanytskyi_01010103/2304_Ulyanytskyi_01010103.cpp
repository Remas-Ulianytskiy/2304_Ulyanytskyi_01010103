#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    int rows = 0;
    char space = ' ';
    char symbol = '*';

    cout << "¬вед≥ть к≥льк≥сть р€дк≥в трикутника: ";
    cin >> rows;
    cout << endl;

    for (int i = 0; i < rows; i++) {

        for (int j = rows - i; j > 0; j--)
            cout << space;

        for (int l = 0; l <= i; l++)
        {
            cout << symbol;

            if (l < i)
                cout << space;
        }

        cout << endl;
    }

    return 0;
}