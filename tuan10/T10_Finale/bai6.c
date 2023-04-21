#include <stdio.h>
#include <string.h>
#define size 10

typedef struct  {
    char mssv[10], name[50];
    float pplt, dstt, tcth, tbtl;
    char rank[10];
} SinhVien;

void printSv (SinhVien sv)  {
    printf ("Ma so sinh vien: %s\n", sv.mssv);
    printf ("Ho va ten: %s\n", sv.name);
    printf ("Diem phuong phap lap trinh: %.2f\n", sv.pplt);
    printf ("Diem dai so tuyen tinh: %.2f\n", sv.dstt);
    printf ("Diem toan cho tin hoc: %.2f\n", sv.tcth);
    printf ("Diem trung binh tich luy: %.2f\n", sv.tbtl);
    printf ("Xep loai hoc luc: %s\n\n", sv.rank);
}

void findSv (SinhVien sv[]) {
    char sid[10];
    printf ("Nhap ma so sinh vien tim kiem: ");
    scanf ("%s", &sid);
    int i;
    for (i = 0; i < size; i++)  {
        if (strcmp(sid, sv[i].mssv) == 0)   {
            printSv (sv[i]);
            return;
        }
    }
    printf ("Sinh vien khong ton tai\n\n");
}

void aveSv (SinhVien sv[])  {
    int i;
    for (i = 0; i < size; i++)  {
        sv[i].tbtl = (sv[i].pplt + sv[i].dstt + sv[i].tcth) / 3;
    }
}

void rankSv (SinhVien sv[]) {
    int i;
    for (i = 0; i < size; i++)  {
        if (sv[i].tbtl >= 8)    {
            strcpy(sv[i].rank, "Xuat sac");
        }
        else if (sv[i].tbtl >= 6)    {
            strcpy(sv[i].rank, "Kha");
        }
        else if (sv[i].tbtl >= 4)    {
            strcpy(sv[i].rank, "Trung binh");
        }
        else    {
            strcpy(sv[i].rank, "Yeu");
        }
    }
}

void findLow (SinhVien sv[])    {
    int i;
    SinhVien temp = sv[0];
    for (i = 1; i < size; i++)  {
        if (temp.tbtl > sv[i].tbtl)  {
            temp = sv[i];
        }
    }
    printf ("Sinh vien co diem trung binh tich luy thap nhat:\n");
    printSv (temp);
}

void aveList (SinhVien sv[])    {
    int i, sum = 0;
    printf ("Tong so sinh vien xep loai tu kha tro len: ");
    for (i = 0; i < size; i++)  {
        if (strcmp(sv[i].rank, "Kha") == 0 || strcmp(sv[i].rank, "Xuat sac") == 0)  {
            sum++;
        }
    }
    printf ("%d", sum);
}

int main (void) {
    SinhVien sv[size] = {
        {"522H0052", "Aa", 7.2, 8.6, 4.5},
        {"522H0083", "Bb", 6.8, 3.5, 4.9},
        {"522H0016", "Cc", 4.5, 4.1, 7.1},
        {"522H0025", "Dd", 5.0, 6.7, 8.7},
        {"522H0037", "Ee", 7.7, 6.1, 5.1},
        {"522H0068", "Ff", 4.6, 8.8, 9.6},
        {"522H0042", "Gg", 3.8, 2.1, 1.8},
        {"522H0073", "Hh", 4.0, 1.1, 5.8},
        {"522H0056", "Ii", 6.0, 3.3, 1.3},
        {"522H0034", "Jj", 7.9, 9.0, 8.7}
    };
    //a
    findSv (sv);
    //b
    aveSv (sv);
    //c
    rankSv (sv);
    //d
    findLow (sv);
    //e
    aveList (sv);
    return 0;
}