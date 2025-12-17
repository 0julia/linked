#include <iostream>
#include "node.h"

using namespace std;

node::node(student* value){
  value = 0;
  next = NULL;
}

node::~node(){
  delete &value;
  next = NULL;
}

void node::setValue(int newValue){
  value = newValue;
}

student* node::getStudent(){
  return value;
}

void node::setNext(node* newnext){
  next = newnext;
}

node* node::getNext(){
  return next;
}
