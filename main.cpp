// Komandniy proyekt. Grupa PI-53.
// Komanda: Nazin (variant 79, techlead), Timofeyev (variant 86), Stepkin (variant 25).
#include <iostream>
// === BLOK PODKLYUCHENIY: kazhdyy uchastnik dobavlyayet svoy zagolovochnyy fayl ===
// #include "nazin.h"
// #include "timofeev.h"
// #include "stepkin.h"
// === KONETS BLOKA PODKLYUCHENIY ===
using namespace std;
int main() {
    int choice;
    do {
        cout << "\n=== Komandnyy proyekt: sbornik raschyotov ===\n";
        // === BLOK MENYU: kazhdyy uchastnik dobavlyayet svoi punkty ===
        // === KONETS BLOKA MENYU ===
        cout << "0. Vykhod\n";
        cout << "Vyberite punkt: ";
        cin >> choice;
        switch (choice) {
            // === BLOK OBRABOTKI: kazhdyy uchastnik dobavlyayet svoi case ===
            // === KONETS BLOKA OBRABOTKI ===
            case 0:
                cout << "Rabota zavershena.\n";
                break;
            default:
                cout << "Takogo punkta net.\n";
        }
    } while (choice != 0);
    return 0;
}
