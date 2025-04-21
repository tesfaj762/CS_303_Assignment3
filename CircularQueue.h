
#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H


template<class T>
class CircularQueue {
public:

  CircularQueue() 
  : m_capacity(10)
  , m_size(0)
  , front_index(0)
  , rear_index(-1)
  , array(new T[10])
  {
  }

  CircularQueue(int size)
  : m_capacity(size)
  , m_size(0)
  , front_index(0)
  , rear_index(-1)
  , array(new T[size])
  {
  }

  ~CircularQueue() {

    delete[] array;

  }

  void push(T item);

  void pop();

  void reallocate();

  void move_to_rear();

  void display_queue();

  T& front() {

    return array[front_index];

  }


  int size() {

    return m_size;

  }

  bool empty() {

    if (m_size == 0) {

      return true;

    } 

    return false;

  }

  T* get_array() {

    return array;

  }

private:

  int m_capacity;
  
  int m_size;

  int front_index;

  int rear_index;

  T* array;

};

#include "CircularQueue.tpp"

#endif