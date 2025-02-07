class CCC_Helmet_ECH
{
    options[] = { "camo", "type" }; // Always computed, do not edit
    label = "ECH";
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "Black", "Dry", "Green", "Murky", "Snow", "Temperate", "Tan", "Tropical" }; 
    };
    class type
    {
        label = "Type";
        alwaysSelectable = 1;
        values[] = { "Standard", "Camonet", "Headset", "Headcam" };
    };
};
