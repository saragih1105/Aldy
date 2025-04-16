#include <iostream>
#include <string>
using namespace std;

string getGrade(int nilai) {
    if (nilai >= 85) {
        return "A";
    } else if (nilai >= 70) {
        return "B";
    } else if (nilai >= 60) {
        return "C";
    } else if (nilai >= 50) {
        return "D";
    } else {
        return "E";
    }
}

int main() {
    // Data mahasiswa
    string nama[10] = {"Edo", "Eka", "Sri", "Dina", "Doni", "Dinda", "Panji", "Andi", "Titi", "Tika"};
    int nilai[10] = {90, 85, 70, 60, 50, 30, 84, 75, 52, 48};

    // Menampilkan hasil
    cout << "No\tNama\t\tNilai\tGrade" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i + 1 << "\t" << nama[i] << "\t\t" << nilai[i] << "\t" << getGrade(nilai[i]) << endl;
    }

    return 0;
}