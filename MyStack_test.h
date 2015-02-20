/*
  MyStack_test.h
  Unit tests for HW06, MyStack.
  
*/

#include "MyStack.h"
#include <stdexcept>

#include <cxxtest/TestSuite.h>

class MyStackTest : public CxxTest::TestSuite {
public:

  void testSize() {
    MyStack<int> a;
    TS_ASSERT_EQUALS(a.size(), 0);
  }
  
};
