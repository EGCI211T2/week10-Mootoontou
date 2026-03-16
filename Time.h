// 1. Include Guard: ป้องกันไม่ให้โปรแกรมดึงไฟล์นี้ไปคอมไพล์ซ้ำซ้อน
#ifndef TIME_H
#define TIME_H

// 2. เรียกใช้ Library ที่จำเป็น
#include <iostream>
#include <iomanip> 

using namespace std; 
// หมายเหตุ: ในการทำงานจริง นิยมไม่ใส่ using namespace std; ในไฟล์ .h 
// แต่สำหรับวิชา Intro ถือว่าใช้ได้เพื่อความสะดวกครับ

// 3. ประกาศ Struct ตามที่คุณกำหนด
struct Time {
    int m, h, s;
};

// 4. เขียนฟังก์ชันทั้ง 3 ฟังก์ชัน
// ฟังก์ชันที่ 1: รับค่าเวลา
void getTime(Time &t) {
    cin >> t.h >> t.m >> t.s;
}

// ฟังก์ชันที่ 2: ลบเวลา (t2 - t1)
Time subtract(Time t1, Time t2) {
    Time t3;
    
    t3.s = t2.s - t1.s;
    t3.m = t2.m - t1.m;
    t3.h = t2.h - t1.h;

    if (t3.s < 0) {
        t3.s += 60;
        t3.m--;
    }
    if (t3.m < 0) {
        t3.m += 60;
        t3.h--;
    }
    if (t3.h < 0) {
        t3.h += 24;
    }
    
    return t3;
}

// ฟังก์ชันที่ 3: แสดงผล (00:00:00)
void display(Time t) {
    cout << setfill('0') << setw(2) << t.h << ":"
         << setfill('0') << setw(2) << t.m << ":"
         << setfill('0') << setw(2) << t.s << endl;
}

#endif // จบ Include Guard