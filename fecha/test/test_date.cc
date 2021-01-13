/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Muhammad Campos Preira
 * @date 25 Jun 2020
 * @brief Desarrolle una clase Fecha que permita representar y gestionar fechas. Incorpore en la clase los miembros de datos 
 *        y métodos que considere adecuados para la finalidad que se persigue en este ejercicio. Realice un programa 
 *        cliente fechas.cc que 
 *        
 *
 */

#include <gtest/gtest.h>

#include "fecha.h"
 
TEST(DateTest, greater){
    Date d1{20, 12, 1};
    Date d2{20, 12, 2};
    Date d3{20, 2, 8};

    EXPECT_EQ(true, d2 > d1);
    EXPECT_EQ(false, d3 > d1);
}

TEST(DateTest, equal){
    Date d1{20, 11, 2};
    Date d2{20, 6, 9};

    Date d3{20, 11, 2};
    Date d4{20, 10, 2};
    Date d5{19, 12, 5};

    EXPECT_EQ(false, d1 == d2);
    EXPECT_EQ(true, d1 == d3);
    EXPECT_EQ(false, d1 == d4);
    EXPECT_EQ(false, d1 == d5);
}

TEST(DateTest, lower){
    Date d1{20, 12, 1};
    Date d2{20, 12, 2};
    Date d3{20, 2, 8};

    EXPECT_EQ(false, d2 < d1);
    EXPECT_EQ(true, d3 < d1);
}