/*
 * =====================================================================================
 *
 *       Filename:  virtual_func_test.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年05月15日 15时27分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;

class CBase
{
public:
    virtual void act1()    {cout<<"CBase::act1()! ";    act2();}
    void act2()        {cout<<"CBase::act2()! ";    act3();}
    virtual void act3()    {cout<<"CBase::act3()! ";    act4();}
    void act4()    {cout<<"CBase::act4()! ";    act5();}
    void act5()        {cout<<"CBase::act5()! ";    }
};

class CDerive :public CBase
{
public:
    void act3()    {cout<<"CDerive::act3()! ";        act4();}
    void act4()    {cout<<"CDerive::act4()! ";        act5();}    //此处的act5()调用CDerive类的act5
    void act5()    {cout<<"CDerive::act5()! ";        }
};

int main(void)
{
    CBase *pObj1=new CBase;
    pObj1->act1();    
    pObj1->act5();
    cout<<endl;
    CBase *pObj2=new CDerive;
    pObj2->act1();
    pObj2->act5();    
	cout << endl;
    delete pObj1;
    delete pObj2;
}
