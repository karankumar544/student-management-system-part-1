#include <iostream>
#include <cstdlib>
using namespace std;
class student
{

private:
public:
    void menu();
};
void student ::menu()
{
    int choice;
    system("cls");

    cout << "\t\t\t-------------------------------" << endl;
    cout << "\t\t\t|     BASIC INFORMATIONS       |" << endl;
    cout << "\t\t\t-------------------------------" << endl;
    cout << "\t\t\t 1-> Enter For Name." << endl;
    cout << "\t\t\t 2-> Enter FOr Branch." << endl;
    cout << "\t\t\t 3-> Enter FOr Phone No." << endl;
    cout << "\t\t\t 4-> Enter FOr Roll No." << endl;
    cout << "\t\t\t 5-> Enter For Collage Name." << endl;
    cout << "\t\t\t 6-> Enter For Reg No." << endl;
    cout << "\t\t\t 7-> Enter for Exit."<<endl;
    cout << "\t\t\t-------------------------------" << endl;
    cout << "\t\t\t| Choose Option:[1/2/3/4/5/6/7]. |" << endl;
    cout << "\t\t\t-------------------------------" << endl;
  do
    {
    cout<<"Enter your choosen option ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Karan Kumar Baitha"<<endl;
        break;
    case 2:
        cout<<"Infomation Technology"<<endl;
        break;
    case 3:
        cout<<"6204368077"<<endl;
        break;
    case 4:
        cout<<"21IT38"<<endl;
        break;
    case 5:
        cout<<"Muzaffarpur Institute Of Technology"<<endl;
        break;
    case 6:
        cout<<"21106107021"<<endl;
        break;
    default:
    {
        if(choice==7)
        {
            break;
        }
        else
        cout<<"Invalid choice..Please Try Again.."<<endl;
    }
    
    } 
    if(choice==7)
    {
         cout<<"\n\t\t\t  THANK YOU RADHE RADHE.."<<endl;
        break;
    }
    }
    while (1);
}
int main()
{
    student project;
    project.menu();
    return 0;
}