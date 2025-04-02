// this is a customized version of: https://github.com/urob/zmk-helpers/blob/8d7e79731803c961bae61f6fc8ffa3a35a62e5eb/include/zmk-helpers/key-labels/adv360.h

/*                                 ADVANTAGE 360 KEY MATRIX / LAYOUT MAPPING
 ╭─────────────────────────────┬─────────────────────────────╮
 │   0   1   2   3   4   5   6 │   7   8   9  10  11  12  13 │
 │  14  15  16  17  18  19  20 │  21  22  23  24  25  26  27 │
 │  28  29  30  31  32  33  34 │  39  40  41  42  43  44  45 │
 │  46  47  48  49  50  51 ╭───┴───╮  54  55  56  57  58  59 │
 │  60  61  62  63  64 ╭───╯       ╰───╮  71  72  73  74  75 │
 ╰─────────────────────╯               ╰─────────────────────╯
                     ╭─────────┬─────────╮
                 ╭───╯  35  36 │  37  38 ╰───╮
                 │          52 │  53         │
                 │  65  66  67 │  68  69  70 │
                 ╰─────────────┴─────────────╯
 ╭─────────────────────────────┬─────────────────────────────╮
 │ LN6 LN5 LN4 LN3 LN2 LN1 LN0 │ RN0 RN1 RN2 RN3 RN4 RN5 RN6 │
 │ LT6 LT5 LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 RT5 RT6 │
 │ LM6 LM5 LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 RM5 RM6 │
 │ LB6 LB5 LB4 LB3 LB2 LB1 ╭───┴───╮ RB1 RB2 RB3 RB4 RB5 RB6 │
 │ LF6 LF5 LF4 LF3 LF2 ╭───╯       ╰───╮ RF2 RF3 RF4 RF5 RF6 │
 ╰─────────────────────╯               ╰─────────────────────╯
                     ╭─────────┬─────────╮
                 ╭───╯ LH5 LH4 │ RH4 RH5 ╰───╮
                 │         LH3 │ RH3         │
                 │ LH2 LH1 LH0 │ RH0 RH1 RH2 │
                 ╰─────────────┴─────────────╯
*/

#pragma once

#define LN0  6  // left-number row
#define LN1  5
#define LN2  4
#define LN3  3
#define LN4  2
#define LN5  1
#define LN6  0

#define RN0  7  // right-number row
#define RN1  8
#define RN2  9
#define RN3 10
#define RN4 11
#define RN5 12
#define RN6 13

#define LT0 20  // left-top row
#define LT1 19
#define LT2 18
#define LT3 17
#define LT4 16
#define LT5 15
#define LT6 14

#define RT0 21  // right-top row
#define RT1 22
#define RT2 23
#define RT3 24
#define RT4 25
#define RT5 26
#define RT6 27

#define LM0 34  // left-middle row
#define LM1 33
#define LM2 32
#define LM3 31
#define LM4 30
#define LM5 29
#define LM6 28

#define RM0 39  // right-middle row
#define RM1 40
#define RM2 41
#define RM3 42
#define RM4 43
#define RM5 44
#define RM6 45

#define LB1 51  // left-bottom row
#define LB2 50
#define LB3 49
#define LB4 48
#define LB5 47
#define LB6 46

#define RB1 54  // right-bottom row
#define RB2 55
#define RB3 56
#define RB4 57
#define RB5 58
#define RB6 59

#define LF2 64  // left-floor row
#define LF3 63
#define LF4 62
#define LF5 61
#define LF6 60

#define RF2 71  // right-floor row
#define RF3 72
#define RF4 73
#define RF5 74
#define RF6 75

#define LH0 67  // left thumb keys
#define LH1 66
#define LH2 65
#define LH3 52
#define LH4 36
#define LH5 35

#define RH0 68  // right thumb keys
#define RH1 69
#define RH2 70
#define RH3 53
#define RH4 37
#define RH5 38
