/* To slove this problem we need not to write program
for decimal to binary conversion or any complex method.
We can simply do it by taking a while loop and by checking
the user input with finding reminder and a help of counter variable.
sample input:7
sample output:3
As 7 has 3 1's in his binary system.
*/
//code is written below
#include<iostream>
using namespace std;
//function code
int check(int a)
{
    //take a variable to store reminder
    // take a count variable to count no of 1s
    int rem,count=0;
    //start a loop 
    //condition is loop will run untill 'a' is zero.
    while(a!=0)
    {
        rem=a%2;
        //check whether reminder is 1 or not
        if(rem==1)
        {
            count++;
        }
        a=a/2;
    }
    //finally return count
    return count;
}
//main function code
int main()
{
    
    int no;
    //taking user input
    cin>>no;
    //calling the function
    int output=check(no);
    //show the output
    cout<<output;
}