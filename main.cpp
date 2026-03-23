#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <climits>

using namespace std;

#include "Student.h"

int main(int argc, char* argv[]) {
    vector<Student> students;
    for(int i=1; i<argc; i+=2) {
        if(i+1 < argc) {
            string name = argv[i];
            int age = atoi(argv[i+1]);
            students.push_back(Student(name, age));
        }
    }
    if(students.empty()) return 0;
    int min_age = INT_MAX;
    for(auto& s : students) {
        if(s.getAge() < min_age) min_age = s.getAge();
    }
    for(auto& s : students) {
        if(s.getAge() == min_age) {
            s.display();
        }
    }
    return 0;
}
