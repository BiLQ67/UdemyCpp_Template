#include <iostream>

// 1.) Two Enums cannot share the same names
// 2.) No variable can have a name which already reserved by an enum
// 3.) Enums are not type safe

enum class PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4
};

enum class ExamPerson
{
    STUDENT,
    INSTRUCTOR
};

int main()
{
    PermissionLevel permission_level_jan = PermissionLevel::INSTRUCTOR;
    PermissionLevel permission_level_fabi = PermissionLevel::STUDENT;

    ExamPerson jan = ExamPerson::INSTRUCTOR;
    ExamPerson fabi = ExamPerson::STUDENT;

    return 0;
}
