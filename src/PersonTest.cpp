#include "Person.h"

#include <boost/algorithm/string/classification.hpp>
#include <boost/algorithm/string/split.hpp>

#include "gtest/gtest.h"

#include "data/FirstNamesFemales.h"
#include "data/FirstNamesMales.h"
#include "data/LastNames.h"

using namespace ::testing;
using namespace faker;

class PersonTest : public Test
{
public:
};

TEST_F(PersonTest, shouldGenerateFirstName)
{
    std::vector<std::string> firstNames{firstNamesMales};

    firstNames.insert(firstNames.end(), firstNamesFemales.begin(), firstNamesFemales.end());

    const auto generatedFirstName = Person::firstName();

    ASSERT_TRUE(std::any_of(firstNames.begin(), firstNames.end(),
                            [generatedFirstName](const std::string& firstName)
                            { return firstName == generatedFirstName; }));
}

TEST_F(PersonTest, shouldGeneratemMaleFirstName)
{
    const auto generatedFirstName = Person::firstName(Sex::Male);

    ASSERT_TRUE(std::any_of(firstNamesMales.begin(), firstNamesMales.end(),
                            [generatedFirstName](const std::string& firstName)
                            { return firstName == generatedFirstName; }));
}

TEST_F(PersonTest, shouldGenerateFemaleFirstName)
{
    const auto generatedFirstName = Person::firstName(Sex::Female);

    ASSERT_TRUE(std::any_of(firstNamesFemales.begin(), firstNamesFemales.end(),
                            [generatedFirstName](const std::string& firstName)
                            { return firstName == generatedFirstName; }));
}

TEST_F(PersonTest, shouldGenerateLastName)
{
    const auto generatedLastName = Person::lastName();

    ASSERT_TRUE(std::any_of(lastNames.begin(), lastNames.end(),
                            [generatedLastName](const std::string& lastName)
                            { return lastName == generatedLastName; }));
}

TEST_F(PersonTest, shouldGenerateFullName)
{
    std::vector<std::string> firstNames{firstNamesMales};

    firstNames.insert(firstNames.end(), firstNamesFemales.begin(), firstNamesFemales.end());

    const auto generatedFullName = Person::fullName();

    std::vector<std::string> names;

    boost::split(names, generatedFullName, boost::is_any_of(" "));

    const auto generatedFirstName =names[0];
    const auto generatedLastName =names[1];

    ASSERT_TRUE(std::any_of(firstNames.begin(), firstNames.end(),
                            [generatedFirstName](const std::string& firstName)
                            { return firstName == generatedFirstName; }));
    ASSERT_TRUE(std::any_of(lastNames.begin(), lastNames.end(),
                            [generatedLastName](const std::string& lastName)
                            { return lastName == generatedLastName; }));
}

TEST_F(PersonTest, shouldGenerateMaleFullName)
{
    const auto generatedFullName = Person::fullName(Sex::Male);

    std::vector<std::string> names;

    boost::split(names, generatedFullName, boost::is_any_of(" "));

    const auto generatedFirstName =names[0];
    const auto generatedLastName =names[1];

    ASSERT_TRUE(std::any_of(firstNamesMales.begin(), firstNamesMales.end(),
                            [generatedFirstName](const std::string& firstName)
                            { return firstName == generatedFirstName; }));
    ASSERT_TRUE(std::any_of(lastNames.begin(), lastNames.end(),
                            [generatedLastName](const std::string& lastName)
                            { return lastName == generatedLastName; }));
}

TEST_F(PersonTest, shouldGenerateFemaleFullName)
{
    const auto generatedFullName = Person::fullName(Sex::Female);

    std::vector<std::string> names;

    boost::split(names, generatedFullName, boost::is_any_of(" "));

    const auto generatedFirstName =names[0];
    const auto generatedLastName =names[1];

    ASSERT_TRUE(std::any_of(firstNamesFemales.begin(), firstNamesFemales.end(),
                            [generatedFirstName](const std::string& firstName)
                            { return firstName == generatedFirstName; }));
    ASSERT_TRUE(std::any_of(lastNames.begin(), lastNames.end(),
                            [generatedLastName](const std::string& lastName)
                            { return lastName == generatedLastName; }));
}