

#include <iostream>
#include <vector>
#include "CircularQueue.h"

template<typename T>
int recursive_search(std::vector<T>& arr, T value, int pos = 0);

template<typename T>
void insertion_sort(T* arr, int size);

int main() {

  CircularQueue<int> queue(10);

  for (int i = 1; i <= 10; i++){

    queue.push(i);

  }

  std::cout << "Elements in queue: ";
  queue.display_queue();

  std::cout << std::endl;

  queue.move_to_rear();

  std::cout << "New front after moving to rear: " << queue.front() << std::endl;

  CircularQueue<int> queue2(10);

  for (int i = 10; i >= 0; i--) {

    queue2.push(i);

  }

  std::cout << "New queue: " << std::endl;

  queue2.display_queue();

  std::cout << "Sorting new queue: " << std::endl;

  insertion_sort(queue2.get_array(), queue2.size());

  queue2.display_queue();

  return 0;
}

template<typename T>
int recursive_search(std::vector<T>& arr, T value, int pos) {

  if (pos == arr.size()) {
    return -1;
  }

  int index = 0;
  
  if ((index = recursive_search(arr, value, pos + 1)) < 0) {

    if (arr[pos] == value) {

      return pos;

    } else {

      return -1;

    }

  } else {

    return index;

  }


}


template<typename T>
void insertion_sort(T* arr, int size) {
  
  for (int i = 1; i < size; i++) {

    int value = arr[i];
    int h = i - 1;

    while (h >= 0 && arr[h] > value) {

      arr[h + 1] = arr[h];
      h -= 1;

    }

    arr[h + 1] = value;

  }


}