#include<stdio.h>
int addTen(int x){ // เป็น function pass by value ก็อปค่าจาก parameter ลง
    x = x+10;
    return x;
}
int addTwenty(); // function prototype กำหนดไว้แล้วค่อยไปเขียนข้างล่างจะได้ไม่ดัน int main()
int x = 1000; // ตัวแปร global
int main(){
    int x = 50;
    int y = addTen(x);
    printf("x in main = %d\n",x);
    printf("addTen in main = %d\n",y);
    printf("addTwenty in main = %d\n",addTwenty());
}
int addTwenty(){ // ระวัง !!! ถ้าไม่ใส่ parameter ให้ func มันจะไปหาตัวแปรนอก func จะไม่เข้าไปยุ่งกับ func อื่น
    printf("x in addTwenty = %d\n",x); // x จะ = 1000 เป็นตัวแปร global
    x = x+20;
    return x;
}