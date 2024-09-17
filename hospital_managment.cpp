#include<bits/stdc++.h>
using namespace std;

int pid;
int did;

class Patient{
    public:
        string name;
        string gender;
        int age;
        int id;
        Patient(string n, int a, string g){
            id = pid++;
            name = n;
            age = a;
            gender = g;
        }
};

class Doctor{
    public:
        string name;
        string gender;
        int age;
        int id;
        Doctor(string n, int a, string g){
            id = did++;
            name = n;
            age = a;
            gender = g;
        }
};

class Appointment{

};


void addpatient(){

}

void adddoctor(){

}
void scheduleappointments(){

}

void viewdoctor(){

}

void viewpatient(){

}

void viewappointments(){


}

vector<Patient> allpatients;
vector<Doctor> alldoctors;
vector<Appointment> allappointments;

int main(){
    pid = 1;
    did = 1;
    int choice ;
    do{
        cout<<"1. Add Patient"<<endl;
        cout<<"2. Add Doctors"<<endl;
        cout<<"3. Schedule Appointments"<<endl;
        cout<<"4. View Patients list"<<endl;
        cout<<"5. View Doctors list"<<endl;
        cout<<"6. View Appointments"<<endl;
        cout<<"0. Exit the App"<<endl;
        cout<<"Enter Your Choice --> ";
        cin>>choice;

        switch(choice){
            case 1:
                addpatient();
                break;
            case 2:
                adddoctor();
                break;
            case 3:
                 scheduleappointments();
                break;
            case 4:
                viewpatient();
                break;
            case 5:
                viewdoctor();
                break;
            case 6:
                viewappointments();
                break;
            case 0:
                cout<<"Exiting the app";
                exit(0);
            default:
                cout<<"Invalid Choice"<<endl;
                cout<<endl<<endl<<endl<<endl;
                
        }

    }while(choice != 0);


    return 0;
}