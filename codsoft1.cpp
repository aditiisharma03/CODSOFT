#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> tasks;
vector<bool> taskStatus;

void addTasks()
{
  string newtask;
  cout<<"Enter a new task:";
  cin>>newtask;
  tasks.push_back(newtask);
  taskStatus.push_back(false);
  cout<<"Task added successfully!"<<endl;
}

void viewTasks()
{
  int i;
  cout<<"Task list:"<<endl;
  for(i=0;i<tasks.size();i++)
  {
    cout<<"["<<(i+1)<<"]"<<tasks[i];
    if(taskStatus[i])   cout<<"(completed)"<<endl;
    else   cout <<"(pending)"<< endl;
      
  }
  
}


void markTaskAsCompleted(){
  int taskNumber;
  cout <<"Enter the task number to mark as completed:";
  cin >> taskNumber;
  taskNumber--;
  if (taskNumber>=0 && taskNumber < tasks.size()){
    taskStatus [taskNumber]=true;
    cout <<"Task marked as completed !"<< endl;
  } else {
    cout << "Invalid task number!"<< endl;
  }
}
void removeTask(){
   int taskNumber;
  cout << "Enter the task number to remove:";
  cin >> taskNumber;
  taskNumber --;
  if (taskNumber >=0 && taskNumber < tasks.size()) {
    tasks.erase(tasks.begin()+ taskNumber);
    cout << "Task removed successfully!" << endl;
  } else {
    cout << " Invalid task number!"<< endl;
  }
  }
int main (){
  int choice;
  while(true){
    cout << "To-Do List Manager" << endl;
    cout << "__________________" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View Tasks"<< endl;
    cout << "3. Mark Task as Completed" << endl;
    cout << "4. Remove Task" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice:";
    cin >> choice;

    cin.ignore();

    switch (choice){
      case 1:
       addTasks();
       break;
      case 2:
       viewTasks();
       break;
      case 3:
       markTaskAsCompleted();
       break;
      case 4:
       removeTask();
       break;
      case 5:
      cout << "Goodbye!" << endl;
    }
    cout << endl;
  }
  return 0;
}