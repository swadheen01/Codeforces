
#include<iostream>
using namespace std;
struct studentinfo{
    string name;
    int id;
    int ban,eng,math;
    int total;
};
int main()
{
    studentinfo student[3];

    for(int i=0; i<3; i++){
        cin>>student[i].name>>student[i].id>>student[i].ban>>student[i].eng>>student[i].math;
        student[i].total = student[i].ban + student[i].eng + student[i].math;
    }
    int mx = 0;
    string highest;

    for(int i=0; i<3; i++)
    {
        cout<<student[i].total<<endl;
        if(student[i].total>mx){
            mx = student[i].total;
            highest = student[i].name;
        }
    }
    cout<<highest<<endl;
}
