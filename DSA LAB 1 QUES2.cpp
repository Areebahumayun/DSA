#include<iostream>
using namespace std;
double calculateGPA(double gpas[],int totalcourses){
	double sum=0;
	for(int i=0;i<totalcourses;i++){
		sum+=gpas[i];
	}
	return sum/totalcourses;
	
}
int main(){
	double ali[] = {3.66, 3.33, 4.0, 3.0, 2.66}; 
    double hiba[]= {3.33, 3.0, 3.66, 3.0};       
    double asma[]  = {4.0, 3.66, 2.66};            
    double zain[] = {2.66, 2.33, 4.0};            
    double faisal[]= {3.33, 3.66, 4.0, 3.0, 3.33};

    cout << "Ali's GPA: "    << calculateGPA(ali, 5)    << endl;
    cout << "Hiba's GPA: "   << calculateGPA(hiba, 4)   << endl;
    cout << "Asma's GPA: "   << calculateGPA(asma, 3)   << endl;
    cout << "Zain's GPA: "   << calculateGPA(zain, 3)   << endl;
    cout << "Faisal's GPA: " << calculateGPA(faisal, 5) << endl;

    return 0;
}
	
	
	
	
	
