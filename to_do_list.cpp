// TASK- 4
// TO- DO- LIST

/* Build a simple console- based to- do list
manager that allows users to add, view, and
delete tasks. 
*/

#include<iostream>
#include<windows.h>
using namespace std;

// Global variable declaration

string tasks[10] ={" "};
int count= 0;
int taskNumber= -1;

void input_task(){
    if(count > 9){
        cout<< " TASK LIST IS FULL"<<endl;
        }
    else{
        cout<< "Enter A new task: ";
        cin.ignore();
        getline(cin, tasks[count]);
        cout<< "-----------------------------"<< endl;
        count++ ;
        }
}

void print_tasks( string tasks[], int count, int taskNumber){
    cout<< " TASK TO DO: "<< endl;
    cout<< "-----------------------------"<< endl;
    if(taskNumber>=0 && taskNumber<=9 || taskNumber==-1){
            for(int i=0; i< count; i++){
                if(taskNumber==i){
                    cout<< "Task["<< i<< "] : "<<tasks[i]<< "\t completed."<< endl;
                    cout<< " Completed task will be deleted."<< endl;
                }

                else{
                    cout<< "Task["<< i<< "] : "<<tasks[i]<< "\t pending."<< endl;
                    
                }

                
          }
           }
    
    cout<< "-----------------------------"<< endl;

    
}

int main(){


int option= -1;
while(option != 0){

    cout<<" \t  TO- DO- LIST "<< endl;
    cout<< "1- To add new task"<< endl;
    cout<< "2- To view tasks "<< endl;
    cout<< "3- Mark task as completed. "<< endl;
    cout<<"4- Delete the task "<<endl;
    cout<<"0 - Terminate the program" << endl;
    cout<<"\n";
    cout<<" Enter option number: ";
    cin>> option;

    switch(option){
        case 1:
        {
            input_task();
            break;
        }

        case 2: 
        {
            system("cls");
            print_tasks(tasks, count, taskNumber );
            
            break;

        }

        case 3:
        {
           cout<<"Enter the task number mark as completed."<< endl;
           cin>> taskNumber ;
           if(taskNumber>=0 && taskNumber<=9 || taskNumber==-1){
            cout<<  tasks[taskNumber] <<" is completed."<< endl ;
                for(int i=taskNumber; i< count; i++){

                      tasks[i] = tasks[i+1];
                      taskNumber=-1;
                      
                }
                count--;
            }


           else{
            cout<<" Invalid task number."<< endl;
           }
         cout<< "-----------------------------"<< endl;

           break;
        }
        
        case 4:
        {
            system("cls");
            print_tasks(tasks, count, taskNumber) ;
            int del_task = 0;
            cout<< " Enter A task to delete : " ;
            cin>> del_task;
            
            if(del_task< 0 || del_task >9)   
            {
                cout<< " You enter invalid task number."<< endl;
                break;
            }  

            for(int i= del_task ; i<count; i++)
            {
                tasks[i] = tasks[i+1];
                count--;
                
            }
            break;
        }

        case 0:
        {
            cout<<" Terminating the program"<<endl;
            cout<< "-----------------------------"<< endl;
            break;
        }

        default:
        {
            cout<<" You entered Invalid Value"<< endl;
        }
    }

}
return 0;
}

