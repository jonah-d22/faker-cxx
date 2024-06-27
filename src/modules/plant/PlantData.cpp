#include "PlantData.h"

#include <array>
#include <string_view>

namespace faker
{
const std::array<std::string_view, 60> flowers = {
    "rose", "sunflower", "hydrangea", "lavender", "peony", "daisy", "orchid", "tulip", "lily", 
    "chrysanthemum", "dahlia", "daffodil", "iris", "periwinkle", "azalea", "calla lily", "carnation",
    "marigold", "violet", "begonia", "gardenia", "hyacinth", "kale", "amarath", "geranium", "galdiolus",
    "petunia", "ranunculus", "zinnia", "anemone", "aster", "black-eyed susan", "buttercup", "larkspur",
    "pansy", "snapdragon", "delpinium", "gerbera daisy", "yarrow", "allium", "astilbe", "cornflower", 
    "crocus", "dianthus", "phlox", "alstroemeria", "california poppy", "celosia", "agapanthus",
    "lisianthus", "freesia", "campanula", "dusty miller", "liatris", "gypsophilia", "scabiosa", 
    "stock", "hypericum", "eryngium", "brunia"
};

const std::array<std::string_view, 65> trees = {
    "arborvitae", "black ash", "white ash", "bigtooth aspen", "quaking aspen",
    "basswood", "american beech", "black birch", "gray birch", "paper birch",
    "yellow birch", "butternut", "black cherry", "pin cherry", "american chestnut",
    "eastern cottonwood", "cucumber tree", "american elm", "slippery elm", "balsam fir",
    "hawthorn", "eastern hemlock", "bitternut hickory", "pignut hickory", "shagbark hickory",
    "american hophornbeam", "american hornbeam", "american larch", "black locust", "honey-locust",
    "red maple", "silver maple", "sugar maple", "black oak", "chestnut oak",
    "northern red oak", "scarlet oak", "white oak", "eastern white pine", "pitch pine",
    "red pine", "eastern redcedar", "sassafra", "shadbush", "red spruce",
    "white spruce", "sycamore", "tulip tree", "black walnut", "black willow",
    "apple", "apricot", "avocado", "cherry", "coconut",
    "fig", "lemon", "lime", "mango", "olive",
    "orange", "peach", "pear", "plum", "pomegranate"
};

const std::array<std::string_view, 2> plantTypes = {"tree", "flower"};
}