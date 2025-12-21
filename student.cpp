#include <iostream>
#include "student.h"
#include <cstring>
using namespace std;

student::student(){
  //m_name[0]='\0';
}
student::~student(){
}

//saves name
void student::name(const char* first_name){
  strcpy(m_name, first_name);
}


//returns name
const char* student::name(){
  return m_name;
}
