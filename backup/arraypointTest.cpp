#include <array>
#include <iostream>
using namespace std;
void print(array<int, 4>* a);
int main(int argc, char const* argv[]) {
    array a{1, 2, 3, 4};
    print(&a);
}

void print(array<int, 4>* a) {
    for (int i = 0; i < int(a->size()); i++) {
        cout << a->at(i) << " ";
    }
}
