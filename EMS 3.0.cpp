
#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
struct Node
{
    string emp_id,name,post,dept,wp;
    float salary;
    Node *link;
};
class Employee
{
 private:
     Node *front;
 public:
    employee()
    {
        front=NULL;
    }




    void login()
    {
        //system("cls");
        string user,pass;
        cout<<"\n\n";
        cout<<"\t\t\t============================";
        cout<<"\n\n\t\t\t\tLOGIN PANEL";
        cout<<"\n\n\t\t\t============================";
        cout<<"\n\n\n ENTER USER NAME:   ";
        cin>>user;
        cout<<"\n\n ENTER PASSWORD:  ";
        for(int i=0;i<6;i++)
        {
            pass +=getch();
            cout<<"*";
        }
        if(user == "sameerehsaan" && pass == "123456")
            {
                cout<<"\n\n\n\t\t\tLOGIN SUCCESSFUL";
                cout<<"\n\n\n\t\t\tLOADING";
                for(int i=0;i<6;i++)
                {
                    int sleep(500);
                    cout<<".";
                }
               // control_panel();
            }
                else
                    cout<<"\n\n\n USER NAME OR PASSWORD IS INCORRECT...";
        }


       void add_employee()
       {
           system("cls");
           Node *newer=new Node;
          cout<<"\n\n\t\t\t==========================";
          cout<<"\n\n\t\t\t ADD EMPLOYEE RECORD";
          cout<<"\n\n\t\t\t==========================";
          cout<<"\n\n EMPLOYEE ID:  ";
          cin>>newer -> emp_id;
          cout<<"\n\n EMPLOYEE NAME:  ";
          cin>>newer -> name;
          cout<<"\n\n EMPLOYEE POST:  ";
          cin>>newer -> post;
          cout<<"\n\n EMPLOYEE DEPARTMENT:  ";
          cin>>newer -> dept;
          cout<<"\n\n EMPLOYEE SALARY:  ";
          cin>>newer -> salary;
          cout<<"\n\n EMPLOYEE WORK POSITION:  ";
          cin>>newer -> wp;
          if (front == NULL || newer -> wp <= front -> wp)
          {
              newer -> link = front;
              front = newer;
          }
          else
          {
              Node *pred=front;
              while(pred -> link !=NULL && newer -> wp<= pred->link->wp)
                pred=pred->link;
              newer -> link = pred -> link;
              pred -> link = newer;
          }
          Node *ptr=front;
        /*  while(ptr!=NULL)
          {
              if(newer -> emp_id == ptr -> emp_id)
              {
                  cout<<"\n\n ***DUPLICATE EMPLOYEE RECORD OR THIS ID ALREADY EXIST***";
                  delete newer;
              }
              ptr=ptr -> link;
          }*/
          cout<<"\n\n ***EMPLOYEE RECORD ADDED***";

       }
   void search()
   {
       system("cls");
       int found=0;
       string emp_id;
       cout<<"\n\n\t\t\t==========================";
       cout<<"\n\n\t\t\t SEARCH EMPLOYEE RECORD";
       cout<<"\n\n\t\t\t==========================";
       if(front == NULL)
       {
          cout<<"\n\n ***EMPLOYEE LIST IS EMPTY***";
       }
       else
       {
           cout<<"\n\n ENTER EMPLOYEE ID FOR SERACH";
           cin>>emp_id;
           Node *temp = front;
           while (temp != NULL)
           {
               if(emp_id == temp -> emp_id)
               {
                   system("cls");
                cout<<"\n\n\t\t\t==========================";
                cout<<"\n\n\t\t\t  EMPLOYEE RECORD FOUND";
                cout<<"\n\n\t\t\t==========================";
                cout<<"\n\n EMPLOYEE ID:  "<<temp -> emp_id;
                cout<<"\n\n EMPLOYEE NAME:  "<<temp -> name;
                cout<<"\n\n EMPLOYEE POST:  "<<temp -> post;
                cout<<"\n\n EMPLOYEE DAPERTMENT:  "<<temp -> dept;
                cout<<"\n\n EMPLOYEE SALARY:  "<<temp -> salary;
                found++;

               }
               temp = temp -> link;
           }
           if(found == 0)
            cout<<"\n\n  EMPLOYEE RECORD NOT FOUND";
       }
   }
   void edit()
   {
       system("cls");
       int found=0;
       string emp_id;
       cout<<"\n\n\t\t\t==========================";
       cout<<"\n\n\t\t\t EDIT EMPLOYEE RECORD";
       cout<<"\n\n\t\t\t==========================";
       if(front == NULL)
       {
          cout<<"\n\n ***EMPLOYEE LIST IS EMPTY***";
       }

            else
       {
           cout<<"\n\n ENTER EMPLOYEE ID FOR SERACH";
           cin>>emp_id;
           Node *temp = front;
           while (temp != NULL)
           {
               if(emp_id == temp -> emp_id)
               {
                   cout<<"\n\n EMPLOYEE NAME:  ";
                   cin>>temp  -> name;
                   cout<<"\n\n EMPLOYEE POST:  ";
                   cin>>temp  -> post;
                   cout<<"\n\n EMPLOYEE DEPARTMENT:  ";
                   cin>>temp  -> dept;
                   cout<<"\n\n EMPLOYEE SALARY:  ";
                   cin>>temp  -> salary;
                   cout<<"\n\n EMPLOYEE WORK POSITION:  ";
                   cin>>temp -> wp;
                   cout<<"\n\n ***EMPLOYEE RECORD MODIFIED***";
                   found++;

               }
               temp=temp -> link;
           }
            if(found == 0)
               cout<<"\n\n  EMPLOYEE RECORD NOT FOUND";
        }
    }
   void del()
   {
       system("cls");
       int found=0;
       string emp_id;
       cout<<"\n\n\t\t\t==========================";
       cout<<"\n\n\t\t\t EDIT EMPLOYEE RECORD";
       cout<<"\n\n\t\t\t==========================";
       if(front == NULL)
       {
          cout<<"\n\n ***EMPLOYEE LIST IS EMPTY***";
       }

        else
       {
           cout<<"\n\n ENTER EMPLOYEE ID FOR SERACH";
           cin>>emp_id;
           if(emp_id == front -> emp_id)
           {
               Node *temp=front;
               front = front -> link;
               delete temp;
               cout<<"\n\n ***EMPLOYEE RECORD DELETED***";
               found++;
           }
           else
           {
               Node *pred=front;
               Node *temp=front;
               while(temp != NULL)
               {
                   if(emp_id == temp -> emp_id)
                   {
                       pred -> link = temp -> link;
                       cout<<"\n\n ***EMPLOYEE RECORD DELETED***";
                       found++;
                       break;
                    }
                    pred = temp;
                    temp = temp -> link;
               }
            if(found == 0)
            cout<<"\n\n  EMPLOYEE RECORD NOT FOUND";
           }
   }
   }
   void display()
   {
       system("cls");
       cout<<"\n\n\t\t\t==========================";
       cout<<"\n\n\t\t\t SEARCH EMPLOYEE RECORD";
       cout<<"\n\n\t\t\t==========================";
       if(front==NULL)
       {
                     cout<<"\n\n ***EMPLOYEE LIST IS EMPTY***";

       }
       else
       {
           Node *temp = front;
           while(temp!=NULL)
           {
                cout<<"\n\n EMPLOYEE ID:  "<<temp -> emp_id;
                cout<<"\n\n EMPLOYEE NAME:  "<<temp -> name;
                cout<<"\n\n EMPLOYEE POST:  "<<temp -> post;
                cout<<"\n\n EMPLOYEE DAPERTMENT:  "<<temp -> dept;
                cout<<"\n\n EMPLOYEE SALARY:  "<<temp -> salary;
                cout<<"\n\n==================================";
                cout<<"\n==================================";

           }
           temp=temp ->link;
       }

   }


};
int main()
{
        Employee e;
        system("cls");
        cout<<"\n\n\n\n\n\n\n";
        cout<<"\t\t\t==========================";
        cout<<"\n\t\t\t==========================";
        cout<<"\n\n\t\t\tEMPLOYEE MANAGEMENT SYSTEM";
        cout<<"\n\n\n\t\t\t       VERSION : 3.0";
        cout<<"\n\n\t\t\t===========================";
        cout<<"\n\t\t\t===========================";
        e.login();
}



