// 1. Include Guard: ป้องกันไม่ให้โปรแกรมดึงไฟล์นี้ไปคอมไพล์ซ้ำซ้อน
#ifndef STUDENT_H
#define STUDENT_H

// 2. เรียกใช้ Library ที่จำเป็น
#include <iostream>
#include <string> 

using namespace std; 
// หมายเหตุ: ในการทำงานจริง นิยมไม่ใส่ using namespace std; ในไฟล์ .h 
// แต่สำหรับวิชา Intro ถือว่าใช้ได้เพื่อความสะดวกครับ
class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a) : name(n), age(a) {}
    void display() {
        cout << name << " " << age << endl;
    }
    int getAge() { return age; }
};

#endif // จบ Include Guard