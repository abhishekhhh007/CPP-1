#include <iostream>
#include <string.h>
using namespace std;

class students {
public:
    string name;
    int id;
    int subject;
    float marks[10];
    float average;
};

int main() {
    int n, i, j;
    cout << "Enter number of students: ";
    cin >> n;

    students s[n];

    for (i = 0; i < n; i++) {
        cout << "Enter student name " << i + 1 << ": ";
        cin >> s[i].name;

        cout << "Roll no: ";
        cin >> s[i].id;

        cout << "Enter number of subjects: ";
        cin >> s[i].subject;

        int total = 0;

        for (j = 0; j < s[i].subject; j++) {
            cout << "Subject marks " << j + 1 << ": ";
            cin >> s[i].marks[j];
            total = total + s[i].marks[j];
        }

        cout << "Total marks: " << total << "\n";

        s[i].average = static_cast<float>(total) / s[i].subject;

        cout << "Average marks: " << s[i].average << "\n";
    }

    return 0;
}
