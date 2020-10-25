// #include<stdio.h> 
// #include<stdlib.h>
// int main(){
//     /*
//         - Có 3 thao tác trên file:
//             + Mở file văn bản(.txt):
//                 .Khai báo: 
//                     FILE *fopen(const char *filename, const char *mode);
//                 //  FILE *<danh sách biến con trỏ,đại diện cho tập tin> ;
//                 .Ví dụ: FILE *f ; 
//                         FILE *f1,*f2,*f3 ; // nếu cần nhiều biến con trỏ
//                 .Mở tập tin: 
//                     f=fopen("<tên file>","<mode>") ; // mode: chuỗi xác định cách thức mở tập tin
//                     Các mode mở file:
//                         r/rb: mở tập tin văn bản/binary để đọc
//                         w/wb: tạo ra tập tin văn bản/binary mới để ghi
//                         a/ab: Nối vào tập tin văn bản/binary
//                         r+/r+b:mở 1 tập tin văn bản/bin để đọc,ghi
//                         w+/w+b: tạo 1 tập tin văn bản/bin để đọc,ghi
//                         a+/a+b: nối vào 1 tập tin văn bản/bin để đọc,ghi


//             + Thao tác (đọc, ghi)
//                 Đọc ghi file văn bản:
//                     . Đọc:
//                         fscanf(<tên trỏ file>,"%...", tên biến);  // fscanf(f,"%d", &num);

//                     . Ghi:
//                         fprintf(<tên trỏ file>,"Những gì cần in", tên biến nếu cần); // fprintf(f,"num=%d",num);
//                 Đọc ghi file nhị phân:
//                     ->cần 4 tham số: địa chỉ của biến lưu trữ cần đọc/ghi, kích thước của biến lưu dữ liệu đó
//                                     số lượng kiểu dữ liệu của biến đó, tên con trỏ file cần đọc/ghi.
//                     .Đọc:
//                         fread(add_data, size_data, number_data, pointer_to_file)
//                     .Ghi:
//                         fwrite(add_data, size_data, number_data, pointer_to_file);

//             + Đóng file
//                 Dùng cú pháp: fclose(<tên con trỏ trỏ tới file>) ;
//                 vd: fclose(f) ;
//     */
//     FILE *f ;
//     f=fopen("File_lythuyet.txt","w");
//     fprintf(f,"NguyenQuangHa %d tuoi",34) ;
//     // fputs("Nguyen QUang Ha",f);
//     // fputc('\n',f);

//     return 0 ;


#include <stdio.h>
#include <stdlib.h>  /* For exit() function */
int main()
{
   char sentence[1000];
   FILE *fptr;
 
   fptr = fopen("programa.txt", "w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
   
   printf("Enter a sentence:\n");
   gets(sentence);
 
   fprintf(fptr,"%s", sentence);
   fclose(fptr);
 
   return 0;
}