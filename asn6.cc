/*/*[6] Write a C++ program to add and subtract two matrices of order RXC
using object as argument with return value method in a member 
function.
*/
// #include<iostream>
// using namespace std;
// class addsub{
//     private:
//     int m,n;
//     float mat1[100][100];
//     public:
//     void assign(int p,int q){
//         m=p;
//         n=q;
//     }
//      void input(){
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 cout<<"Enter mat1["<<i<<"]["<<j<<"] : ";
//                 cin>>mat1[i][j];}
//         } }
//      void Show()
//         {
//             for(int i=0;i<m;i++)
//             {
//                 for(int j=0;j<n;j++)
//                     cout<<mat1[i][j]<<" ";
//                 cout<<endl;    
//             }
//         }
//      void add(addsub m1, addsub m2)
//         {
//         for(int i=0;i<m;i++)
//             for(int j=0;j<n;j++)
//                 mat1[i][j]=m1.mat1[i][j]+m2.mat1[i][j];
//         }
//      void subtract(addsub m1, addsub m2)
//         {
//             for(int i=0;i<m;i++)
//                 for(int j=0;j<n;j++)
//                     mat1[i][j]=m1.mat1[i][j]-m2.mat1[i][j];
//         }
// };
// int main(){
//     addsub obj1,obj2,obj3,obj4;
//     int row,col;
//     cout<<"enter row:"<<endl;
//     cin>>row;
//     cout<<"enter column:"<<endl;
//     cin>>col;
//     obj1.assign(row,col);
//     obj2.assign(row,col);
//     obj3.assign(row,col);
//     obj4.assign(row,col);
//     cout<<"\nEnter the elements of the first matrix"<<endl;
//     obj1.input();
//     cout<<"\nEnter the elements of the second matrix"<<endl;
//     obj2.input();
//     obj3.add(obj1,obj2);
//     obj4.subtract(obj1,obj2);
//     cout<<"\nFirst Matrix"<<endl;
//     obj1.Show();
//     cout<<"\nSecond Matrix"<<endl;
//     obj2.Show();
//     cout<<"\nSum of the two matrices"<<endl;
//     obj3.Show();
//     cout<<"\nDifference of the two matrices"<<endl;
//     obj4.Show();
// }

//object as return return value
#include<iostream>
using namespace std;
class addsub{
    private:
    int m,n;
    float mat1[100][100];
    public:
    void assign(int p,int q){
        m=p;
        n=q;
    }
     void input(){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<"Enter mat1["<<i<<"]["<<j<<"] : ";
                cin>>mat1[i][j];}
        } }
     void Show()
        {
            int i,j;
            for( i=0;i<m;i++)
            {
                for( j=0;j<n;j++)
                     cout<<mat1[i][j]<<" ";
                cout<<endl;    
            }
        }
    addsub add(addsub m1, addsub m2)
        {
        int i,j;
        for( i=0;i<m;i++){
            for( j=0;j<n;j++){
                m1.mat1[i][j]+=m2.mat1[i][j];}}
             return m1;
        }
};
int main(){
    addsub obj1,obj2,obj3,obj4;
    int row,col;
    cout<<"enter row:"<<endl;
    cin>>row;
    cout<<"enter column:"<<endl;
    cin>>col;
    obj1.assign(row,col);
    obj2.assign(row,col);
    obj3.assign(row,col);
   
    cout<<"\nEnter the elements of the first matrix"<<endl;
    obj1.input();
    cout<<"\nEnter the elements of the second matrix"<<endl;
    obj2.input();
    obj3=obj3.add(obj1,obj2);
    
    
    cout<<"\nFirst Matrix"<<endl;
    obj1.Show();
    cout<<"\nSecond Matrix"<<endl;
    obj2.Show();
    cout<<"\nSum of the two matrices"<<endl;
    obj3.Show();  
}