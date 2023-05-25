#include<iostream>
using namespace std;
int MinSteps1(int n){
    static int count = 0;
    if(n == 1) return count; 
    else{
        if(n%3 == 0){
            n/=3;
            count++;
        }
        else if(n%2 == 0){
            n/=2;
            count++;
        }
        else {
            n-=1;
            count++;   
        }
        return MinSteps1(n);
    }
}
int MinSteps2(int n){
    static int count = 0;
    if(n == 1) return count;
    else{
        if(n%3 == 0){
            n = n/3;
            count++;
        }
        else{
            n = n-1;
            count++;      
        }
        return MinSteps2(n);
    }
}
int main(){
    int num;
    scanf("%d", &num);
    int a = MinSteps1(num);
    int b = MinSteps2(num);
    if(a>b) printf("%d", b);
    else printf("%d\n", a);
    return 0;
}