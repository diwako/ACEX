class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACEX_FieldRations {
                displayName = CSTRING(MainInteractionText);
                condition = QUOTE(GVAR(enabled));
                exceptions[] = {"isNotInside"};
                statement = QUOTE(GVAR(hudInteractionHover) = true; [0.5] call FUNC(showHud));
                runOnHover = 1;
                insertChildren = QUOTE((_this select 1) call FUNC(getConsumableChildren));
                icon = QPATHTOF(ui\icon_survival.paa);
            };
        };
    };

    class Items_base_F;
    class Land_WaterBarrel_F: Items_base_F {
        GVAR(refillSource) = 1;
    };
    class Land_BarrelWater_F: Items_base_F {
        GVAR(refillSource) = 1;
    };
    class Land_BarrelWater_grey_F: Items_base_F {
        GVAR(refillSource) = 1;
    };
    class Land_WaterTank_F: Items_base_F {
        GVAR(refillSource) = 1;
    };

    class Stall_base_F;
    class Land_StallWater_F: Stall_base_F {
        GVAR(refillSource) = 1;
    };

    class Land_StorageBladder_02_F;
    class StorageBladder_02_water_forest_F: Land_StorageBladder_02_F {
        GVAR(refillSource) = 1;
    };
    class StorageBladder_02_water_sand_F: Land_StorageBladder_02_F {
        GVAR(refillSource) = 1;
    };

    class NonStrategic;
    class Land_Water_source_F: NonStrategic {
        GVAR(refillSource) = 1;
    };
};