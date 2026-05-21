#ifndef USER_EXCEPTION_HPP
#define USER_EXCEPTION_HPP

#include <exception>

class UserException: public std::exception
{
public:
    const char* what() const noexcept override;
};

#endif
