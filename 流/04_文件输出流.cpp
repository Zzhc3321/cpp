#include <iostream>
#include <fstream>
using namespace std;

struct Date{
  char day,year;
};

int main(){
  Date dt =  {'t','y'};
  ofstream file("afile.dat",ios_base::binary);
  file.write(reinterpret_cast<char*>(&dt),sizeof(dt));
  file.close();
  return 0;
}
