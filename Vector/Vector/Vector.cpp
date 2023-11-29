// Vector.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Vector
{
    int x, y, z;
    public:
        Vector() { x = 0, y = 0; };
        Vector(int m, int n) { x = m, y = n; }
        Vector(int m, int n, int p) { x = m, y = n, z = p; }
        void print()//method
        {
            printf("(%d,%d)\n", x, y);
        }
        void printf3d()
        {
            printf("(%d,%d,%d)\n", x, y, z);
        }
        Vector Add(Vector p)
        {
            Vector q;
            q.x = x + p.x;
            q.y = y + p.y;
            return q;
        }
        Vector Subtract(Vector p)
        {
            Vector q;
            q.x = x - p.x;
            q.y = y - p.y;
            q.z = z - p.z;
            return q;
            
        }
        int dot_product(Vector p)
        {
            int res = x * p.x + y * p.y + z*p.z;
            return res;
        }
        Vector cross_product(Vector p)
        {
            Vector q;//dummy Vector
            q.x = y * p.z - z * p.y;
            q.y = z * p.x - x * p.z;
            q.z = x * p.y - y * p.z;
            return q;

        }
};

void main()
{
    Vector v1 = Vector(4, 1);
    Vector v2 = Vector(3,4);
    Vector v3 = Vector();
    Vector v4 = Vector(2,5,9);
    Vector v5 = Vector(-1,3,6);
    Vector v6 = Vector(0, 0, 0);
    v1.print();
    v2.print();
    v3.print();
    printf("\n\t v4 ="); v4.printf3d();
    printf("\n\t v5 ="); v5.printf3d();
    v3 = v1.Add(v2);
    v3 = v1.Subtract(v2);
    printf("\n\n\t v1-v2=");
    v3.print();
    int mag = v4.dot_product(v5);
    printf("v4 . v5 = %d\n\n", mag);
    v6 = v4.cross_product(v5);
    printf("v4 x v5 ="); v6.printf3d();
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
