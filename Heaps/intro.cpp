//Heap
// A heap is a specialized tree-based data structure that satisfies the heap property.
// Max Heap: A binary tree where each parent node is greater than or equal to its children. The maximum element is at the root.
// Min Heap: A binary tree where each parent node is less than or equal to its children. The minimum element is at the root.
// Heaps are commonly used to implement priority queues, where the highest (or lowest) priority element is always at the front of the queue. 

//Complete Binary Tree: all levels are completely filled except possibly the last level, which is filled from left to right.
// Heap is not BST.
//For 0 baseded indexing:
// Parent(i) = (i-1)/2
// Left(i) = 2*i + 1
// Right(i) = 2*i + 2

//For 1 baseded indexing:
// Parent(i) = i/2
// Left(i) = 2*i
// Right(i) = 2*i + 1

//Time Complexity: O(log n) for insertion and deletion, O(1) for accessing the maximum or minimum element.


#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
public:
    vector<int> heap;
    void Heapify(int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if (left < heap.size() && heap[left] > heap[largest]) {
            largest = left;
        }
        if (right < heap.size() && heap[right] > heap[largest]) {
            largest = right;
        }
        if (largest != i) {
            swap(heap[i], heap[largest]);
            Heapify(largest);
        }
    }
    void bubbleUp(int i) {
        int parent = (i - 1) / 2;
        if (i > 0 && heap[i] > heap[parent]) {
            swap(heap[i], heap[parent]);
            bubbleUp(parent);
        }
    }
    void insert(int value) {
        heap.push_back(value);
        bubbleUp(heap.size() - 1);
    }
    void bubbleDown() {
        int i = 0;
        int size = heap.size();
        while (i < size) {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int largest = i;
            if (left < size && heap[left] > heap[largest]) {
                largest = left;
            }
            if (right < size && heap[right] > heap[largest]) {
                largest = right;
            }
            if (largest != i) {
                swap(heap[i], heap[largest]);
                i = largest;
            }
            else {
                break;
            }
        }
    }
    // Delete the top (max) element from the heap
    void deleteTop() {
        if (heap.empty()) return;
        heap[0] = heap.back();
        heap.pop_back();
        Heapify(0);
    }
};

int main() {
    MaxHeap h;
    h.insert(3);
    h.insert(1);
    h.insert(4);
    h.insert(1);
    h.insert(5);
    h.insert(9);
    cout << "Heap after insertions: ";
    for (int i : h.heap) {
        cout << i << " ";
    }
    cout << endl;
    h.deleteTop();
    cout << "Heap after deleting top: ";
    for (int i : h.heap) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

