class CCC_Unif_Gen3
{
    options[] = { "camo", "type", "top_color" }; // Always computed, do not edit
    label = "Gen 3";
    class camo
    {
        alwaysSelectable = 1;
        values[] = {"Black", "Dry", "Green", "Murky", "Snow", "Tan", "Temperate", "Tropical"}; // Always computed, do not edit
    };
    class type
    {
        label = "Type";
        values[] = {"Standard", "Rolled", "Top"}; // Always computed, do not edit
    };
    class top_color
    {
        label = "Top Colour";
        values[] = {"Standard", "Black", "Green" , "Tan", "Gray"}; // Always computed, do not edit
    };
};
