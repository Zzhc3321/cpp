#include <iostream>
using namespace std;

// ����Ԫ�����ڴ�����˳�������洢�ġ�����Ԫ�����ڴ���ռ��һ�������Ĵ洢��Ԫ���߼������ڵ�Ԫ���������ַ��Ҳ�����ڵġ�


// ������Ϊ��������
// һ�㲻ָ�������һά�Ĵ�С
void rowSum(int a[][4],int nRow){
  for(int i=0;i<nRow;i++){
    for(int j=1;j<4;j++){
      a[i][0]+=a[i][j];
    }
  }
}


int main(){
  int a[10],b[10][3];
  int i=0;

  int as[][3] = {1,0,0,0,0,1};// ����int as[2][3]={1,0,0,0,0,1}

  int table[3][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6}};
  rowSum(table,3);

  for(int i=0;i<3;i++){
    cout<<"Sum of row "<<i<<" is "<<table[i][0]<<endl;
  }


  for(i=0;i<10;i++){
    int j=0;
    if(j==0)
      a[i] = i*2+1;
    for(j=0;j<3;j++)
          b[i][j]=2*j+1;
  }

  for(int i=0;i<10;i++){
      int j=0;
    if(j==0)
      cout<<"a["<<i<<"]:"<<a[i]<<endl;
    for(j=0;j<3;j++)
          cout<<"b["<<i<<"]"<<"["<<j<<"]:"<<b[i][j]<<endl;
  }

return 0;


}
