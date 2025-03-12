// Q1
// #include<iostream>
// using namespace std;

// class Student{
//     public:
//     string name;
//     char section;
//     string roll_no;
//     string semester;

//     void input(){
//         cout<<"Enter Name: ";
//         cin>>name;
//         cout<<"Enter Section: ";
//         cin>>section;
//         cout<<"Enter Roll.NO: ";
//         cin>>roll_no;
//         cout<<"Enter Semester: ";
//         cin>>semester;
//     }
//     void display(){
//         cout<<endl <<"Name: "<<name<<endl <<"Semester: "<<semester<<endl<<"Section: "<<section<<endl<<"Roll.No: "<<roll_no << endl;  
//     }
    

// };
// int main(){
//     Student student [4];
//     for (int i=0;i<4;i++){
//         cout<<" "<<endl;
//         cout<<"Enter Details of Student "<<i+1<<endl;
//         student[i].input();
//         cout<<" "<<endl;
        
//     }
//     cout<<" "<<endl;
//     cout<<"STUDENT IN SECTION A: "<<endl;;
//     for(int i=0;i<4;i++) {
//         if (student[i].section == 'a' || student[i].section =='A'){
//             student[i].display();
//         }
//         cout<<" "<<endl;
//     }

// }


//Q2
// #include<iostream>
// using namespace std;

// class Account{
//     private:
//     int balance;
//     int no_of_transactions=0;
//     float interestRate;
//     public:
//     Account(int balance){
//         if(balance<0){
//             cout<<"Invalid balance";
//         }
//         else{
//             this->balance=balance;
//             this->interestRate=interestRate;
//         }
//     }
//     Account(){ this->balance=0;}
//     int deposit(int deposit){
//         this->balance+=deposit;
//         no_of_transactions++;
//         return balance;
//     }
//     int withdrawal(int withdrawal){
//         if(withdrawal<=balance){
//         this->balance-=withdrawal;
//         no_of_transactions++;
//         }
//         else if(withdrawal>balance){
//             cout<<"Insufficient Balance";
//         }
//         return balance;
//     }
//     void Interest(int months) {
//         float interestRate;
//         cout<<"ENTER INTEREST RATE: ";
//         cin>>interestRate; 
//         float monthlyRate = interestRate / 100.0;
//         double interest = balance *interestRate * months;
//         cout << "Interest earned for " << months << " month " << interest <<endl;
//     }  
//     void balance_display(){
//         cout<<endl <<"Current Balance: "<<balance<<endl;
//     }
//     void n_o_t_display(){
//         cout<<endl <<"No. of Transactions of the Account: "<<no_of_transactions<<endl;
//     }
//     void display_menu(){
//         cout<< "1.DISPLAY THE ACCOUNT BALANCE"<<endl<<"2.DISPLAY THE NUMBER OF TRANSACTIONS"<<endl<<"3.DISPLAY INTEREST EARNED FOR THIS PERIOD"<<endl<<"4.MAKE A DEPOSIT"<<endl<<"5.MAKE A WITHDRAWAL"<<endl<<"6.EXIT THE PROGRAM"<<endl;
//     }
//     int menu_working(){
//         int input;
//         while(true){
//         display_menu();
//         cout<<"PLEASE ENTER YOUR CHOICE: ";
//         cin>>input;
//         switch(input){
//         case 1:
//             balance_display();
//             break;
//         case 2:
//             n_o_t_display();
//             break;
//         case 3:
//             int months;
//             cout<<"Enter Number of Months: ";
//             cin>>months;
//             Interest(months);
//             break;
//         case 4:
//             cout<<"Enter Amount You want to Deposit: ";
//             int Deposit;
//             cin>>Deposit;
//             deposit(Deposit);
//             break;
//         case 5:
//             cout<<"Enter Amount You want to WIthdrawal: ";
//             int Withdrawal;
//             cin>>Withdrawal;
//             withdrawal(Withdrawal);
//             break;
//         case 6:
//             exit(0);
//             break;
//         default:
//             cout<<"Invalid choice.Choose Number between 1 to 6";
//         }
//     }
// }
// };
// int main(){
//     Account b1(1000);
//     b1.menu_working();  
//     cout<<"----------------------";
// }


//  Q3
#include <iostream>
#include <cstring> 
using namespace std;

class Employee {
private:
    char* firstname;  
    string lastname;
    int salary;
    int yearlysalary;

public:
    Employee(const char* FirstName, string lastname, int salary) {
        this->firstname = new char[strlen(FirstName) + 1];  
        strcpy(this->firstname, FirstName);
        this->lastname = lastname;
        this->salary = (salary > 0) ? salary : 0;
        this->yearlysalary = this->salary * 12; 
    }
    ~Employee() {
        delete[] firstname;
    }
    void setFirstName(const char* FirstName) {
        delete[] firstname;  
        firstname = new char[strlen(FirstName) + 1];  
        strcpy(firstname, FirstName);
    }
    const char* getFirstName() {
        return firstname;
    }
    void setSalary(int salary) {
        if(salary>=0){
        this->salary = salary; 
        this->yearlysalary = this->salary * 12; 
        }
        else{
            this->salary=0;
            this->yearlysalary=0;
        } 
    }
    int getSalary() {
        return salary;
    }
    void setLastName(string lastname) {
        this->lastname = lastname;
    }
    string getLastName() {
        return lastname;
    }
    int getYearlySalary() {
        return yearlysalary;
    }
    void raiseSalary(float percent) {
        float raisepercent = percent / 100.0;
        yearlysalary += yearlysalary * raisepercent; 
        salary = yearlysalary / 12;  
    }
    void display() {
        cout << "First Name: " << firstname << endl;
        cout << "Last Name: " << lastname << endl;
        cout << "Monthly Salary: " << salary << endl;
        cout << "Yearly Salary: " << yearlysalary << endl;
    }
};

int main() {
    Employee e1("Ahmed", "Raza", 10000);
    Employee e2("idk", "idk", 20100);
    Employee e3("Leo", "Messi", 23000);
    e1.display();
    e1.raiseSalary(10);
    cout<<"--------------"<<endl;
    e1.display();
    cout<<"--------------"<<endl;
    e2.display();
    e2.raiseSalary(10);
    cout<<"--------------"<<endl;;
    e2.display();
    cout<<"--------------"<<endl;;
    e3.display();
    e3.raiseSalary(10);
    cout<<"--------------"<<endl;;
    e3.display();

    return 0;
}
