//#include <stdio>
template <typename T>

class SmartPtr{

public:
     SmartPtr(T *p = 0):ptr(p) {count = new int(1) ;}// 第一次创建的时候，引数肯定是1
     SmartPtr(const SmartPtr & rhs):ptr(rhs.ptr),count(rhs.count) {++*rhs.count ;}
     //T ＆operator*(){return *ptr}
     //T* operator->(){return ptr}
     SmartPtr ＆operator=(const SmartPtr & rhs){
          if(ptr == rhs.ptr)
               return *this ;

          if(--*count == 0){
               delete ptr ;
               delete count ;
          }

          ++*rhs.count ;
          count = rhs.count ;
          ptr = rhs.ptr ;
     }
     
     ~SmartPtr(){
          if(--*count==0)
               delete ptr ;
          //我觉得这儿有问题，应该在count为0时才删除count
          delete count ;
      }
    printInfo() {
        cout << "ptr is %p" << ptr << "count is %d\n" << count;
    }

private:
     T ＊ptr ;
     int ＊count ;
};

int main(int argc, char ** argv)
{
    SmartPtr<int> sp1 = new int(11);
    {
        SmartPtr<int> sp2 = new int(22);
        SmartPtr<int> sp3 = sp1;
    }
    sp1.printInfo();
    return 0;
}
