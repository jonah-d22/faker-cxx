#pragma once

#include <string_view>

namespace faker
{
class Computer
{
public:
    /**
     * @brief Returns a random computer type.
     *
     * @returns computer type
     *
     * @code
     * Computer::type() // Laptop
     * @endcode
     */
    static std::string_view type();

    /**
     * @brief Returns a random computer manufacture name.
     *
     * @returns manufacture name
     *
     * @code
     * Computer::manufacture() // HP
     * @endcode
     */
    static std::string_view manufacture();

    /**
     * @brief Returns a random computer model.
     *
     * @returns computer model
     *
     * @code
     * Computer::model() // MacBook Air
     * @endcode
     */
    static std::string_view model();

    /**
     * @brief Returns a random CPU manufacture name.
     *
     * @returns CPU manufacture name
     *
     * @code
     * Computer::cpuManufacture() // Intel
     * @endcode
     */
    static std::string_view cpuManufacture();

    /**
     * @brief Returns a random CPU type.
     *
     * @returns CPU type
     *
     * @code
     * Computer::cpuType() // x86
     * @endcode
     */
    static std::string_view cpuType();

    /**
     * @brief Returns a random CPU model.
     *
     * @returns computer CPU model
     *
     * @code
     * Computer::cpuModel() // Core i9-11900k
     * @endcode
     */
    static std::string_view cpuModel();

    /**
     * @brief Returns a random GPU manufacture name.
     *
     * @returns GPU manufacture name
     *
     * @code
     * Computer::gpuManufacture() // NVIDIA
     * @endcode
     */
    static std::string_view gpuManufacture();

    /**
     * @brief Returns a random GPU type.
     *
     * @returns GPU type
     *
     * @code
     * Computer::gpuType() // Integrated
     * @endcode
     */
    static std::string_view gpuType();

    /**
     * @brief Returns a random GPU model.
     *
     * @returns computer GPU model
     *
     * @code
     * Computer::gpuModel() // NVIDIA GeForce RTX 3080
     * @endcode
     */
    static std::string_view gpuModel();
};

}
