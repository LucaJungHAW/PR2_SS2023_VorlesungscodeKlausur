//
// Basisdatei zum Erstellen von Tests
//

#include "gtest/gtest.h"
#include <limits.h>
#include "CandyJar.h"

TEST(CandyJarTS, testCandyJar_fuellstand) {
    CandyJar BonbonsTest(90);
    EXPECT_EQ(BonbonsTest.getFuellWert(), 90);
}

TEST(CandyJarTS, testCandyJar_fuellstand2) {
    CandyJar BonbonsTest(90);
    BonbonsTest.fillCandies(11);  // Grenzwert 101
    EXPECT_EQ(BonbonsTest.getFuellWert(), MAX_CANDY);
}

TEST(CandyJarTS, testCandyJar_fuellstand3) {
    CandyJar BonbonsTest(90);
    BonbonsTest.fillCandies(10);  // Grenzwert 100
    EXPECT_EQ(BonbonsTest.getFuellWert(), MAX_CANDY);
}


TEST(CandyJarTS, testCandyJar_fuellstand4) {
    CandyJar BonbonsTest(90);
    BonbonsTest.takeCandies(91);  // Grenzwert -1
    EXPECT_EQ(BonbonsTest.getFuellWert(), 0);
}


TEST(CandyJarTS, testCandyJar_fuellstand5) {
    CandyJar BonbonsTest(90);
    BonbonsTest.takeCandies(90);  // Grenzwert 0
    EXPECT_EQ(BonbonsTest.getFuellWert(), 0);
}


TEST(CandyJarTS, testCandyJar_fuellstand6) {
    CandyJar BonbonsTest(0);
    BonbonsTest.takeCandies(-INT_MIN);  // Grenzwert INT_MIN
    EXPECT_EQ(BonbonsTest.getFuellWert(), 0);
}


TEST(CandyJarTS, testCandyJar_fuellstand7) {
    CandyJar BonbonsTest(0);
    BonbonsTest.fillCandies2(INT_MAX);  // Grenzwert INT_MAX
    EXPECT_EQ(BonbonsTest.getFuellWert(), 100);
}

//#include "Baby.h"
//
//TEST(BabyTS, testBaby_alter){
//    Baby Dieter("Dieter");
//    EXPECT_FLOAT_EQ(Dieter.getAlter(), 0.0f);
//}
//
//TEST(BabyTS, testBaby_name){
//    Baby Dieter("Dieter");
//    EXPECT_STREQ(Dieter.getName().c_str(), "Dieter");
//}
