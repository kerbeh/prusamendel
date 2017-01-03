// Thermistor lookup table for two different thermistors.

/*
   This table doesn't depend on the type of electronics, but on the type of
   thermistor(s) you use. You want one table for each thermistor type you use.
*/

// How many thermistor tables we have.
#define NUMTABLES 2

// Names for our tables, so you can use them in config.h.
// Table numbering starts at 0.
#define THERMISTOR_EXTRUDER   0
#define THERMISTOR_BED        1

/*
   You may be able to improve the accuracy of this table in various ways.

   1. Measure the actual resistance of the resistor. It's "nominally" 4.7K,
      but that's ± 5%.
   2. Measure the actual beta of your thermistor:
      http://reprap.org/wiki/MeasuringThermistorBeta
   3. Generate more table entries than you need, then trim down the ones
      in uninteresting ranges.

   In either case you'll have to regenerate this table with
   createTemperatureLookup.py, which requires python, which is difficult to
   install on windows. Since you'll have to do some testing to determine the
   correct temperature for your application anyway, you may decide that the
   effort isn't worth it. Who cares if it's reporting the "right" temperature
   as long as it's keeping the temperature steady enough to print, right?
*/

// The number of value pairs in our table.
// Must be the same for all tables.
#define NUMTEMPS 100

