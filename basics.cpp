//Tkoens , Expwersions & control structures 

//basic //data type 
/* c++ have 3 type sof data type 
1- built in data type 
                   // int , char , double , float , void 
                   int means integers ,
                   char means charaters ,
                   double(	Its size is 8 bytes) & float(Its size is 4 bytes) means decimals type of data type :

                   
2- user defined type :
1 - structure 
2- union 
3- class 
4- enumration 

3- drived data type :

1- array
2-funtion 
3-pointers 
4-refrance 
*/
#include <iostream>
using namespace std;

class me{

    int age;
    int  section  ;
    public:
    void getdata(int a , int b);
    void putdata(){
        cout<< "my age is :"<<endl;
        cout << "my nmae is :"<<endl;
    }

    
};

void me :: getdata(int a , int b){
  age = a;
  section = b;

}

int main(){
    me p;
    p.getdata(20 , 2);
    p.putdata();

    return 0;
}