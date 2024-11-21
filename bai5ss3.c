#include <stdio.h>

int main() {
    // in ra cac hang
    printf("------------------------------------------------------------\n");
    printf("| STT | Ho va ten       | Tuoi | So dien thoai | email                  |\n");
    printf("------------------------------------------------------------\n");
    //in ra danh sach sinh vien
    for (int i = 1; i <= 10; i++) {
        printf("| %-3d | Nguyen Van %c   | %-4d | 090448848%d  | %c%c%c@rikkeiacademy.com |\n",
               i, 'A' + i - 1, 18 + (i % 5), i, 'a' + i - 1, 'n', 'v');
    }
    //ketthucbang
    printf("------------------------------------------------------------\n");
    return 0;
}

