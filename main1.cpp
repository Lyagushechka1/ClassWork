#include <iostream>
#include <vector>
using namespace std;

class Project{
private:
    string NameOfTheProject;
    string description;
    vector <string> Tasks = {};
    string start_date, end_date;
    string status;
public:
    Project(string n, string de, string stat) : NameOfTheProject(n), description(de), status(stat) {}
    string GetName(){ return this->NameOfTheProject; }
    string GetDescription(){ return this->description; }
    string GetStartdate(){ return this->start_date; }
    string GetEndDate(){ return this->end_date; }
    string GetStatus(){ return this->status; }

    void AddTask(string TaskName){
        this->Tasks.push_back(TaskName);
    }
    void RemoveTask(){
    }
    void StartDate(string sd){ this->start_date = sd; }
    void EndDate(string ed){ this->end_date = ed; }
};

class Task{
private:
    string description;
    string termin;
    string status;
public:
    string Getdescription(){ return this->description;}
    string GetIC(){ return this->termin; }
    string GetStatus(){ return this->status; }

    void Setdesc(string dc){ this->description = dc; }
    void SetTermin(string sT){ this->termin = sT; }
    void SetStatus(string st){ this->status = st; }

    void showall(){ cout << "description: " << description << "\nTermin vykonanya: " << termin << "\nProjact status: " << status << endl; }
};

class ProjectManager{
private:
    vector <Project> projects;
public:
};


int main()
{
    Project myProject("GTA6", "GTA NE VYIDET", "в розробці"); // Provide the required parameters
    myProject.AddTask("Complete mission 1");
    myProject.StartDate("1.1.2020");
    myProject.EndDate("12.3.2025");
    cout << "Project Name: " << myProject.GetName() << endl;
    cout << "Description: " << myProject.GetDescription() << endl;
    cout << "Start Date: " << myProject.GetStartdate() << endl;
    cout << "End Date: " << myProject.GetEndDate() << endl;
    cout << "Project status: "<< myProject.GetStatus() << "\n\n";


    Task a;
    a.Setdesc("Finish game");
    a.SetTermin("Today");
    a.SetStatus("завершено");
    a.showall();


}