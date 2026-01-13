#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct Student {
    int id;
    double score;
};

class StudentGroup {
public:
    static const int COUNT = 5;
    Student students[COUNT] = {
        {1001, 85.5},
        {1002, 92.0},
        {1003, 78.5},
        {1004, 92.0},
        {1005, 69.0},
    };

    // 返回最高成绩学生的学号（遇到并列时返回最先遇到的）
    int maxId() const {
        int maxIndex = 0;
        for (int i = 1; i < COUNT; ++i) {
            if (students[i].score > students[maxIndex].score) {
                maxIndex = i;
            }
        }
        return students[maxIndex].id;
    }

    void printMax() const {
        int maxIndex = 0;
        for (int i = 1; i < COUNT; ++i) {
            if (students[i].score > students[maxIndex].score) {
                maxIndex = i;
            }
        }
        cout << "最高成绩者学号: " << students[maxIndex].id
             << "，成绩: " << students[maxIndex].score << endl;
    }
};

int main()
{
    StudentGroup group;      // 在类中建立了包含 5 个学生的对象
    group.printMax();        // 输出最高成绩者学号和成绩

    return 0;
}
