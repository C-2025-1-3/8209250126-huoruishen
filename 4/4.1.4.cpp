#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }
    while (i < size1) {
        list3[k++] = list1[i++];
    }
    while (j < size2) {
        list3[k++] = list2[j++];
    }
}
int main()
{
    const int MAX = 80;
    int list1[MAX], list2[MAX], list3[MAX * 2];
    int size1 = 0, size2 = 0;

    cout << "Enter list1:";
    if (!(cin >> size1) || size1 < 0 || size1 > MAX) {
        cerr << "Invalid size for list1 (must be 0.." << MAX << ").\n";
        return 1;
    }
    for (int i = 0; i < size1; ++i) {
        cin >> list1[i];
    }

    cout << "Enter list2:";
    if (!(cin >> size2) || size2 < 0 || size2 > MAX) {
        cerr << "Invalid size for list2 (must be 0.." << MAX << ").\n";
        return 1;
    }
    for (int i = 0; i < size2; ++i) {
        cin >> list2[i];
    }

    merge(list1, size1, list2, size2, list3);

    cout << "The merged list is ";
    for (int i = 0; i < size1 + size2; ++i) {
        if (i > 0) cout << " ";
        cout << list3[i];
    }
    cout << endl;
	return 0;
}