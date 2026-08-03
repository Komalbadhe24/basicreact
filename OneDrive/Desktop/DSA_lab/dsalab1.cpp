#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, choice, pos, value;

    // Input initial array
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n===== ARRAY OPERATIONS =====";
        cout << "\n1. Insert Element";
        cout << "\n2. Update Element";
        cout << "\n3. Delete Element";
        cout << "\n4. Display Array";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: // Insertion
            cout << "Enter position (1 to " << n + 1 << "): ";
            cin >> pos;

            if (pos < 1 || pos > n + 1)
            {
                cout << "Invalid Position!";
            }
            else
            {
                cout << "Enter value to insert: ";
                cin >> value;

                for (int i = n; i >= pos; i--)
                {
                    arr[i] = arr[i - 1];
                }

                arr[pos - 1] = value;
                n++;

                cout << "Element inserted successfully.";
            }
            break;

        case 2: // Updation
            cout << "Enter position to update (1 to " << n << "): ";
            cin >> pos;

            if (pos < 1 || pos > n)
            {
                cout << "Invalid Position!";
            }
            else
            {
                cout << "Enter new value: ";
                cin >> value;
                arr[pos - 1] = value;

                cout << "Element updated successfully.";
            }
            break;

        case 3: // Deletion
            cout << "Enter position to delete (1 to " << n << "): ";
            cin >> pos;

            if (pos < 1 || pos > n)
            {
                cout << "Invalid Position!";
            }
            else
            {
                for (int i = pos - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }

                n--;

                cout << "Element deleted successfully.";
            }
            break;

        case 4: // Display
            if (n == 0)
            {
                cout << "Array is empty.";
            }
            else
            {
                cout << "Array Elements: ";
                for (int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            break;

        case 5:
            cout << "Program Ended.";
            break;

        default:
            cout << "Invalid Choice!";
        }

    } while (choice != 5);

    return 0;
}