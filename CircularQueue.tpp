

#include "CircularQueue.h"

#include <iostream>
#include <algorithm>

template<class T>
void
CircularQueue<T>::push(T item) {

  if (m_size == m_capacity) {
    reallocate();
  }

  m_size++;


  rear_index = (rear_index + 1) % m_capacity;
  array[rear_index] = item;

  

}

template<class T>
void 
CircularQueue<T>::pop() {

  front_index = (front_index + 1) % m_capacity;

  m_size--;

}

template<class T>
void
CircularQueue<T>::reallocate() {


  T* new_arr = new T[m_capacity * 2];

  int j = front_index;

  for (int i = 0; i < m_size; i++){

    new_arr[i] = array[j];

    j = (j + 1) % m_capacity;

  }

  front_index = 0;
  
  rear_index = m_size - 1;

  m_capacity *= 2;

  std::swap(array, new_arr);

  delete[] new_arr;


}


template<class T>
void
CircularQueue<T>::move_to_rear() {

  T temp = front();

  pop();

  push(temp);

  return;
}




template<class T>
void
CircularQueue<T>::display_queue() {

  if (m_size == 0) {

    return;
  }

  int j = front_index;

  for (int i = 0; i < m_size; i++) {

    std::cout << array[j] << " ";
    j = (j + 1) % m_capacity;

  }

  std::cout << std::endl;

}