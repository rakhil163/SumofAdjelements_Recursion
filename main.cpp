#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Sumadjacent(int count,vector<int>a)
{
if (count==0) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
    return Sumadjacent(count + 1, a);
} else {
    int size = a.size();
    if (a.size() == 1) {
        return;
    }


    for (int i = 0; i < a.size() - 1; i++) {
        a[i] = a[i] + a[i + 1];
        cout << a[i] << "\t";
    }
    cout << endl;
    if (a.size() > 1) {
        a.pop_back();
    }

    return Sumadjacent(count + 1, a);
}
}




int main() {
    Sumadjacent(0,{1,2,3,4});
    return 0;
}