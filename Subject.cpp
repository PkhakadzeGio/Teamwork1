#include <iostream>

using namespace std;
class AbstractSubject {
    protected:
    string Name;
    string DurationOfTheCourse;
    string StartDate;
    string LastLectureName;
    
    public:
    
    string getName() {
        return Name;
    } 
    
    void setName(string Name) {
        this -> Name = Name;
        }
        
        string getDurationOfTheCourse() {
            return DurationOfTheCourse;
        }
        
        void setDurationOfTheCourse( string DurationOfTheCourse) {
            this -> DurationOfTheCourse = DurationOfTheCourse;
        }
        
        string getStartDate() {
            return StartDate;
        }
        void setStartDate (string StartDate) {
            this -> StartDate = StartDate;
        }
        
        string getLastLectureName(){
            return LastLectureName;
        }
        
        void setLastLectureName(string LastLectureName){
            this -> LastLectureName = LastLectureName;
        }
        
        AbstractSubject(string Name,string DurationOfTheCourse,string StartDate){
            this -> Name = Name ;
            this -> DurationOfTheCourse = DurationOfTheCourse;
            this -> StartDate = StartDate;
        }
        
        virtual void LastLecture()=0;
        void AboutCourse(){
         cout << "Information About Course "<<endl;  
        }
   
};
    
    class SkillWill: public AbstractSubject {
         
          public:
          
        SkillWill(string Name,string DurationOfTheCourse,string StartDate): AbstractSubject(Name, DurationOfTheCourse, StartDate){}
        
        void LastLecture(){
            cout << "The title of the last lecture is "<<getLastLectureName();
        }
        
        void AboutCourse(){
            cout<<"Course Name : "<< getName()<<endl;
            cout<<"Duration of the course : "<< getDurationOfTheCourse()<<endl;
            cout<<"Start Date : " << getStartDate()<<endl;
        }
      
        };
        
int main()
{
    
    //ინფორმაცია კურსზე
    SkillWill frontend("FrontEnd","3 Month","30 March");
    frontend.AboutCourse();

    //ბოლო ლექციის სახელი
    frontend.setLastLectureName("'Learn Javascript'");
    frontend.LastLecture();
    
    return 0;
}
