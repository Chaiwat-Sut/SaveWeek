#include <stdio.h>
#include <stdlib.h> //liberly
char name[20];
char number[5];
char chr;
char chr1;
int main(){
    //printf("Enter name: %s",name);
    //gets(name);
    // fgets(name,20,stdin); //อ่านจากตรงไหนก็ได้(ตัวแปร,ตัวอักษร,ตำแหน่ง)
    // getchar(chr);
    // printf("%s",name);
    // fgets(number,5,stdin);
    // int i = atoi(number); // array to int
    // long l =alot // array to long
    // double f = alof // array to float
    // printf("number = %s, i = %d",number,i); //กำหนดเผื่อ \0 ไว้ด้วย
    
    // chr = getchar();
    // chr1 = getchar();       // ระวัง Enter เป็น char เหมื่อนกัน
    // fgets(number,5,stdin);
    // int i = atoi(number);      // ถ้าใส่ตัวที่แปลงไม่ได้จะแปลงเป็น 0
    // puts(number); 
    // putchar(100);
    // putchar('u');

    // ตัวที่เป็น false 
    // int found = 0; // ไม่มี bool = false 
    // float isExist = 0.0;
    // char isOnline = '\0';
    
    // fgets(number,5,stdin);
    // int i = atoi(number); 
    
    // if (i>0 && i<=10){ // and
    //     printf("if = %d",i>0 && i<=10);
    // }
    // else if(i<=20 || !found){ // ||or !not
    //     printf("else if\n");
    // }
    // else{
    //     printf("else\n");
    // }
    fgets(number,5,stdin);
    int i = atoi(number); 
    int count = 0;
    // ++count;// + ก่อนค่อยไป จะใช้กับงานต้องการความเร็ว
    // while(count <i){
    //     printf("count = %d\n",count);
    //     count++;// ไปก่อนค่อย +  
    // }
    for (int j = 0; j < i;j++){ // (state1,state2,state3) 1ทำครั้งเดียว 2เช็คถ้าไม่ตรงหยุด loop
        printf("j = %d\n",j);
    }
}