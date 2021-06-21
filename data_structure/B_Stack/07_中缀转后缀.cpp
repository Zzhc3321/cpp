#include<iostream>
#include<string>
using namespace std;

typedef char Elemtype;

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

bool get_top(Listack &LS,Elemtype &e){
  if(Is_empty(LS))
    return false;
  LNode* p=LS->next;
  e = p->data;
  return true;
}

int get_level(char c){
  if(c=='+' || c=='-')
    return 1;
  if(c=='*' || c=='/')
    return 2;
  if(c=='(' || c==')')
    return -1;
  return 0;
}

string trans(const string &s){
  string res = "";
  Listack St;
  Init_li_stack(St);

  for(int i=0;i<s.length();i++){
    if(isdigit(s[i]))
      res+=s[i];
    else{
      char top;
      get_top(St,top);
      if(s[i]=='(')
        push(St,s[i]);
      else if(s[i]==')'){
      char t;
      get_top(St,t);
        while(t!='('){
          pop(St,t);
          res+=t;
        }
        get_top(St,t);
        if(t=='(')
          pop(St,t);
      }
      else{
        if(Is_empty(St))
          push(St,s[i]);
        else if(get_level(s[i])>get_level(top))
          push(St,s[i]);
        else{
          char t;
          get_top(St,t);
          while(get_level(s[i])<get_level(t)){
            pop(St,t);
            res+=t;
            get_top(St,t);
          }
        }
      }

    }

  }
  char t;
  while(!Is_empty(St)){
    pop(St,t);
    res+=t;
  }
  return res;
}

int main(){
  string E1="1+2*3+(4*5+6)*7";
  string E2 = trans(E1);
  cout<<E2<<endl;
  return 0;
}
