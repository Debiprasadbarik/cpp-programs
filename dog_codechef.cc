#include <iostream>
using namespace std;

int main() {
    int X, vet1, bath1, eat1, vet2, bath2, eat2, vet3, bath3, eat3;
    int smiling_dogs = 0;

    // read input values
    cin >> X;
    cin >> vet1 >> bath1 >> eat1;
    cin >> vet2 >> bath2 >> eat2;
    cin >> vet3 >> bath3 >> eat3;

    // check if Diksha can make each dog smile
    if (X >= vet1 || X >= bath1 || X >= eat1) {
        if (vet1 <= bath1 && vet1 <= eat1 && X >= vet1) {
            X -= vet1;
            smiling_dogs++;
        } else if (bath1 <= vet1 && bath1 <= eat1 && X >= bath1) {
            X -= bath1;
            smiling_dogs++;
        } else if (eat1 <= vet1 && eat1 <= bath1 && X >= eat1) {
            X -= eat1;
            smiling_dogs++;
        }
    }

    if (X >= vet2 || X >= bath2 || X >= eat2) {
        if (vet2 <= bath2 && vet2 <= eat2 && X >= vet2) {
            X -= vet2;
            smiling_dogs++;
        } else if (bath2 <= vet2 && bath2 <= eat2 && X >= bath2) {
            X -= bath2;
            smiling_dogs++;
        } else if (eat2 <= vet2 && eat2 <= bath2 && X >= eat2) {
            X -= eat2;
            smiling_dogs++;
        }
    }

    if (X >= vet3 || X >= bath3 || X >= eat3) {
        if (vet3 <= bath3 && vet3 <= eat3 && X >= vet3) {
            X -= vet3;
            smiling_dogs++;
        } else if (bath3 <= vet3 && bath3 <= eat3 && X >= bath3) {
            X -= bath3;
            smiling_dogs++;
        } else if (eat3 <= vet3 && eat3 <= bath3 && X >= eat3) {
            X -= eat3;
            smiling_dogs++;
        }
    }

    // print the number of dogs Diksha can make smile
    cout << smiling_dogs << endl;
    return 0;
}
