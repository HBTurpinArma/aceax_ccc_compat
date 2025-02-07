class CCC_Vest_PlateCarrier
{
    options[] = { "camo", "type" }; // Always computed, do not edit
    label = "Plate Carrier";
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "Black", "Brown", "Dry", "Green", "Murky", "Snow", "Temperate", "Tropical" }; // Always computed, do not edit
    };
    class type
    {
        label = "Type";
        alwaysSelectable = 1;
        values[] = { "Heavy", "Light" };
    };
};
