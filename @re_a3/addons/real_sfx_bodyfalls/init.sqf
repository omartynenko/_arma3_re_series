// Bodyfall SFX
real_sfx_unit_bodyfall_concrete = [
    "real_bodyfall_concrete_1",
    "real_bodyfall_concrete_2",
    "real_bodyfall_concrete_3"
];
real_sfx_unit_bodyfall_grass = [
    "real_bodyfall_grass_1",
    "real_bodyfall_grass_2",
    "real_bodyfall_grass_3"
];
real_sfx_unit_bodyfall_drygrass = [
    "real_bodyfall_drygrass_1",
    "real_bodyfall_drygrass_2",
    "real_bodyfall_drygrass_3"
];
real_sfx_unit_bodyfall_sand = [
    "real_bodyfall_sand_1",
    "real_bodyfall_sand_2",
    "real_bodyfall_sand_3"
];
real_sfx_unit_bodyfall_gravel = [
    "real_bodyfall_gravel_1",
    "real_bodyfall_gravel_2",
    "real_bodyfall_gravel_3"
];
real_sfx_unit_bodyfall_metal = [
    "real_bodyfall_metal_1",
    "real_bodyfall_metal_2",
    "real_bodyfall_metal_3"
];
real_sfx_unit_bodyfall_water = [
    "real_bodyfall_water_1",
    "real_bodyfall_water_2",
    "real_bodyfall_water_3"
];
real_sfx_unit_bodyfall_wood = [
    "real_bodyfall_wood_1",
    "real_bodyfall_wood_2",
    "real_bodyfall_wood_3"
];
real_sfx_unit_bodyfall_virtual = [
    "real_bodyfall_virtual_1",
    "real_bodyfall_virtual_2",
    "real_bodyfall_virtual_3"
];

// Array sizes (saves having to calculate them later)
real_sfx_unit_bodyfall_concrete_size = count real_sfx_unit_bodyfall_concrete;
real_sfx_unit_bodyfall_grass_size = count real_sfx_unit_bodyfall_grass;
real_sfx_unit_bodyfall_drygrass_size = count real_sfx_unit_bodyfall_drygrass;
real_sfx_unit_bodyfall_sand_size = count real_sfx_unit_bodyfall_sand;
real_sfx_unit_bodyfall_gravel_size = count real_sfx_unit_bodyfall_gravel;
real_sfx_unit_bodyfall_metal_size = count real_sfx_unit_bodyfall_metal;
real_sfx_unit_bodyfall_water_size = count real_sfx_unit_bodyfall_water;
real_sfx_unit_bodyfall_wood_size = count real_sfx_unit_bodyfall_wood;
real_sfx_unit_bodyfall_virtual_size = count real_sfx_unit_bodyfall_virtual;

// Initialization
_null = [] execVM "\real_sfx_bodyfalls\sfx_bodyfalls.sqf";