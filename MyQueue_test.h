/*
  MyQueue_test.h
  Unit tests for HW06, MyQueue.
  
*/

#include "MyQueue.h"
#include <stdexcept>

#include <cxxtest/TestSuite.h>

class MyQueueTest : public CxxTest::TestSuite {
public:

  void testEnqueuePeek() {
    MyQueue<int> a;
    a.enqueue(5);
    TS_ASSERT_EQUALS(a.peek(), 5);
    TS_ASSERT_EQUALS(a.size(), 1);
  }
 
};