uint16_t const temptable[NUMTABLES][NUMTEMPS][2] PROGMEM = {

// Table for the Extruder.
// Thermistor: Vatronics mf58 3950

// ./createTemperatureLookup.py --r0=10000 --t0=25 --beta=3950 --r1=0 --r2=4092 --max-adc=1023 --num-temps=100
{
   {   1,   1820}, //  455.05 C,        4 Ohm, 0.005 V, 82.61 C/count, 0.01mW
   {  11,    924}, //  231.19 C,       44 Ohm, 0.054 V, 6.28 C/count, 0.06mW
   {  21,    768}, //  192.18 C,       86 Ohm, 0.103 V, 2.75 C/count, 0.12mW
   {  31,    685}, //  171.27 C,      128 Ohm, 0.151 V, 1.70 C/count, 0.18mW
   {  41,    628}, //  157.24 C,      171 Ohm, 0.200 V, 1.21 C/count, 0.23mW
   {  51,    587}, //  146.78 C,      214 Ohm, 0.249 V, 0.93 C/count, 0.29mW
   {  61,    553}, //  138.50 C,      259 Ohm, 0.298 V, 0.76 C/count, 0.34mW
   {  71,    526}, //  131.65 C,      305 Ohm, 0.347 V, 0.63 C/count, 0.39mW
   {  81,    503}, //  125.83 C,      351 Ohm, 0.396 V, 0.54 C/count, 0.45mW
   {  91,    483}, //  120.78 C,      399 Ohm, 0.444 V, 0.48 C/count, 0.49mW
   { 101,    465}, //  116.31 C,      448 Ohm, 0.493 V, 0.42 C/count, 0.54mW
   { 111,    449}, //  112.31 C,      497 Ohm, 0.542 V, 0.38 C/count, 0.59mW
   { 121,    434}, //  108.68 C,      548 Ohm, 0.591 V, 0.35 C/count, 0.64mW
   { 131,    421}, //  105.37 C,      600 Ohm, 0.640 V, 0.32 C/count, 0.68mW
   { 141,    409}, //  102.32 C,      653 Ohm, 0.688 V, 0.29 C/count, 0.73mW
   { 151,    397}, //   99.49 C,      708 Ohm, 0.737 V, 0.27 C/count, 0.77mW
   { 161,    387}, //   96.85 C,      763 Ohm, 0.786 V, 0.26 C/count, 0.81mW
   { 171,    377}, //   94.37 C,      820 Ohm, 0.835 V, 0.24 C/count, 0.85mW
   { 181,    368}, //   92.04 C,      879 Ohm, 0.884 V, 0.23 C/count, 0.89mW
   { 191,    359}, //   89.83 C,      938 Ohm, 0.933 V, 0.22 C/count, 0.93mW
   { 201,    350}, //   87.74 C,      999 Ohm, 0.981 V, 0.20 C/count, 0.96mW
   { 211,    342}, //   85.75 C,     1062 Ohm, 1.030 V, 0.20 C/count, 1.00mW
   { 221,    335}, //   83.84 C,     1126 Ohm, 1.079 V, 0.19 C/count, 1.03mW
   { 231,    328}, //   82.02 C,     1192 Ohm, 1.128 V, 0.18 C/count, 1.07mW
   { 241,    321}, //   80.27 C,     1259 Ohm, 1.177 V, 0.17 C/count, 1.10mW
   { 251,    314}, //   78.59 C,     1329 Ohm, 1.226 V, 0.17 C/count, 1.13mW
   { 261,    307}, //   76.96 C,     1400 Ohm, 1.274 V, 0.16 C/count, 1.16mW
   { 271,    301}, //   75.39 C,     1473 Ohm, 1.323 V, 0.15 C/count, 1.19mW
   { 281,    295}, //   73.87 C,     1548 Ohm, 1.372 V, 0.15 C/count, 1.22mW
   { 291,    289}, //   72.40 C,     1625 Ohm, 1.421 V, 0.15 C/count, 1.24mW
   { 301,    283}, //   70.97 C,     1704 Ohm, 1.470 V, 0.14 C/count, 1.27mW
   { 311,    278}, //   69.58 C,     1785 Ohm, 1.519 V, 0.14 C/count, 1.29mW
   { 321,    272}, //   68.22 C,     1868 Ohm, 1.567 V, 0.13 C/count, 1.31mW
   { 331,    267}, //   66.90 C,     1954 Ohm, 1.616 V, 0.13 C/count, 1.34mW
   { 341,    262}, //   65.61 C,     2043 Ohm, 1.665 V, 0.13 C/count, 1.36mW
   { 351,    257}, //   64.35 C,     2134 Ohm, 1.714 V, 0.13 C/count, 1.38mW
   { 361,    252}, //   63.11 C,     2228 Ohm, 1.763 V, 0.12 C/count, 1.39mW
   { 371,    247}, //   61.90 C,     2325 Ohm, 1.812 V, 0.12 C/count, 1.41mW
   { 381,    242}, //   60.71 C,     2425 Ohm, 1.860 V, 0.12 C/count, 1.43mW
   { 391,    238}, //   59.54 C,     2528 Ohm, 1.909 V, 0.12 C/count, 1.44mW
   { 401,    233}, //   58.39 C,     2634 Ohm, 1.958 V, 0.11 C/count, 1.46mW
   { 411,    229}, //   57.25 C,     2744 Ohm, 2.007 V, 0.11 C/count, 1.47mW
   { 421,    224}, //   56.14 C,     2857 Ohm, 2.056 V, 0.11 C/count, 1.48mW
   { 431,    220}, //   55.04 C,     2974 Ohm, 2.104 V, 0.11 C/count, 1.49mW
   { 441,    215}, //   53.95 C,     3095 Ohm, 2.153 V, 0.11 C/count, 1.50mW
   { 451,    211}, //   52.88 C,     3221 Ohm, 2.202 V, 0.11 C/count, 1.51mW
   { 461,    207}, //   51.82 C,     3351 Ohm, 2.251 V, 0.11 C/count, 1.51mW
   { 471,    203}, //   50.77 C,     3485 Ohm, 2.300 V, 0.10 C/count, 1.52mW
   { 481,    198}, //   49.73 C,     3625 Ohm, 2.349 V, 0.10 C/count, 1.52mW
   { 491,    194}, //   48.70 C,     3770 Ohm, 2.397 V, 0.10 C/count, 1.52mW
   { 501,    190}, //   47.68 C,     3920 Ohm, 2.446 V, 0.10 C/count, 1.53mW
   { 511,    186}, //   46.66 C,     4076 Ohm, 2.495 V, 0.10 C/count, 1.53mW
   { 521,    182}, //   45.66 C,     4238 Ohm, 2.544 V, 0.10 C/count, 1.53mW
   { 531,    178}, //   44.65 C,     4407 Ohm, 2.593 V, 0.10 C/count, 1.53mW
   { 541,    174}, //   43.66 C,     4583 Ohm, 2.642 V, 0.10 C/count, 1.52mW
   { 551,    170}, //   42.66 C,     4767 Ohm, 2.690 V, 0.10 C/count, 1.52mW
   { 561,    166}, //   41.67 C,     4958 Ohm, 2.739 V, 0.10 C/count, 1.51mW
   { 571,    162}, //   40.68 C,     5158 Ohm, 2.788 V, 0.10 C/count, 1.51mW
   { 581,    158}, //   39.70 C,     5367 Ohm, 2.837 V, 0.10 C/count, 1.50mW
   { 591,    154}, //   38.71 C,     5585 Ohm, 2.886 V, 0.10 C/count, 1.49mW
   { 601,    150}, //   37.73 C,     5814 Ohm, 2.935 V, 0.10 C/count, 1.48mW
   { 611,    146}, //   36.74 C,     6054 Ohm, 2.983 V, 0.10 C/count, 1.47mW
   { 621,    143}, //   35.75 C,     6306 Ohm, 3.032 V, 0.10 C/count, 1.46mW
   { 631,    139}, //   34.76 C,     6570 Ohm, 3.081 V, 0.10 C/count, 1.44mW
   { 641,    135}, //   33.77 C,     6848 Ohm, 3.130 V, 0.10 C/count, 1.43mW
   { 651,    131}, //   32.77 C,     7142 Ohm, 3.179 V, 0.10 C/count, 1.41mW
   { 661,    127}, //   31.77 C,     7451 Ohm, 3.228 V, 0.10 C/count, 1.40mW
   { 671,    123}, //   30.76 C,     7778 Ohm, 3.276 V, 0.10 C/count, 1.38mW
   { 681,    118}, //   29.75 C,     8124 Ohm, 3.325 V, 0.10 C/count, 1.36mW
   { 691,    114}, //   28.73 C,     8491 Ohm, 3.374 V, 0.10 C/count, 1.34mW
   { 701,    110}, //   27.70 C,     8881 Ohm, 3.423 V, 0.10 C/count, 1.32mW
   { 711,    106}, //   26.65 C,     9295 Ohm, 3.472 V, 0.10 C/count, 1.30mW
   { 721,    102}, //   25.60 C,     9737 Ohm, 3.521 V, 0.11 C/count, 1.27mW
   { 731,     98}, //   24.54 C,    10209 Ohm, 3.569 V, 0.11 C/count, 1.25mW
   { 741,     93}, //   23.46 C,    10714 Ohm, 3.618 V, 0.11 C/count, 1.22mW
   { 751,     89}, //   22.36 C,    11257 Ohm, 3.667 V, 0.11 C/count, 1.19mW
   { 761,     84}, //   21.25 C,    11840 Ohm, 3.716 V, 0.11 C/count, 1.17mW
   { 771,     80}, //   20.11 C,    12470 Ohm, 3.765 V, 0.11 C/count, 1.14mW
   { 781,     75}, //   18.96 C,    13152 Ohm, 3.813 V, 0.12 C/count, 1.11mW
   { 791,     71}, //   17.78 C,    13892 Ohm, 3.862 V, 0.12 C/count, 1.07mW
   { 801,     66}, //   16.58 C,    14698 Ohm, 3.911 V, 0.12 C/count, 1.04mW
   { 811,     61}, //   15.34 C,    15580 Ohm, 3.960 V, 0.12 C/count, 1.01mW
   { 821,     56}, //   14.08 C,    16549 Ohm, 4.009 V, 0.13 C/count, 0.97mW
   { 831,     51}, //   12.78 C,    17619 Ohm, 4.058 V, 0.13 C/count, 0.93mW
   { 841,     45}, //   11.43 C,    18805 Ohm, 4.106 V, 0.14 C/count, 0.90mW
   { 851,     40}, //   10.05 C,    20129 Ohm, 4.155 V, 0.14 C/count, 0.86mW
   { 861,     34}, //    8.61 C,    21615 Ohm, 4.204 V, 0.15 C/count, 0.82mW
   { 871,     28}, //    7.11 C,    23295 Ohm, 4.253 V, 0.15 C/count, 0.78mW
   { 881,     22}, //    5.55 C,    25210 Ohm, 4.302 V, 0.16 C/count, 0.73mW
   { 891,     15}, //    3.91 C,    27413 Ohm, 4.351 V, 0.17 C/count, 0.69mW
   { 901,      8}, //    2.19 C,    29975 Ohm, 4.399 V, 0.18 C/count, 0.65mW
   { 911,      1}, //    0.36 C,    32989 Ohm, 4.448 V, 0.19 C/count, 0.60mW
   { 913,      0}  //   -0.02 C,    33658 Ohm, 4.458 V, 0.19 C/count, 0.59mW
},

// Thermistor table for the Heatbed.
// The thermistor used for this table was a Jaycar RN3444

// ./createTemperatureLookup.py --r0=10000 --t0=25 --beta=3950 --r1=0 --r2=4092 --max-adc=1023 --num-temps=100

{
   {   1,   2707}, //  676.96 C,        4 Ohm, 0.005 V, 123.85 C/count, 0.01mW
   {  11,   1407}, //  351.96 C,       44 Ohm, 0.054 V, 8.67 C/count, 0.06mW
   {  21,   1194}, //  298.63 C,       86 Ohm, 0.103 V, 3.72 C/count, 0.12mW
   {  31,   1081}, //  270.41 C,      128 Ohm, 0.151 V, 2.28 C/count, 0.18mW
   {  41,   1006}, //  251.63 C,      171 Ohm, 0.200 V, 1.61 C/count, 0.23mW
   {  51,    950}, //  237.71 C,      214 Ohm, 0.249 V, 1.24 C/count, 0.29mW
   {  61,    906}, //  226.72 C,      259 Ohm, 0.298 V, 1.00 C/count, 0.34mW
   {  71,    870}, //  217.67 C,      305 Ohm, 0.347 V, 0.84 C/count, 0.39mW
   {  81,    839}, //  210.00 C,      351 Ohm, 0.396 V, 0.72 C/count, 0.45mW
   {  91,    813}, //  203.35 C,      399 Ohm, 0.444 V, 0.63 C/count, 0.49mW
   { 101,    789}, //  197.49 C,      448 Ohm, 0.493 V, 0.56 C/count, 0.54mW
   { 111,    768}, //  192.25 C,      497 Ohm, 0.542 V, 0.50 C/count, 0.59mW
   { 121,    750}, //  187.51 C,      548 Ohm, 0.591 V, 0.45 C/count, 0.64mW
   { 131,    732}, //  183.18 C,      600 Ohm, 0.640 V, 0.42 C/count, 0.68mW
   { 141,    716}, //  179.20 C,      653 Ohm, 0.688 V, 0.38 C/count, 0.73mW
   { 151,    702}, //  175.51 C,      708 Ohm, 0.737 V, 0.36 C/count, 0.77mW
   { 161,    688}, //  172.08 C,      763 Ohm, 0.786 V, 0.33 C/count, 0.81mW
   { 171,    675}, //  168.86 C,      820 Ohm, 0.835 V, 0.31 C/count, 0.85mW
   { 181,    663}, //  165.84 C,      879 Ohm, 0.884 V, 0.29 C/count, 0.89mW
   { 191,    651}, //  162.98 C,      938 Ohm, 0.933 V, 0.28 C/count, 0.93mW
   { 201,    641}, //  160.27 C,      999 Ohm, 0.981 V, 0.26 C/count, 0.96mW
   { 211,    630}, //  157.69 C,     1062 Ohm, 1.030 V, 0.25 C/count, 1.00mW
   { 221,    620}, //  155.23 C,     1126 Ohm, 1.079 V, 0.24 C/count, 1.03mW
   { 231,    611}, //  152.87 C,     1192 Ohm, 1.128 V, 0.23 C/count, 1.07mW
   { 241,    602}, //  150.61 C,     1259 Ohm, 1.177 V, 0.22 C/count, 1.10mW
   { 251,    593}, //  148.44 C,     1329 Ohm, 1.226 V, 0.21 C/count, 1.13mW
   { 261,    585}, //  146.35 C,     1400 Ohm, 1.274 V, 0.21 C/count, 1.16mW
   { 271,    577}, //  144.32 C,     1473 Ohm, 1.323 V, 0.20 C/count, 1.19mW
   { 281,    569}, //  142.37 C,     1548 Ohm, 1.372 V, 0.19 C/count, 1.22mW
   { 291,    561}, //  140.47 C,     1625 Ohm, 1.421 V, 0.19 C/count, 1.24mW
   { 301,    554}, //  138.63 C,     1704 Ohm, 1.470 V, 0.18 C/count, 1.27mW
   { 311,    547}, //  136.84 C,     1785 Ohm, 1.519 V, 0.18 C/count, 1.29mW
   { 321,    540}, //  135.10 C,     1868 Ohm, 1.567 V, 0.17 C/count, 1.31mW
   { 331,    533}, //  133.41 C,     1954 Ohm, 1.616 V, 0.17 C/count, 1.34mW
   { 341,    526}, //  131.75 C,     2043 Ohm, 1.665 V, 0.16 C/count, 1.36mW
   { 351,    520}, //  130.13 C,     2134 Ohm, 1.714 V, 0.16 C/count, 1.38mW
   { 361,    514}, //  128.54 C,     2228 Ohm, 1.763 V, 0.16 C/count, 1.39mW
   { 371,    507}, //  126.99 C,     2325 Ohm, 1.812 V, 0.15 C/count, 1.41mW
   { 381,    501}, //  125.47 C,     2425 Ohm, 1.860 V, 0.15 C/count, 1.43mW
   { 391,    495}, //  123.97 C,     2528 Ohm, 1.909 V, 0.15 C/count, 1.44mW
   { 401,    489}, //  122.50 C,     2634 Ohm, 1.958 V, 0.15 C/count, 1.46mW
   { 411,    484}, //  121.05 C,     2744 Ohm, 2.007 V, 0.14 C/count, 1.47mW
   { 421,    478}, //  119.63 C,     2857 Ohm, 2.056 V, 0.14 C/count, 1.48mW
   { 431,    472}, //  118.22 C,     2974 Ohm, 2.104 V, 0.14 C/count, 1.49mW
   { 441,    467}, //  116.84 C,     3095 Ohm, 2.153 V, 0.14 C/count, 1.50mW
   { 451,    461}, //  115.47 C,     3221 Ohm, 2.202 V, 0.14 C/count, 1.51mW
   { 461,    456}, //  114.12 C,     3351 Ohm, 2.251 V, 0.13 C/count, 1.51mW
   { 471,    451}, //  112.78 C,     3485 Ohm, 2.300 V, 0.13 C/count, 1.52mW
   { 481,    445}, //  111.46 C,     3625 Ohm, 2.349 V, 0.13 C/count, 1.52mW
   { 491,    440}, //  110.14 C,     3770 Ohm, 2.397 V, 0.13 C/count, 1.52mW
   { 501,    435}, //  108.84 C,     3920 Ohm, 2.446 V, 0.13 C/count, 1.53mW
   { 511,    430}, //  107.55 C,     4076 Ohm, 2.495 V, 0.13 C/count, 1.53mW
   { 521,    425}, //  106.27 C,     4238 Ohm, 2.544 V, 0.13 C/count, 1.53mW
   { 531,    419}, //  104.99 C,     4407 Ohm, 2.593 V, 0.13 C/count, 1.53mW
   { 541,    414}, //  103.73 C,     4583 Ohm, 2.642 V, 0.13 C/count, 1.52mW
   { 551,    409}, //  102.46 C,     4767 Ohm, 2.690 V, 0.13 C/count, 1.52mW
   { 561,    404}, //  101.21 C,     4958 Ohm, 2.739 V, 0.13 C/count, 1.51mW
   { 571,    399}, //   99.95 C,     5158 Ohm, 2.788 V, 0.13 C/count, 1.51mW
   { 581,    394}, //   98.70 C,     5367 Ohm, 2.837 V, 0.13 C/count, 1.50mW
   { 591,    389}, //   97.45 C,     5585 Ohm, 2.886 V, 0.12 C/count, 1.49mW
   { 601,    384}, //   96.20 C,     5814 Ohm, 2.935 V, 0.12 C/count, 1.48mW
   { 611,    379}, //   94.95 C,     6054 Ohm, 2.983 V, 0.12 C/count, 1.47mW
   { 621,    374}, //   93.70 C,     6306 Ohm, 3.032 V, 0.13 C/count, 1.46mW
   { 631,    369}, //   92.45 C,     6570 Ohm, 3.081 V, 0.13 C/count, 1.44mW
   { 641,    364}, //   91.19 C,     6848 Ohm, 3.130 V, 0.13 C/count, 1.43mW
   { 651,    359}, //   89.93 C,     7142 Ohm, 3.179 V, 0.13 C/count, 1.41mW
   { 661,    354}, //   88.67 C,     7451 Ohm, 3.228 V, 0.13 C/count, 1.40mW
   { 671,    349}, //   87.39 C,     7778 Ohm, 3.276 V, 0.13 C/count, 1.38mW
   { 681,    344}, //   86.11 C,     8124 Ohm, 3.325 V, 0.13 C/count, 1.36mW
   { 691,    339}, //   84.82 C,     8491 Ohm, 3.374 V, 0.13 C/count, 1.34mW
   { 701,    334}, //   83.52 C,     8881 Ohm, 3.423 V, 0.13 C/count, 1.32mW
   { 711,    328}, //   82.20 C,     9295 Ohm, 3.472 V, 0.13 C/count, 1.30mW
   { 721,    323}, //   80.88 C,     9737 Ohm, 3.521 V, 0.13 C/count, 1.27mW
   { 731,    318}, //   79.53 C,    10209 Ohm, 3.569 V, 0.14 C/count, 1.25mW
   { 741,    312}, //   78.17 C,    10714 Ohm, 3.618 V, 0.14 C/count, 1.22mW
   { 751,    307}, //   76.79 C,    11257 Ohm, 3.667 V, 0.14 C/count, 1.19mW
   { 761,    301}, //   75.39 C,    11840 Ohm, 3.716 V, 0.14 C/count, 1.17mW
   { 771,    295}, //   73.97 C,    12470 Ohm, 3.765 V, 0.14 C/count, 1.14mW
   { 781,    290}, //   72.52 C,    13152 Ohm, 3.813 V, 0.15 C/count, 1.11mW
   { 791,    284}, //   71.04 C,    13892 Ohm, 3.862 V, 0.15 C/count, 1.07mW
   { 801,    278}, //   69.52 C,    14698 Ohm, 3.911 V, 0.15 C/count, 1.04mW
   { 811,    271}, //   67.97 C,    15580 Ohm, 3.960 V, 0.16 C/count, 1.01mW
   { 821,    265}, //   66.39 C,    16549 Ohm, 4.009 V, 0.16 C/count, 0.97mW
   { 831,    259}, //   64.75 C,    17619 Ohm, 4.058 V, 0.17 C/count, 0.93mW
   { 841,    252}, //   63.07 C,    18805 Ohm, 4.106 V, 0.17 C/count, 0.90mW
   { 851,    245}, //   61.33 C,    20129 Ohm, 4.155 V, 0.18 C/count, 0.86mW
   { 861,    238}, //   59.53 C,    21615 Ohm, 4.204 V, 0.18 C/count, 0.82mW
   { 871,    230}, //   57.66 C,    23295 Ohm, 4.253 V, 0.19 C/count, 0.78mW
   { 881,    222}, //   55.71 C,    25210 Ohm, 4.302 V, 0.20 C/count, 0.73mW
   { 891,    214}, //   53.66 C,    27413 Ohm, 4.351 V, 0.21 C/count, 0.69mW
   { 901,    206}, //   51.50 C,    29975 Ohm, 4.399 V, 0.22 C/count, 0.65mW
   { 911,    196}, //   49.23 C,    32989 Ohm, 4.448 V, 0.23 C/count, 0.60mW
   { 921,    187}, //   46.80 C,    36590 Ohm, 4.497 V, 0.25 C/count, 0.55mW
   { 931,    176}, //   44.19 C,    40964 Ohm, 4.546 V, 0.27 C/count, 0.50mW
   { 941,    165}, //   41.37 C,    46392 Ohm, 4.595 V, 0.29 C/count, 0.46mW
   { 951,    153}, //   38.28 C,    53308 Ohm, 4.644 V, 0.32 C/count, 0.40mW
   { 961,    139}, //   34.84 C,    62419 Ohm, 4.692 V, 0.36 C/count, 0.35mW
   { 971,    123}, //   30.94 C,    74969 Ohm, 4.741 V, 0.42 C/count, 0.30mW
   { 981,    105}, //   26.40 C,    93355 Ohm, 4.790 V, 0.49 C/count, 0.25mW
   { 991,     83}, //   20.89 C,   122884 Ohm, 4.839 V, 0.61 C/count, 0.19mW
   {1001,     55}, //   13.78 C,   178091 Ohm, 4.888 V, 0.82 C/count, 0.13mW
   {1011,     13} //    3.31 C,   318232 Ohm, 4.937 V, 1.31 C/count, 0.08mW
}
};
