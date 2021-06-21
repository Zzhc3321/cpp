#include<iostream>
#include<string>
using namespace std;

typedef double Elemtype;

typedef struct LNode{
  Elemtype data;
  struct LNode *next;
}*Listack;

bool Init_li_stack(Listack &LS){
  LS = new LNode;
  LS->next = NULL;
  return true;
}

bool Is_empty(Listack LS){
  if(LS->next == NULL)
    return true;
  return false;
}

bool push(Listack &LS,Elemtype e){
  LNode* s;
  s = new LNode;
  s->data = e;
  s->next = LS->next;
  LS->next = s;
  return true;
}

bool pop(Listack &LS,Elemtype &e){
  if(Is_empty(LS))
    return false;
  LNode* p=LS->next;
  e = p->data;
  LS->next = p->next;
  delete p;
  return true;
}

Elemtype calculate(const string &s){
  cout<<s<<endl;
  Listack cal;
  for(int i=0;i<s.length();i++){
    // 整数转字符串: +'0'
    if(isdigit(s[i])){
      Elemtype elm = s[i]-'0';
      push(cal,elm);
    }
    else{
      Elemtype e1,e2;
      pop(cal,e1);
      pop(cal,e2);
      switch (s[i]) {
        case '+':
          push(cal,e1+e2);
          break;
        case '-':
          push(cal,e1-e2);
          break;
        case '*':
          push(cal,e1*e2);
          break;
        case '/':
          push(cal,e2/e1);
          break;
      }
    }
  }
  Elemtype e;
  pop(cal,e);
  cout<<"the result is : "<<e<<endl;
  return e;
}

int main(){
  string s;
  cout<<"Enter a 后缀表达式: ";
  cin>>s;
  Elemtype res = calculate(s);
  return 0;
}
