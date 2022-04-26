#include <iostream>

// Enum values are integers
// Enum values in UPPERCASE
// Enum values are constant

enum PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4,
    UNKNOWN = 5
};

struct UserData
{
    char *name;
    unsigned int id;
    PermissionLevel permission_level;
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
        std::cout << "UNKNOWN! Error!" << std::endl;
        break;
    }
}

int main()
{
    PermissionLevel permission_level_jan = PermissionLevel::INSTRUCTOR;
    PermissionLevel permission_level_fabi = PermissionLevel::STUDENT;

    greet_permission_level(permission_level_fabi);
    greet_permission_level(permission_level_jan);

    UserData user_jan = {"Jan", 10801422, permission_level_jan};
    UserData user_fabi = {"Fabian", 10801337, permission_level_fabi};

    UserData user_peter;
    user_peter.name = "Peter";
    user_peter.id = 10801545;

    return 0;
}
