#include <iostream>

using namespace std;

class AbstractSkillWillStudent {
    protected:
        string FirstName;
        string LastName;
        string Teach;
        int Age;
        string Section;
        string Course;
        double QuizScore;
        double LastQuizScore;
        
    public:
    
        string getFirstName(){
            return FirstName;
        }
        
        void setFirstName(string FirstName){
            this -> FirstName = FirstName;
        }
        
        string getLastName(){
            return LastName;
        }
        
        void setLastName(string LastName){
            this -> LastName = LastName;
        }
    
        string getTeach(){
            return Teach;
        }
        
        void setTeach(){
            this -> Teach = Teach;
        }
    
        int getAge(){
            return Age;
        }
    
        void setAge(int NewAge){
            this -> Age = Age;
        }
         string getSection(){
            return Section;
        }
        
        void setSection(string Section){
            this -> Section = Section;
        }
        
        string getCourse(){
            return Course;
        }
        
        void setCourse(string Course){
            this -> Course = Course;
        }
        
        double getQuizScore(){
            return QuizScore;
        }
        
        void setQuizScore(double QuizScore){
            this -> QuizScore = QuizScore;
        }
        
         double getLastQuizScore(){
            return LastQuizScore;
        }
        
        void setLastQuizScore(double LastQuizScore){
            this -> LastQuizScore = LastQuizScore;
        }
        
    
        AbstractSkillWillStudent(string FirstName, string LastName ,string Teach, int Age){
            this -> FirstName = FirstName;
            this -> LastName = LastName;
            this -> Teach = Teach;
            this -> Age = Age;
        }
    
       
        virtual void studentInfo ()=0; 
        void AttendingLecture () {
            cout << "The student attends the lecture" ;  
        }
        
};

class SkillWill: public AbstractSkillWillStudent {
 
    public:
        SkillWill (string FirstName, string LastName ,string Teach, int Age): AbstractSkillWillStudent (FirstName,LastName,Teach,Age){}
      
       
        void studentInfo (){
            cout<< "First Name : " << getFirstName()<<endl;
            cout<<"Last Name : "<< getLastName()<<endl;
            cout<<"Course : "<<getTeach()<<endl;
            cout<<"Age : "<< getAge()<<endl;
        }  
        
         void StudentStudyAndScore(){
             cout << getFirstName()<< " "<< getLastName() << " is student of " << getTeach() <<" in Section "<< getSection() <<endl;
            cout << "student got " << getQuizScore() << " points in the quiz for the month" << endl;
         }
      
         void Update(){
            cout<<"Student"<<endl;
            cout<< "First Name : "<< getFirstName()<<endl;
            cout<<"Last Name : "<<getLastName()<<endl;
            cout<<"The final result of the quiz :"<<endl;
            cout<< getLastQuizScore() <<endl;
        }
    
        
        void AttendingLecture () {
          cout << getFirstName()<< " "<< getLastName() << "is attending " <<  endl;  // აქ საბჯექთიდან წამოვა საგანი//
        }
        
   
};
    

int main()
{
   //სტუდენტი სახელი გვარი სურსი ასაკი
   
  SkillWill student("Giorgi","Pkhakadze","Web",29);
  student.studentInfo();
  
  //სტუდენტი  რომელ სექციაზეა კურსზე ქულა
//   student.setSection("C");
//   student.setQuizScore(36);
//   student.StudentStudyAndScore();


// სტუდენტი საბოლოო ქულა
//   student.setLastQuizScore(70);
//   student.Update();
   
   
    return 0;
}
