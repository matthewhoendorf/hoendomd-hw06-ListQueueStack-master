#ifndef LLIST_H
#define LLIST_H 
/**   @file LList.h    
      @author Matt Hoendorf <hoendomd@mail.uc.edu>
      @date 10.13.14
      @version 0.01   
      
      This LList class implements a templated linked-list container.
      
      Various class members need to be implemented.
      
**/
#include <iostream>
#include <stdexcept>
#include <sstream>

using namespace std;
  
template <class T> class Node{
  public:
  T value;
  Node* current;
  Node* next;
};

template <class T> class LList{

public:
  LList(){
    head = NULL;
    tail = NULL;
    my_size = 0;
  }

  ~LList(){
    delete head;
  }
  
  LList(const LList<T>& other){}
  
  LList<T>&  operator=(const LList<T>& other){
    LList<T> a;
    return a;
  }

  void push_front(T value){
    Node<T>* temp = new Node<T>;  // Gets a new node
    if(my_size>=1){
      temp->next = head;      // Attach the new node to the beginning
      temp->value = value;
      tail = temp->next;    // of the list.
    }
    else{
      temp->value = value;
      tail = temp;
    }
    head = temp;            // Set head to point to the new node
    my_size++;
  }

  bool setAt(T value, int location){
    if(location < 0){
      location = my_size + location;
    }
    if(location >= my_size){
      return false;
    }
    Node<T>* temp = head;
    while(temp != NULL && location != 0){
      temp = temp->next;
      location--;
    }
    // temp should be the one we want OR past the end
    if(temp != NULL){
      temp->value = value;
      return true;
    }
    return false;
  }

  T getAt(int location) const{
    T a;
    if(location < 0){
      location = my_size + location;
    }
    if(location >= my_size){
      return a;
    }
    Node<T>* temp = head;
    while(temp != NULL && location != 0){
      temp = temp->next;
      location--;
    }
    // temp should be the one we want OR past the end
    if(temp != NULL){
      a = temp->value;
    }
    return a;
  }


  void push_back(T value){
    if(head == NULL){
      head = new Node<T>;
      head->next = NULL;
      head->value = value;
      tail = head;
      my_size++;
      return;
    } 
      // 1 or more nodes;
    Node<T>* temp = new Node<T>;
    tail->next = temp;
    tail = temp;
    temp->value = value;
    temp->next = NULL;
    my_size++;
  }

  unsigned int size() const{
    return my_size;
  }

  void insert(T value, int location){
    if(location < 0){
      location = my_size + location;
    }
    int i = 0;
    Node<T>* temp = head;
    if(temp == NULL){
      push_back(value);
    }
    else{
      while(temp != NULL){
        if(temp->value<value){
          i++;
          temp = temp->next;
        }
      }
      if(i == 0 || location == my_size){
        push_back(value);
      }
      else if(i<my_size){
        setAt(value,i++);
      }
      else{
        push_front(value);
      }
    }
  }

  void remove(int location){
    Node<T> *prev = 0, *current = head;
    int i = 0;
    if(location < 0){
      location = my_size + location;
    }
    while(current != NULL)
    {
      if (i == location){ // set loc = next loc
        if(prev){
          prev->next = current->next;
        }
        if(current == head){
          head = current->next;
        }
        delete current;
        current = NULL;
        my_size--;
        i++;
      }
      else{
        prev = current;
        current = current->next;
        i++;
      }
    }
  }

  string print() const{
    Node<T>* temp = head;
    int i = 0;
    string str;
    while(temp != NULL){
      str.push_back('[');
      string s;
      string t;
      int num = temp->value;
      while(num/10!=0){
        t.push_back(num%10+48);
        s.insert(0, t);
        t = "";
        num = num/10;
      }
      t.push_back(num+48); 
      s.insert(0, t);
      str.append(s);
      str.push_back(']');
      str.push_back(' ');
      temp = temp->next;
      i++;
    }
    return str;
  }
  
  LList<T> reverse() const{
    LList<T> a; 
    return a;
  }
  
  LList<T> operator+(const LList<T>& rhs) const{
    LList<T> a; 
    return a;
  }
  
  bool operator==(const LList<T>& rhs) const{
    return false;
  }
  
  bool operator!=(const LList<T>& rhs) const{
    return false;
  }
  
  void clear(){}
  
  int find(T value, int location){
    return 0;
  }
  
private:
  
  unsigned int my_size;
  Node<T> *head;
  Node<T> *tail;
  
};

#endif
