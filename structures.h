#pragma once

struct coordinates {
    int degree;
    int minute;
    int second;
};

struct position {
    struct coordinates lat ;
    struct coordinates longitude;
};

struct fig {
    struct position apex1;
    struct position apex2;
    struct position apex3;
};