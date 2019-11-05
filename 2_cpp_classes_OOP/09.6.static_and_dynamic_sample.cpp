#include <iostream>
using namespace std;

class myMatrix{
  public:
    myMatrix(){
      rowCount = 6;
      colCount = 6;
      _allocate();
    }
    myMatrix(int _rowCount,int _colCount){
      rowCount = _rowCount;
      colCount = _colCount;
      _allocate();
    }
    static void setObjCout(int _count){
      objCount = _count;
    }
    static int getObjCount(){
      return objCount;
    }
    static int objCount;
  protected:
    void _allocate(){
      data = new int*[rowCount];
      for(int i=0;i<rowCount;i++){
        data[i] = new int[colCount];
      }
      objCount++;
    }
    int rowCount;
    int colCount;
    int **data;
  private:
};

int myMatrix::objCount = 0;

int main() {
  myMatrix m1,m2;
  cout<<myMatrix::getObjCount()<<endl;
  cout << "Hello World!\n";
}