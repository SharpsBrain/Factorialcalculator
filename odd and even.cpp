#include <iostream>
#include<cmath>

using namespace std;
/*//function prototype:
void odd(int x);
void even(int x );

int main()
{
 //declaration of variables to be used:
 int i;
 do{
    cout<<"Please enter number(0 to exit ):";
    cin>>i;
    //calling the function for odd:
    odd(i);

 } while(i!=0);


    return 0;
}
void odd(int x)
{

    if((x%2)!=0)cout<<"It is odd \n";
    else even(x);
}

void even(int x)
{

    if(x%2==0)cout<<"It is even \n";
    else odd(x);
}
long factorial(long a){
if(a>1)
    return(a*factorial(a-1));
    else
        return 1;

}
int main(){
long number;
cout<<"Enter the number to calculate the factoraial: ";
cin>>number;
cout<<number<<"!="<<factorial(number);
return 0;
}*/
int main(){
//declaration of variables:
double num,squareroot;
cout<<"Enter the number :";
cin>>num;
squareroot=sqrt(num);
cout<<"The square root of "<<num<<" is "<<squareroot;
return 0;
}
