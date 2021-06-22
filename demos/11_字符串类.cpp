#include <iostream>
using namespace std;

class MyString{
public:
  MyString();//����
  MyString(const char *const);//����
  MyString(const MyString &);//���ƹ���
  // ~MyString();

  char& operator[](unsigned short offset);
  char operator[](unsigned short offset) const;
  MyString operator+(const MyString&);
  void operator+=(const MyString&);

  unsigned short GetLen()const {return itslen;}
  const char * GetMyString()const{return itsMyString;}

private:
  MyString(unsigned short);
  char * itsMyString;
  unsigned short itslen;
};

MyString::MyString(){

}

char & MyString::operator[](unsigned short offset){//���ص�ַ;��������,����ʡ�ռ�
  if (offset>itslen)
  return itsMyString[itslen-1];
  else
  return itsMyString[offset];
}

char MyString::operator[](unsigned short offset) const{
  if (offset>itslen)
  return itsMyString[itslen-1];
  else
  return itsMyString[offset];
}

//��Ա��������
MyString MyString::operator+(const MyString& rhs){
  unsigned short totallen = itslen+rhs.GetLen();
  MyString temp(totallen);
  unsigned short i=0;
  for(i=0;i<itslen;i++)
    temp[i] = itsMyString[i];
  for(unsigned short j=0;j<rhs.GetLen();j++,i++)
    temp[i] = rhs[j];
  temp[totallen]='\0';
  return temp;
}

void MyString::operator+=(const MyString& rhs){
  unsigned short rhsLen = rhs.GetLen();
  unsigned short totalLen = itslen + rhsLen;
  MyString temp(totalLen);
  unsigned short i=0;
  for(i=0;i<itslen;i++)
    temp[i] = itsMyString[i];
  for (unsigned short j = 0; j<rhs.GetLen(); j++, i++)
    temp[i] = rhs[i-itslen];
  temp[totalLen]='\0';
  *this = temp;
}

int main(){
  MyString s1("initial test");
  cout<<"s1:"<<s1.GetMyString()<<endl;
  return 0;
}
