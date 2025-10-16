#include<iostream>
#include<string>
using namespace std;
int shipGame(){
    int arr[4][4]=
    {
    {0,0,1,0},
    {1,0,0,0},
    {0,0,0,1},
    {1,0,0,0}
};
int hits=0;
int r;
int c;
int numberOfturns=0;
while(hits<4){
    cout<<"input your row number";
    cin>>r;
    cout<<"input your column number";
    cin>>c;
    
    numberOfturns++;
    if(arr[r][c]==1){
        hits++;
        cout<<"you have hit the ship"<<"\n";
        arr[r][c]=0;
        
    }
}
cout<<"congrats you have own the game in "<<numberOfturns<<" turns";
return 0;
}
//the below code is for finding largest element in an array
int largestElement(){
    int arr[]={2,4,10,8,11};
    int lval=0;
    for(int i=0;i<5;i++){
        if(arr[i]>lval){
            lval=arr[i];
        }
    }
    cout<<"the largestELement in an array is"<<lval;
    return 0;
}
//the below code is for sum of all elements in an array
int sum(){
    int arr[]={2,4,6,8,10};
    int sum=0;
    for(int i=0;i<5;i++){
        sum=arr[i]+sum;
    }
    cout<<"sum of all elements is"<<sum;
    return 0;
}
//the below code is for reversing the elements in an array
int reverse(){
    int arr[]={1,2,3,4,5};
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<"\n";
    }
    return 0;
}
//the below code is for structure
int structure(){//this is single variable struct
    struct{
        string name;
        int age;
        float fee;
    } studentData;
    studentData.name="adil";
    studentData.age=18;
    studentData.fee=3000.50;
    cout<<studentData.name<<"\n";
    cout<<studentData.age<<"\n";
    cout<<studentData.fee;
return 0;
}
int multinamedstructure(){
    struct{
        string book;
        int pages;
        float price;
    } book1,book2,book3;
    book1.book="java";
    book1.pages=200;
    book1.price=300.50;
    book2.book="python";
    book2.pages=200;
    book2.price=300.40;
    book3.book="c";
    book3.pages=200;
    book3.price=200.50;
    cout<<book1.book<<"\n";
    cout<<book1.pages<<"\n";
    cout<<book1.price<<"\n";
    cout<<book2.book<<"\n";
    cout<<book2.pages<<"\n";
    cout<<book2.price<<"\n";
    cout<<book3.book<<"\n";
    cout<<book3.pages<<"\n";
    cout<<book3.price<<"\n";
return 0;
}
int namedstructure(){
    struct adil{
        int age;
        string name;
        float height;
    };
    adil student;
    student.age=20;
    student.name="adil";
    student.height=6.1;
    adil schoolData;
    schoolData.age=16;
    schoolData.name="chaitanya";
    schoolData.height=5.8;
    adil uniData;
    uniData.age=22;
    uniData.name="cbit";
    uniData.height=6.0;
    cout<<student.age<<"\n";
    cout<<student.name<<"\n";
    cout<<student.height<<"\n";
    cout<<schoolData.age<<"\n";
    cout<<schoolData.name<<"\n";
    cout<<schoolData.height<<"\n";
    cout<<uniData.age<<"\n";
    cout<<uniData.name<<"\n";
    cout<<uniData.height;
    return 0;
}
//the below code is for references
int reference(){
    string study="sreeVidya";
    string &clg=study;
    cout<<study<<"\n";
    cout<<clg;
    return 0;
}
int updateRefer(){
    string study="sreeVidya";
    string &clg=study;
    clg="bhavana";
    cout<<clg<<"\n";
    cout<<study;
    return 0;
}
int memoryAddress(){
    string name="adil";
    cout<<&name;
    return 0;
}
int main(){
    shipGame();
    largestElement();
    sum();
    reverse();
    structure();
    multinamedstructure();
    namedstructure();
    reference();
    updateRefer();
    return 0;
}