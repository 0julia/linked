#include <iostream>
#include <cstring>
using namespace std;

class student{
public:
  student();
  ~student();
  void name(const char*);
  const char* name();
  char m_name[80];
};

