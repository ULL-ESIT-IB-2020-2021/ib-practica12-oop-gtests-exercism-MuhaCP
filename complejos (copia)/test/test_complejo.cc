#include <gtest/gtest.h>
#include "complejo.h"


TEST(ComplejoTest, Add){
    Complejo complejo1{5,-7};
    Complejo complejo2{-3,-2};
    Complejo complejo3{3,7};
    Complejo solucion1;
    Complejo solucion2;
    solucion1.Add(complejo1,complejo2);
    solucion2.Add(complejo2,complejo3);

    EXPECT_EQ(true, ((solucion1.GetReal() == 2)&&(solucion1.GetImaginary() == -9)));
    EXPECT_EQ(false, ((solucion2.GetReal() == -5)&&(solucion2.GetImaginary() == 7)));

}

TEST(ComplejoTest, Sub){
    Complejo complejo1{5,-7};
    Complejo complejo2{-3,-2};
    Complejo complejo3{3,7};
    Complejo solucion1;
    Complejo solucion2;
    solucion1.Sub(complejo1,complejo2);
    solucion2.Sub(complejo2,complejo3);

    EXPECT_EQ(true, ((solucion1.GetReal() == 8)&&(solucion1.GetImaginary() == -5)));
    EXPECT_EQ(false, ((solucion2.GetReal() == -5)&&(solucion2.GetImaginary() == 7)));

}

TEST(ComplejoTest, Multiplicate){
    Complejo complejo1{5,-7};
    Complejo complejo2{-3,-2};
    Complejo complejo3{3,7};
    Complejo solucion1;
    Complejo solucion2;
    solucion1.Multiplicate(complejo1,complejo2);
    solucion2.Multiplicate(complejo2,complejo3);

    EXPECT_EQ(true, ((solucion1.GetReal() == -29)&&(solucion1.GetImaginary() == 11)));
    EXPECT_EQ(false, ((solucion2.GetReal() == -5)&&(solucion2.GetImaginary() == 7)));

}
