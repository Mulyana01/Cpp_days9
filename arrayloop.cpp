#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[5];

    int maximum, minimum;

    double rataRata = 0;

    // Input 5 bilangan bulat

    cout << " Masukkan 5 Bilangan bulat: \n";

    for (int i = 0; i < 5; i++)
    {
        cout << " Bilangan ke-" << (i + 1) << ": ";
        cin >> arr[i];
        rataRata += arr[i];
        if (i == 0)
        {
            maximum = minimum = arr[i];
        }
        else
        {
            if (arr[i] > maximum)
                maximum = arr[i];
            if (arr[i] < minimum)
                minimum = arr[i];
        }
    }
    // MEnghitung Rata Rata
    rataRata /= 5;
    // OUtput HAsil

    cout << "\n Bilangan Terbesar : " << maximum << endl;
    cout << "\n Bilangan Terkecil : " << minimum << endl;
    cout << " Rata-rata : " << rataRata << endl;

    return 0;
}
