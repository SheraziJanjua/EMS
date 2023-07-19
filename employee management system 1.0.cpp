#include <iostream>
using namespace std;
void add_employee();
void search_employee();
void search_by_name();
void search_by_id();
void salary_report();
void update_record();
void delete_employee();
void top_3_employees();
void current_month_hirings();
void current_month_firing();
void update_rank();
void update_work_position();
void display();
void choice();
const int M=50;
struct employee
{
    char name[M];
    int id[S];
    int rank[S];
    int wp[S];


};
int main()
{
choice();
}
void choice()
{
    while(true)
    {
 int opt;
 cout<<"\n\n**************************EMPLOYEE MANAGEMENT SYSTEM**************************\n\n";
 cout<<"\t\t\t\t  SELECT OPTION\n\n";
 cout<<"\t\t\t\t 1--> MANAGE DATA \n\n";
 cout<<"\t\t\t\t 2--> SEARCH DATA \n\n";
 cout<<"\t\t\t\t 3--> REPORTS \n\n";
 cout<<"\t\t\t\t 4--> EXIT \n\n";
 cin>>opt;
 switch(opt)
 {
 case 1:                         /// 1st case of main options
     while(true)
    {
    cout<<"\t\t\t\t 1--> ADD DATA \n\n";
    cout<<"\t\t\t\t 2--> UPDATE DATA \n\n";
    cout<<"\t\t\t\t 3--> DELETE DATA \n\n";
    cout<<"\t\t\t\t 4--> DISPLAY \n\n";
    cout<<"\t\t\t\t 5--> EXIT \n\n";
    cin>>opt;

        switch(opt)
        {
        case 1:
            add_employee();
            break;
        case 2:
            while (true)
            {
                 cout<<"\t\t\t\t 1--> UPDATE RENK \n\n";
                 cout<<"\t\t\t\t 2--> UPDATE WORKING POSITION \n\n";
                 cout<<"\t\t\t\t 3--> EXIT \n\n";
                 cin>>opt;
                 switch(opt)
                 {


             case 1:
                update_rank();
                break;
             case 2:
                 update_work_position();
                 break;
                 }
                 if(opt==3)
                    break;
            }
            break;
        case 3:
            delete_employee();
            break;
        case 4:
            display();
            break;
        case 5:
            exit;

        }

    }
    break;
        case 2:               /// 2nd case of main options
            while(true)
        {
        cout<<"\t\t\t\t 1--> SEARCH EMPLOYEE BY NAME\n\n";
        cout<<"\t\t\t\t 2--> SEARCH EMPLOYEE BY ID\n\n";
        cout<<"\t\t\t\t 3--> EXIT \n\n";
        cin>>opt;

            switch(opt)
            {
            case 1:
                search_by_name();
                break;
            case 2:
                search_by_id();
                break;
           }
           if (opt==3)
            break;
        }
        break;
            case 3:            /// 3rd case of main options
                while(true)
                {
                cout<<"\t\t\t\t 1--> TOP POSITIONS EMPLOYEES\n\n";
                cout<<"\t\t\t\t 2--> NEW HIRINGS REPORT\n\n";
                cout<<"\t\t\t\t 3--> FIRED EMPLOYEE REPORT\n\n";
                cout<<"\t\t\t\t 4--> SALARY REPORTS\n\n";
                cout<<"\t\t\t\t 5--> EXIT \n\n";
                cin>>opt;
                switch(opt)
                {
                case 1:
                    top_3_employees();
                    break;
                case 2:
                    current_month_hirings();
                    break;
                case 3:
                    current_month_firing();
                    break;
                case 4:
                    salary_report();
                    break;
                }
                if(opt==5)
                    break;
                }







 }
 if (opt==5)
    break;

 }

}
void add_employee()
{
    employee e,
    cout<<"enter employee name\n\n";
    cin.getline(e.name,S);
    cin.ignore();
    cout<<"enter employee id\n\n";
    cin.getline(e.id,S);
    cin.ignore();
    cout<<"enter work position of employee\n\n";
    cin.getline(e.wp,S)
}

