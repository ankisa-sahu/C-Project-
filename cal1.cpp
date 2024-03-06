#include<iostream>
using namespace std;
// for calling function


void myfunction(){
cout << "\n\n-----Thank you visit again \n\n";
 }
 
 //main function and declaration 
int main(){
//. char input 
char a,m,s,d,op,r;
int num3,num4,rem;
// floating value 
float mul,sum=0,num1=0,num2=0,div=0,sub=0;
cout << "Enter a number for calculation ---a,m,d,r,s" << endl;
cin >>op ;
cout << "Enter first No." << endl;
cin >> num1;
cout << "Enter second No." << endl; 
cin >> num2;

num3= num1;
num4= num2;
//if Statement 
/*if(op)      
{*/
//Switch case statement 


switch (op){
   case 'a':
           sum = num1 + num2;
           
            cout << "Addition : "<< num1<< " + "<< num2 <<" = "<<sum << endl;
            main();
            break;
   case 'm':
            mul=num1*num2;
            cout << "Multiplication : " << num1<<" * "<<num2<<" = "<<mul<<endl;
            main();
            break;
   case 's':
            sub=num1-num2;
            cout << "Substration : " <<num1<<" - "<<num2<<" = "<<sub << endl;
            main ();
            break;
   case 'd':
           div=num1/num2;
           cout << "Division : " <<num1<<" / "<<num2<<" = "<<div<< endl;
           main();
           break;
   case 'r':
           rem=num3%num4;
           cout << "Remender : "<<num3<<" % " << num4<<" = "<<rem<< endl;
           main ();
           break;
   default:
           cout << "Sorry we could not understand 😕😕...wrong choice . Please Enter Valid Input\n" << endl;
           
} //end loop switch case
//} //end loop of if

/*else{
cout << "Sorry we could not understand 😕😕\n Please Enter valid Input" << endl;
}*/






myfunction();



}
//end loop of main function 



    