#include <iostream>

// Enum values are integers
// Enum values in UPPERCASE
// Enum values are constant

enum PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4
};

void greet_permission_level(PermissionLevel level)
{
    switch (level)
    {
    case PermissionLevel::STUDENT:
        std::cout << "Hello STUDENT" << std::endl;
        break;
    case PermissionLevel::TUTOR:
        std::cout << "Hello TUTOR" << std::endl;
        break;
    case PermissionLevel::INSTRUCTOR:
        std::cout << "Hello INSTRUCTOR" << std::endl;
        break;
    case PermissionLevel::ADMIN:
        std::cout << "Hello ADMIN" << std::endl;
        break;

    default:
        break;
    }
}

int main()
{
    PermissionLevel permission_level_jan = PermissionLevel::INSTRUCTOR;
    PermissionLevel permission_level_fabi = PermissionLevel::STUDENT;

    greet_permission_level(permission_level_fabi);
    greet_permission_level(permission_level_jan);


    return 0;
}
