#pragma once

#include <string_view>

namespace faker
{
class Plant
{
public:
    /**
     * @brief returns a random species of flower
     * 
     * @returns species of flower
     * 
     * @code
     * Plant::flower() // Lily
     * @endcode
     */
    static std::string_view flower();

    /**
     * @brief Returns a random species of tree
     * 
     * @returns species of tree
     * 
     * @code
     * Plant::tree() // Pine
     * @endcode
     */
    static std::string_view tree();

    /**
     * @brief Returns a random type of plant
     * 
     * @returns type of plant
     * 
     * @code
     * Plant::plantType() // tree
     * @endcode
     */
    static std::string_view plantType();
};
}