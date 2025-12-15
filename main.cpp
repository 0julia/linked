# include <iostream>
# include "node.h"
using namespace std;

void add(int newvalue, node* &head);
void print(node* next, node* head);


int main(){
  node* head = NULL;
  add(5, head);
  print(head, head);
}

void add(int newvalue, node* &head){
  node* current = head;
  if (current == NULL){
    head = new node();
    head->setValue(newvalue);
  }else{
    while (current->getNext() != NULL){
      current = current->getNext();
    }
    current->setNext(new node());
    current->getNext()->setValue(newvalue);
  }
}

void print(node* next, node* head){
  if(next == head){
    cout << "list: ";
  }
  if(next != NULL){
    cout << next->getValue() << " ";
    print(next->getNext(), head);
  }
}
