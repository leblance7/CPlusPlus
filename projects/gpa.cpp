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
#include <bits/stdc++.h>

double input() {
/** define temp var for elements of array */
        double score;
/** User output and takes answer from user in next
 * 	two lines */
        std::cout << "Enter a test score or grade from\
 a student: " << std::endl;
        std::cin >> score;
        return score;
}

/** Creation of average(std::list <double> grades)
 */
std::list<double> average(std::list<double> grades) {
        return grades;
}

int main() {
        double b = input();
/** Creating a subitiuable variable to take the input
 * 	of the user. */
        std::string answer =  "";

/** Output for the user to see */
        std::cout << "Would you like to enter another grade\
'y', 'yes' or 'n', 'no'" << std::endl;

/** Take the user input and puts it into a string */
        std::cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(),::toupper);
/** Printing the output */
        std::cout << "answer: " << answer << std::endl; 
/** Creating the list for grades */
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
