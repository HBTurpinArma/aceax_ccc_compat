class CCC_Vest_Modular
{
    options[] = { "camo", "type" }; // Always computed, do not edit
    label = "Modular Vest";
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "Black", "Brown", "Dry", "Green", "Murky", "Snow", "Temperate", "Tropical" }; // Always computed, do not edit
    };
    class type
    {
        label = "Type";
        alwaysSelectable = 1;
        values[] = { "Basic", "Medium", "Heavy" };
    };

};
