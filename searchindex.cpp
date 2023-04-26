//Ejemplo de buscador que podemos ocupar
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Define the array of names to search through
    string names[] = {"Alice", "Bob", "Charlie", "David", "Eve"};

    // Ask the user for the name to search for
    string searchName;
    cout << "Enter a name to search for: ";
    cin >> searchName;

    // Search for the name in the array
    bool found = false;
    int index;
    for (int i = 0; i < 5; i++) {
        if (names[i] == searchName) {
            found = true;
            index = i;
            break;
        }
    }

    // Print the result of the search
    if (found) {
        cout << searchName << " was found at index " << index << endl;
    } else {
        cout << searchName << " was not found" << endl;
    }
    return 0;
}
