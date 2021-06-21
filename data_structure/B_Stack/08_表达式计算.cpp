#include<iostream>
#include<string>
using namespace std;

typedef char char_elem;
typedef double Elemtype;

typedef struct char_LNode{
  char_elem data;
  struct char_LNode *next;
}*char_Listack;

typedef struct LNode{
  Elemtype data;
  struct LNode *next;
}*Listack;

bool Init_li_stack(char_Listack &LS){
  LS = new char_LNode;
  LS->next = NULL;
  return true;
}

bool Is_empty(char_Listack LS){
  if(LS->next == NULL)
    return true;
  return false;
}

bool push(char_Listack &LS,char_elem e){
  char_LNode* s;
  s = new char_LNode;
  s->data = e;
  s->next = LS->next;
  LS->next = s;
  return true;
}

bool pop(char_Listack &LS,char_elem &e){
  if(Is_empty(LS))
    return false;
  char_LNode* p=LS->next;
  e = p->data;
  LS->next = p->next;
  delete p;
  return true;
}

bool get_top(char_Listack &LS,char_elem &e){
  if(Is_empty(LS))
    return false;
  char_LNode* p=LS->next;
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
  char_Listack St;
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
  cout<<"后缀表达式："<<s<<endl;
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
  cout<<"The result is : "<<e<<endl;
  return e;
}

int main(){
  string E1;
  cout<<"Enter 'quit' to quit."<<endl;
  cout<<"Enter an 表达式: ";
  cin>>E1;
  string E2 = trans(E1);
  calculate(E2);
  return 0;
}
