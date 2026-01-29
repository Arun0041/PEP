// basic of vectors
#include <iostream>
#include <vector>
using namespace std;

int main(){
    // declaring a vector
    vector<int> v;

    // adding elements to the vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // accessing elements using index
    cout << "Element at index 1: " << v[1] << endl;

    // iterating through the vector
    cout << "Elements in the vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // removing the last element
    v.pop_back();
    cout << "After pop_back, size of vector: " << v.size() << endl;

    return 0;
}