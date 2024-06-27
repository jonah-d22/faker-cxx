#include "faker-cxx/Plant.h"

#include <algorithm>
#include <string_view>

#include "gtest/gtest.h"

#include "plant/PlantData.h"

using namespace ::testing;
using namespace faker;

class PlantTest : public Test
{
public:
};

TEST_F(PlantTest, shouldGeneratePlantType)
{
    const auto generatedPlantType = Plant::plantType();
    
    ASSERT_TRUE(std::ranges::any_of(plantTypes, [generatedPlantType](const std::string_view& plantType)
                                    {return plantType == generatedPlantType;}));
}

TEST_F(PlantTest, shouldGenerateFlowerType)
{
    const auto generatedFlower = Plant::flower();

    ASSERT_TRUE(std::ranges::any_of(flowers, [generatedFlower](const std::string_view& flower)
                                    {return flower == generatedFlower;}));
}

TEST_F(PlantTEst, shouldGenerateTreeType)
{
    const auto generatedTree = Plant::tree();

    ASSERT_TRUE(std::ranges::any_of(trees, [generatedTree](const std::string_view& tree)
                                    {return tree == generatedTree;}));
}