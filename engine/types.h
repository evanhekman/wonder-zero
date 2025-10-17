#pragma once

enum RESOURCE {
    WOOD,
    STONE,
    BRICK,
    ORE,
    GLASS,
    PAPYRUS,
    CLOTH,
};

enum ARTIFACT {
    COMPASS,
    TABLET,
    GEAR,
};

enum AGE {
    FIRST,
    SECOND,
    THIRD,
    SCORING,
};

enum COLOR {
    BROWN,
    GRAY,
    BLUE,
    RED,
    YELLOW,
    GREEN,
    PURPLE,
};

enum CIVILIZATION {
    ALEXANDRIA,
    BABYLON,
    EPHESOS,
    GIZAH,
    HALIKARNASSOS,
    OLYMPIA,
    RHODOS,
};

enum RESOURCE_EFFECT {
    // yellow cards that affect resource availability
    EAST_POST,
    WEST_POST,
    MARKETPLACE,
    CARAVANASERY,
    FORUM,
    // any symbol green cards
    SCIENCE_GUILD,
    // babylon special - play both cards at end of age
    PLAY_BOTH_CARDS,
    // olympia special - first card of each color is free
    NEW_FREE,
    // olympia special - first card each age is free
    ALPHA_FREE,
    // olympia special - last card each age is free
    OMEGA_FREE,
};