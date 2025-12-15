#include <iostream>
using namespace std;

int main() {
    int k, i = 1, sum_k = 0, number;

    cout << "Enter the amount of integers to sum = ";
    cin >> k;
    if (k <= 0) {
        cout << "It's impossible to count." << endl;
        return 0; 
    }

    do {
        cout << "Enter integer nr. " << i << ": ";
        while (!(cin >> number)) { 
            cout << "Invalid input. Please enter an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }
        sum_k += number;
        i++;
    } while (i <= k);

    cout << "The total sum of " << k << " integers is: " << sum_k << endl;
    return 0;
}
