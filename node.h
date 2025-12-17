#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>
using namespace std;

class node{
public:
  node(student* value);
  ~node();
  void setValue(student* newvalue);
  student* getStudent();
  void setNext(node* newnext);
  node* getNext();//get next Node pointer (10 points)
  
private:
  student* value;
  node* next;
};
#endif
