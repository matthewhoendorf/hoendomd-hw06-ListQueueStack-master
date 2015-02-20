#ifndef MYSTACK_H
#define MYSTACK_H 
/**   @file MyStack.h    
      @author Matt Hoendorf <hoendomd@mail.uc.edu>
      @date 10.13.14
      @version 0.01   
      
      This MyStack class implements a templated stack
      
      Various class members need to be implemented.
      
**/
#include <iostream>
#include <sstream>
#include "LList.h"

using namespace std;

template <class T> class MyStack{

public:
  MyStack(){
    head = NULL;
    tail = NULL;
    my_size = 0;
  };
  
  void push(T value){
    //push_front(value);
  }
  
  T peek(){
    T a;
    return a;
  }
  
  void pop(){
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
