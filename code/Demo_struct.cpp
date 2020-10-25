#include <stdio.h>
// define max 100;
typedef struct {
    char name[max];
    int age;
} author;

typedef struct {
    short id;
    char name[15];
    int NoOfAuthor;
    author *book_author;
} book;
voud nhap(book *b) {
    scanf("%d\n", &b->id);
    gets(b->name);
    scanf("%d", b->NoOfAuthor);
    b->book_author = (author *)malloc(b->NoOfAuthor * sizeof(author));
    for (int i = 0; i < b->NoOfAuthor; i++) {
        gets((b->book_outhor + i)->name);
        scanf("%d\n", &(b->book_author + i)->age);
    }
}
void xuat(book b) {
    printf("book{id:") ....
}
int main() {
    // book b;
    // printf("b: {size: %d, add: %d}\n", sizeof(b), &b);
    // Viết chương trình nhập thông tin sách và in ra màn hình
    //    Note:
    //         -C1 : dùng scanf("%d\n", &b.id); có thể dung spacce or \n
    //         -C2 : dùng fflush(stdin); Xóa bộ nhớ đệm-- > Không khuyến nghị
    //         - C3 : Nhân đôi lệnh bị trôi.book b;
    // scanf("%d", &b.id);
    // gets(b.name);
    // gets(b.outhor);

    // Nhập xuất cấu trúc
    //     -Không sử dụng hàm
    // -có sử dụng hàm
    // -Hiện tượng trôi lệnh.

    return 0;
}