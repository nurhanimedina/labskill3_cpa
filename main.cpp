#include <iostream>
#include <iomanip>
using namespace std;

int courseInfo(int &mark, int &credit, int &course) ;
void calculateGrade(int &mark, string &grade, double &gradePoint) ;
void displayCourseResult(int &course, string &grade, double &coursePoint) ;
double displayFinalResult(double totalCredit, double totalCoursePoint, double CPA) ;

int main(){
	
	int course = 1 ;
	int	mark, credit ;
	string grade ;
	double gradePoint, coursePoint ;
	double totalCredit, totalCoursePoint, CPA ;
	char choice ;
	
	do{
		courseInfo(mark, credit, course) ;
	
		calculateGrade(mark, grade, gradePoint) ;
	
		coursePoint = gradePoint*credit ;
			
		displayCourseResult(course, grade, coursePoint) ;
		
		course++ ;	
		totalCredit = totalCredit + credit ;
		totalCoursePoint = totalCoursePoint + coursePoint ;
		
		cout << "Add more course?(Y-yes/N-no): " ;
		cin >> choice ;		
	}while (choice != 'N') ;
	
	displayFinalResult(totalCredit, totalCoursePoint, CPA) ;
	
return 0 ;
}

int courseInfo(int &mark, int &credit, int &course){
	cout << "\nEnter course " << course << " mark: ";
	cin >> mark ;
	if (mark > 0 && mark < 101){
		cout << "Enter course " << course << " credit: ";
		cin >> credit ;
	}else 
		cout << "Invalid mark! TRY AGAIN!" << endl ;
	return mark, credit, course ;
}

void calculateGrade(int &mark, string &grade, double &gradePoint){
	if (mark >= 90){grade = "A+"; gradePoint = 4.00 ;}
	else if (mark >= 80){grade = "A "; gradePoint = 4.00 ;}	
	else if (mark >= 75){grade = "A-"; gradePoint = 3.67 ;}	
	else if (mark >= 70){grade = "B+"; gradePoint = 3.33 ;}	
	else if (mark >= 65){grade = "B "; gradePoint = 3.00 ;}			
	else if (mark >= 60){grade = "B-"; gradePoint = 2.67 ;}		
	else if (mark >= 55){grade = "C+"; gradePoint = 2.33 ;}			
	else if (mark >= 50){grade = "C "; gradePoint = 2.00 ;}			
	else if (mark >= 45){grade = "C-"; gradePoint = 1.67 ;}		
	else if (mark >= 40){grade = "D+"; gradePoint = 1.33 ;}		
	else if (mark >= 35){grade = "D "; gradePoint = 1.00 ;}			
	else if (mark >= 30){grade = "D-"; gradePoint = 0.67 ;}		
	else if (mark >= 0){grade = "E"; gradePoint = 0.00 ;}
}

void displayCourseResult(int &course, string &grade, double &coursePoint){
	cout << "course " << course << " grade is " << grade << endl ;
	cout << "course " << course << " point is " << fixed << setprecision(2) << coursePoint << endl ;
}

double displayFinalResult(double totalCredit, double totalCoursePoint, double CPA){
	cout << fixed << setprecision(0) << "\nYour total credit for this current semester: " << totalCredit << endl ;
	cout << fixed << setprecision(2) << "Your total course point for this current semester: " << totalCoursePoint << endl ;
	CPA = totalCoursePoint/totalCredit ;
	cout << fixed << setprecision(2) << "Your CPA for this current semester: " << CPA << endl ;
	return totalCredit, totalCoursePoint, CPA ;
}
