// Copyright 2024 Kirill Nikitin
#include <gtest/gtest.h>
#include "tasks.h"
#include "circle.h"

const double EPS = 1e-6;
const double PI = 3.14159;

TEST(Circle, checkCreateWithPositiveRadius) {
    auto test = Circle(5.0);
    EXPECT_NEAR(test.getRadius(), 5.0, EPS);
}

TEST(Circle, checkCreateWithZeroRadius) {
    EXPECT_ANY_THROW(Circle(0.0));
}

TEST(Circle, checkCreateWithNegativeRadius) {
    EXPECT_ANY_THROW(Circle(-5.0));
}

TEST(Circle, checkGetArea) {
    auto test = Circle(1.0);
    EXPECT_NEAR(test.getArea(), PI, EPS);
}

TEST(Circle, checkGetFerence) {
    auto test = Circle(1.0);
    EXPECT_NEAR(test.getFerence(), 2 * PI, EPS);
}

TEST(Circle, checkSetPositiveRadius) {
    auto test = Circle(1.0);
    test.setRadius(2.0);
    EXPECT_NEAR(test.getRadius(), 2.0, EPS);
    EXPECT_NEAR(test.getArea(), 4 * PI, EPS);
    EXPECT_NEAR(test.getFerence(), 4 * PI, EPS);
}

TEST(Circle, checkSetZeroRadius) {
    auto test = Circle(1.0);
    EXPECT_ANY_THROW(test.setRadius(0.0));
}

TEST(Circle, checkSetNegativeRadius) {
    auto test = Circle(1.0);
    EXPECT_ANY_THROW(test.setRadius(-1.0));
}

TEST(Circle, checkSetPositiveArea) {
    auto test = Circle(1.0);
    test.setArea(4 * PI);
    EXPECT_NEAR(test.getRadius(), 2.0, EPS);
    EXPECT_NEAR(test.getArea(), 4 * PI, EPS);
    EXPECT_NEAR(test.getFerence(), 4 * PI, EPS);
}

TEST(Circle, checkSetZeroArea) {
    auto test = Circle(1.0);
    EXPECT_ANY_THROW(test.setArea(0.0));
}

TEST(Circle, checkSetNegativeArea) {
    auto test = Circle(1.0);
    EXPECT_ANY_THROW(test.setArea(-1.0));
}

TEST(Circle, checkSetPositiveFerence) {
    auto test = Circle(1.0);
    test.setFerence(4 * PI);
    EXPECT_NEAR(test.getRadius(), 2.0, EPS);
    EXPECT_NEAR(test.getArea(), 4 * PI, EPS);
    EXPECT_NEAR(test.getFerence(), 4 * PI, EPS);
}

TEST(Circle, checkSetZeroFerence) {
    auto test = Circle(1.0);
    EXPECT_ANY_THROW(test.setFerence(0.0));
}

TEST(Circle, checkSetNegativeFerence) {
    auto test = Circle(1.0);
    EXPECT_ANY_THROW(test.setFerence(-1.0));
}

TEST(Circle, checkSetBigRadius) {
    auto test = Circle(1.0);
    test.setRadius(1500.0);
    EXPECT_NEAR(test.getRadius(), 1500.0, EPS);
    EXPECT_NEAR(test.getArea(), 1500 * 1500 * PI, EPS);
    EXPECT_NEAR(test.getFerence(), 2 * 1500 * PI, EPS);
}

TEST(Circle, checkSetBigFerence) {
    auto c = Circle(1.0);
    c.setFerence(1000.0);
    EXPECT_NEAR(c.getFerence(), 1000.0, EPS);
    EXPECT_NEAR(c.getRadius(), 1000 / (2 * PI), EPS);
    EXPECT_NEAR(c.getArea(), 1000 * (1000 / (2 * PI)) / 2, EPS);
}

TEST(Circle, checkSetBigArea) {
    auto c = Circle(1.0);
    c.setArea(1000.0);
    EXPECT_NEAR(c.getArea(), 1000.0, EPS);
    EXPECT_NEAR(c.getRadius(), sqrt(1000.0 / PI), EPS);
    EXPECT_NEAR(c.getFerence(), sqrt(1000 / PI) * 2 * PI, EPS);
}

TEST(Tasks, planetAndRopeSolution) {
    EXPECT_NEAR(solvePlanetAndRopeTask(6378100.0, 1.0), M_1_PI * 0.5, EPS);
}

TEST(Tasks, littleDataPlanetAndRopeSolution) {
    EXPECT_NEAR(solvePlanetAndRopeTask(1.0, 1.0), M_1_PI * 0.5, EPS);
}

TEST(Tasks, swimmingPoolSolution) {
    EXPECT_NEAR(
            solveSwimmingPoolTask(3.0, 1.0, 1000, 2000),
            23000 * PI,
            EPS);
}
