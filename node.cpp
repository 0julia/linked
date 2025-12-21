#include <iostream>
#include "node.h"

using namespace std;

node::node(student* value){
  m_student=value;
  next = NULL;
}

node::~node(){
  next = NULL;
}

student* node::getStudent(){
  return m_student;
}

void node::setNext(node* newnext){
  next = newnext;
}

node* node::getNext(){
  return next;
}
