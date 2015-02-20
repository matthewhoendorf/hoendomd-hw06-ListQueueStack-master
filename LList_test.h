/*
  LList_test.h
  Unit tests for HW06, linked-list.
  
*/

#include "LList.h"
#include <stdexcept>
#include <string>

#include <cxxtest/TestSuite.h>

class LListTest : public CxxTest::TestSuite {
public:

  void testSize1() {
    LList<int> a;
    TS_ASSERT_EQUALS(a.size(), 0);
  }

};

