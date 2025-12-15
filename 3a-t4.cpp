#include<iostream> 
#include<limits> 
using namespace std;

int main()
{
    int k, i = 1, sum_k = 0, number;

    // Get the amount of integers to sum with validation
    cout << "Enter the amount of integers to sum = ";
    while (!(cin >> k)) {
        cout << "Invalid input! Please enter an integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Use if statement to handle different cases for k
    if (k > 0) {
        cout << "You will be prompted to enter " << k << " integers." << endl;

        do {
            cout << "Enter integer nr. " << i << ": ";

            // Input validation for each integer
            while (!(cin >> number)) {
                cout << "Invalid input! Please enter an integer: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            sum_k += number;
            i++;
        } while (i <= k);

        cout << "The total sum of " << k << " integers is: " << sum_k << endl;
    }
    else if (k == 0) {
        cout << "No integers to sum. The sum is 0." << endl;
    }
    else {
        cout << "Invalid input! Amount cannot be negative." << endl;
        return 1;
    }

    return 0;
}
