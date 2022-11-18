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

#include <iostream>
using namespace std;

class me{

    int age;
    int  section  ;
    public:
    void getdata(int a , int b);
    void setdata(){
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
    p.setdata();

    return 0;
}
*/
#include <iostream>
using namespace std;
class test1 {
        int a,b;
        public:
        friend class test2;
        void getab(){
            cout <<"enter value/n";
            cin>> a>>b;

        }
};

class test2{
    public:
    void putab(test1   t1){
        cout <<"a ="<<t1.a<<endl;
         cout <<"b ="<<t1.b<<endl;
    }
};

int main(){
    test1 t1;
    test2 t2;

    t1.getab();
    t2.putab(t1);
     return 0;

}


class author{
    char name[20];
    friend class book;

};

class book{
    char bname[20];
    float price;

    author a;
    public:
    void getdata(){
        cout <<"aithor name "<<endl;
        cin >> a.name;
        cout <<"enter book name"<<endl;
        cin >> bname;
        cout <<"enter price"<< price;

    }
    
};
#include <string.h>
 class stu{
   char name[10], course[20];
   public:
   stu(){                        //defalut constructor 

   }

   stu( char name[10], char course[20]){
    strcpy(this ->course , course);
    strcpy(this ->name, name);
   } //prametrized constructors


   
 };

 
