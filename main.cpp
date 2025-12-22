# include <iostream>
# include "node.h"
# include "student.h"
using namespace std;

void add(const char newvalue[100], node* &head);
void print(node* next, node* head);


int main(){
  node* head = NULL;

  //ADD STUDENT THINGS TO NODE
  add("Student1", head);
  add("Student2", head);
  add("Student3", head);
  add("a_student", head);
  
  //PRINT NODE OF STUDENTS
  print(head, head);

  //delete s and n from add()
  node* next = head;
  while (next != NULL) {
    node* nextNode = next->getNext();
    delete next->getStudent();
    delete next;
    next = nextNode;
  }
  head = NULL;  // list is now empty
  return 0;
}

void add(const char newvalue[100], node* &head){
  node* next = head;
  if (next == NULL){//if empty list
    student* s = new student();
    s->name(newvalue);
    node* n = new node(s);
    head = n;
  } else{ //if theres stuff in the list
    while (next->getNext() != NULL){
      next = next->getNext();
    }
    
    student* s = new student();
    s->name(newvalue);
    node* n = new node(s);
    next->setNext(n);
  }
}



void print(node* next, node* head){
  if(next == head){
    cout << "list: ";
  }
  if(next != NULL){
    cout << next->getStudent()->name() << " ";
    print(next->getNext(), head);
  }
}
