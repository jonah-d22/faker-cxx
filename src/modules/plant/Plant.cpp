#include "faker-cxx/Plant.h"

#include <string_view>

#include "PlantData.h"
#include "faker-cxx/Helper.h"

namespace faker
{
std::string_view Plant::flower()
{
    return Helper::arrayElement(flowers);
}

std::string_view Plant::tree()
{
    return Helper::arrayElement(trees);
}

std::string_view Plant::plantType()
{
    return Helper::arrayElement(plantTypes);
}
}