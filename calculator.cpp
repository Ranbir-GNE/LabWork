#include<iostream>
using namespace std;
class calculation{
    public:
    int addition(int a,int b);
    int multiplication(int a,int b);
    int substraction(int a,int b);
    float division(int a,int b);
    
};
int calculation::addition(int a,int b){
    int c;
    c=a+b;
    return c;
}
int calculation::substraction(int a,int b){
    int c;
    c=a-b;
    return c;
}
int calculation::multiplication(int a,int b){
    int c;
    c=a*b;
    return c;
}
float calculation::division(int a,int b){
    float c;
    c=a/b;
    return c;
}
int main(){
    for(int i=0;i<10;i++){
    int a,b;
    char o;
    calculation here;
    cout<<"enter two numbers here (or -1 to terminate)"<<endl;
    cin>>a>>b;

    if(a<0||b<0){
        break;}

    cout<<"choose one for calculation  + , - , * ,  / "<<" "<<endl;
    cin>>o;
    
     switch( o ){
        case '+':
            cout<<here.addition(a,b)<<endl;
            break;
        case '-':
            cout<<here.substraction(a,b)<<endl;
            break;
         case '*':
            cout<<here.multiplication(a,b)<<endl;
            break;
         case '/':
            cout<<here.division(a,b)<<endl;
            break;
    }
    }
    return 0;
}