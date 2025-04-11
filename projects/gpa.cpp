/** gpa.cpp
* Purpose is to take inputs from users and to calculate an average gpa.
* 1) Create an Array or possible and ArrayList that allows multiple
*       intakes or a set number of intakes.
* 2) Create a input method that calls determines wether the 
*       person would still like to continue
* 3) After input are recorded and stored. Create another method
*       to make an average.
*/
#include <iostream>
#include <list>
#include <sstream>

double input() {
        double score;
        std::cout << "Enter a test score or grade from\
 a student: " << std::endl;
        std::cin >> score;
        return score;
}
std::list<double> average(std::list<double> grades) {
        return grades;
}

int main() {
        double b = input();

        std::string answer = "";
        std::cout << "Would you like to enter another grade\
'y', 'yes' or 'n', 'no'" << std::endl;
        std::cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin,::toupper();
        std::cout << "answer: " << answer << std::endl; 
        //Create the list for grades
        std::list<double> grades = {};

        std::cout << "Matthew 9:37 - 38 \nThen he said to his\
 disciples,\n 'The harvest is plentiful, but the laborers are few therefore pray earnestly to the Lord of the harvest to send out\
laborers into His harvest.'" << std::endl;

        return 0;
}

//        std::list<int> grades = {80, 90, 95, 99, 100};
//        for ( int grade: grades) {
//                std::cout << "grade: " << grade << std::endl;
//        //Adding a grade to the list
////        grades.front() = 101; 
//        grades.emplace_front(101);
//        //enhanced for loop printing list in c++
//
//        for ( int grade: grades) {
//                std::cout << "grade: " << grade << std::endl;
//        }
