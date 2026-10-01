#include<iostream>
 #include<string>
 using namespace std;
 
 class employe
{ 
 public:
 string name;
 int empid;
 float basicsalary;
 float bonus;
 float totalsalary;

       employe()
      { 
       name="unknowm";
       empid=0;
       basicsalary=0;
       bonus=0;
       totalsalary=0;
      }
      employe(string n,int id,float s,float b)
{
      name=n;
      empid=id;
      basicsalary=s;
      bonus=b;
} 
      float calculate()
     {
      totalsalary=basicsalary+bonus;
     }
     
   
    void display()
   {
    cout<<"the name"<<name;
    cout<<"the empid"<<empid;
    cout<<"the basic salary"<<basicsalary;
    cout<<"the bonus"<<bonus;
    cout<<"the total salary"<<totalsalary;
   } 
  };
  int main()
  { 
  employe e1;
 e1.display();
 employe e2 ("john",1233,14999,3000);
 e2.display();
return 0;
}
