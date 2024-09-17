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
    public:
    int patientid;
    int doctorid;
    string date;
    // public:
    Appointment(int p, int d, string datee){
        patientid = p;
        doctorid = d;
        date = datee;
    }
};


vector<Patient> allpatients;
vector<Doctor> alldoctors;
vector<Appointment> allappointments;

void addpatient(){
    int a;
    string n;
    string g;
    cout<<"Give the patient name : "<<endl;
    cin>>n;
    cout<<"Give the patienet Age :"<<endl;
    cin>>a;
    cout<<"Give the patient Gender : "<<endl;
    cin>>g;
    
    Patient temp(n,a,g);
    allpatients.push_back(temp);


}

void adddoctor(){

    int a;
    string n;
    string g;
    cout<<"Give the Doctor name : "<<endl;
    cin>>n;
    cout<<"Give the Doctor Age :"<<endl;
    cin>>a;
    cout<<"Give the Doctor Gender : "<<endl;
    cin>>g;
    
    Doctor temp(n,a,g);
    alldoctors.push_back(temp);
}

void scheduleappointments(){
    int pi, di;
    string date;
    cout<<"Give the Patient ID : "<<endl;
    cin>>pi;
    cout<<"Give the Doctor ID : "<<endl;
    cin>>di;
    cout<<"Enter the Date : "<<endl;
    cin>>date;

    Appointment temp(pi, di, date);
    allappointments.push_back(temp);

}

void viewdoctor(){
    cout<<endl<<endl;
    for(int i=0; i<alldoctors.size(); i++){
        cout<<endl;
        cout<<"Doctor ID --> "<<alldoctors[i].id<<endl;
        cout<<"Doctor Name --> "<<alldoctors[i].name<<endl;
        cout<<"Gender --> "<<alldoctors[i].gender<<endl;
        cout<<endl;
    }
    cout<<endl<<endl<<endl;
}

void viewpatient(){
    cout<<endl<<endl;
    for(int i=0; i<allpatients.size(); i++){
        cout<<endl;
        cout<<"Patient ID -->"<<allpatients[i].id<<endl;
        cout<<"Patient Name --> "<<allpatients[i].name<<endl;
        cout<<"Gender -->"<<allpatients[i].gender<<endl;
        cout<<endl;
    }
    cout<<endl<<endl;
}

void viewappointments(){
    cout<<endl<<endl;
    for(int i=0; i<allappointments.size(); i++){
        cout<<endl;
        cout<<"Patient ID -->"<<allappointments[i].patientid<<endl;
        cout<<"Appointment with Doctor ID -->"<<allappointments[i].doctorid<<endl;
        cout<<"Date --> "<<allappointments[i].date<<endl;
        cout<<endl;
    }
    cout<<endl<<endl;
}



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