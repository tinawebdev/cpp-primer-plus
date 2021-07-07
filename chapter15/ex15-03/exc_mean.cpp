#include "exc_mean.h"

BaseError::~BaseError()
{
}

void BaseError::Report() const
{
    std::cout << argument1 << ", " << argument2 << std::endl;
}

void bad_hmean::Report() const
{
    std::cout << "\a\nbad_hmean() arguments: ";
    BaseError::Report();
    std::cout << what() << std::endl;
}

void bad_gmean::Report() const
{
    std::cout << "\a\nbad_gmean() arguments: ";
    BaseError::Report();
    std::cout << what() << std::endl;
}
