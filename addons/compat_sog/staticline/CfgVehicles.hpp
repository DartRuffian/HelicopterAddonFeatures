#define STATICLINE EGVAR(staticLine,enabled) = 1; \
EGVAR(staticLine,condition) = QUOTE(true)

class CfgVehicles {
    class vn_air_ch47_04_base;
    class vn_b_air_ch47_04_01: vn_air_ch47_04_base {
        STATICLINE;
    };
    class vn_b_air_ch47_04_02: vn_air_ch47_04_base {
        STATICLINE;
    };

    class vn_air_ch47_01_base;
    class vn_b_air_ch47_01_01: vn_air_ch47_01_base {
        STATICLINE;
    };

    class vn_b_air_ch47_01_02: vn_air_ch47_01_base {
        STATICLINE;
    };
};