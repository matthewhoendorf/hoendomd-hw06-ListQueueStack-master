#ifndef MYQUEUE_H
#define MYQUEUE_H 
/**   @file MyQueue.h    
      @author Matt Hoendorf <hoendomd@mail.uc.edu>
      @date 10.13.14
      @version 0.01   
      
      This MyQueue class implements a templated queue
      
      Various class members need to be implemented.
      
**/
#include <iostream>
#include <sstream>
#include "LList.h"  // Hint hint!

using namespace std;

template <class T> class MyQueue{

public:
  MyQueue(){
    head = NULL;
    tail = NULL;
    my_size = 0;
  };
  
  void enqueue(T value){
    //push_back(value);
  }
  
  T peek(){
    T a;
    return a;
  }
  
  void dequeue(){
    //remove(0);
  }
  
  unsigned int size() const{
    return my_size;
  }
  
  bool isEmpty() const{
    if(head = NULL){
      return true;
    }
    else{
      return false;
    }
  }

private:

  unsigned int my_size;
  Node<T> *head;
  Node<T> *tail;

};

#endif
