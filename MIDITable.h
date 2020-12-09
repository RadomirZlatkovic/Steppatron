/* File description */

#ifndef MIDITABLE
#define MIDITABLE

struct MIDIStruct{
    int MIDINumber;
    char note[5];
    float freq;
    float period;
};


struct MIDIStruct MIDITable[88] = {
//  MIDINumber,  note,  freq,  period(ms)
    {21,         "A0", 27.500, 36.36},
    {22,      "A0/B0", 29.135, 34.32},
    {23,         "B0", 30.868, 32.40},
    {24,         "C1", 32.703, 30.58},
    {25,      "C1/D1", 34.684, 28.86},
    {26,         "D1", 36.708, 27.24},
    {27,      "D1/E1", 38.891, 25.71},
    {28,         "E1", 41.203, 24.27},
    {29,         "F1", 43.654, 22.91},
    {30,      "F1/G1", 46.249, 21.26},
    {31,         "G1", 48.999, 20.41},
    {32,      "G1/A1", 51.913, 19.26},
    {33,         "A1", 55.000, 18.18},
    {34,      "A1/B1", 58.270, 17.16},
    {35,         "B1", 61.735, 16.20},
    {36,         "C2", 65.406, 15.29},
    {37,      "C2/D2", 69.296, 14.29},
    {38,         "D2", 73.416, 13.62},
    {39,      "D2/E2", 77.782, 12.86},
    {40,         "E2", 82.407, 12.13},
    {41,         "F2", 87.307, 11.45},
    {42,      "F2/G2", 92.499, 10.81},
    {43,         "G2", 97.999, 10.20},
    {44,      "G2/A2", 103.83, 9.631},
    {45,         "A2", 110.00, 9.091}, 
    {46,      "A2/B2", 116.54, 8.581},
    {47,         "B2", 123.47, 8.099},
    {48,         "C3", 130.81, 7.645},
    {49,      "C3/D3", 138.59, 7.216},
    {50,         "D3", 146.83, 6.811},
    {51,      "D3/E3", 155.56, 6.428},
    {52,         "E3", 164.81, 6.068},
    {53,         "F3", 174.61, 5.727},
    {54,      "F3/G3", 185.00, 5.405},
    {55,         "G3", 196.00, 5.102},
    {56,      "G3/A3", 207.65, 4.816},
    {57,         "A3", 220.00, 4.545},
    {58,      "A3/B3", 233.08, 4.290},
    {59,         "B3", 246.94, 4.050},
    {60,         "C4", 261.63, 3.822},
    {61,      "C4/D4", 277.18, 3.608},
    {62,         "D4", 293.67, 3.405},
    {63,      "D4/E4", 311.13, 3.214},
    {64,         "E4", 329.23, 3.034},
    {65,         "F4", 349.23, 2.863},
    {66,      "F4/G4", 369.99, 2.703},
    {67,         "G4", 392.00, 2.551},
    {68,      "G4/A4", 415.30, 2.408},
    {69,         "A4", 440.00, 2.273},
    {70,      "A4/B4", 466.16, 2.145},
    {71,         "B4", 493.88, 2.025},
    {72,         "C5", 523.25, 1.910},
    {73,      "C5/D5", 554.37, 1.804},
    {74,         "D5", 587.33, 1.703},
    {75,      "D5/E5", 622.25, 1.607},
    {76,         "E5", 659.26, 1.517},
    {77,         "F5", 698.46, 1.432},
    {78,      "F5/G5", 739.99, 1.351},
    {79,         "G5", 783.99, 1.276},
    {80,      "G5/A5", 830.61, 1.204},  
    {81,         "A5", 880.00, 1.136},
    {82,      "A5/B5", 923.33, 1.073},
    {83,         "B5", 987.77, 1.012},
    {84,         "C6", 1046.5, 0.9556},
    {85,      "C6/D6", 1108.7, 0.9020},
    {86,         "D6", 1174.7, 0.8513},
    {87,      "D6/E6", 1244.5, 0.8034},
    {88,         "E6", 1318.5, 0.7584},
    {89,         "F6", 1396.9, 0.7159},
    {90,      "F6/G6", 1480.0, 0.6757},
    {91,         "G6", 1568.0, 0.6378},
    {92,      "G6/A6", 1661.2, 0.6020},
    {93,         "A6", 1760.0, 0.5682},
    {94,      "A6/B6", 1864.7, 0.5363},
    {95,         "B6", 1975.5, 0.5062},
    {96,         "C7", 2093.0, 0.4778},
    {97,      "C7/D7", 2217.5, 0.4510},
    {98,         "D7", 2349.3, 0.4257},
    {99,      "D7/E7", 2489.0, 0.4018},
    {100,        "E7", 2637.0, 0.3792},
    {101,        "F7", 2793.0, 0.3580},
    {102,     "F7/G7", 2960.0, 0.3378},
    {103,        "G7", 3136.0, 0.3189},
    {104,     "G7/A7", 3222.4, 0.3010},
    {105,        "A7", 3520.0, 0.2841},
    {106,     "A7/B7", 3792.3, 0.2681},
    {107,        "B7", 3951.1, 0.2531},
    {108,        "C8", 4186.0, 0.2389}
} ;


#endif