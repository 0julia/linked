#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>
using namespace std;

class node{
public:
  node();//student* smth);
  ~node();
  void setValue(int newvalue);//student* newvalue);
  int getValue();//student* getValue();
  void setNext(node* newnext);
  node* getNext();
private:
  int value;//student* value;
  node* next;
};
#endif
