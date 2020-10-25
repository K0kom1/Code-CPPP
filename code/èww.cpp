#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	char name[30], city[30];
    int score;
} stype;
typedef struct {
	char tenho[20],tendem[20],ten[20];
} nametype;

int main(){
    FILE *f;
    f = fopen("student.dat","r+");
    char line[50];
    stype  stulist[20];
    int n=0;
    while (fgets(line, sizeof(line), f)) {
      strcpy(stulist[n].name, strtok(line,","));
      strcpy(stulist[n].city, strtok(NULL,","));
      stulist[n].score= atoi(strtok(NULL,","));
      n++;
    }
fclose(f);

printf("7. Sap xep bang chu cai:\n");

 f = fopen("student.dat","r+");

    stype  tam;
    nametype tenhs[n], tamten;
    int a=0;
    while (fgets(line, sizeof(line), f)) {
      strcpy(tenhs[a].tenho, strtok(line," "));
      strcpy(tenhs[a].tendem, strtok(NULL," "));
      strcpy(tenhs[a].ten, strtok(NULL,","));
      a++;
    }

printf("Thu tu chua sap xep:\n")  ;  
for (int i=0;i<n;i++){printf("%20s %20s %2d\n",stulist[i].name,stulist[i].city,stulist[i].score); }

for (int i=0;i<n;i++){
    for (int j=i+1;j<n;j++){
        if (strcmp(tenhs[i].ten,tenhs[j].ten)>0) {
          //Doi trong danh sach sv                                         
          tam = stulist[i];
          stulist[i]=stulist[j];
          stulist[j]=tam;
          //Doi trong danh sach ten
          tamten = tenhs[i];
          tenhs[i]=tenhs[j];
          tenhs[j] = tamten;
        }
    }
}
printf("\n Thu tu sau khi sap xep:\n");
for (int i=0;i<n;i++){
    printf("%20s %20s %2d\n",stulist[i].name,stulist[i].city,stulist[i].score);}
  fclose(f);
  return 0;
}

