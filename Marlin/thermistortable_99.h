/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// 100k bed thermistor

// Converted to use a 10kOhm pullup resistor, which is present in the oldest wanhao duplicator i3
// printers.

// Created using the reprap tool. Many of the data points were remove to make it smaller.
//
// Thermistor lookup table for RepRap Temperature Sensor Boards (http://make.rrrf.org/ts)
// Made with createTemperatureLookup.py (http://svn.reprap.org/trunk/reprap/firmware/Arduino/utilities/createTemperatureLookup.py)
// ./createTemperatureLookup.py --r0=100000 --t0=25 --r1=0 --r2=10000 --beta=3950 --max-adc=1023
// r0: 100000
// t0: 25
// r1: 0
// r2: 10000
// beta: 3950
// max adc: 1023
const short temptable_99[][2] PROGMEM = {
   {    1 * OVERSAMPLENR, 710},
   // {   11 * OVERSAMPLENR, 341},
   // {   21 * OVERSAMPLENR, 284},
   {   31 * OVERSAMPLENR, 254},
   {   41 * OVERSAMPLENR, 235},
   {   51 * OVERSAMPLENR, 220},
   {   61 * OVERSAMPLENR, 209},
   {   71 * OVERSAMPLENR, 199},
   {   81 * OVERSAMPLENR, 192},
   {   91 * OVERSAMPLENR, 185},
   {  101 * OVERSAMPLENR, 179},
   {  111 * OVERSAMPLENR, 173},
   {  121 * OVERSAMPLENR, 168},
   {  131 * OVERSAMPLENR, 164},
   {  141 * OVERSAMPLENR, 160},
   {  151 * OVERSAMPLENR, 156},
   {  161 * OVERSAMPLENR, 153},
   {  171 * OVERSAMPLENR, 149},
   {  181 * OVERSAMPLENR, 146},
   {  191 * OVERSAMPLENR, 143},
   {  201 * OVERSAMPLENR, 141},
   // {  211 * OVERSAMPLENR, 138},
   {  221 * OVERSAMPLENR, 135},
   // {  231 * OVERSAMPLENR, 133},
   {  241 * OVERSAMPLENR, 131},
   // {  251 * OVERSAMPLENR, 129},
   {  261 * OVERSAMPLENR, 126},
   // {  271 * OVERSAMPLENR, 124},
   {  281 * OVERSAMPLENR, 122},
   // {  291 * OVERSAMPLENR, 120},
   {  301 * OVERSAMPLENR, 119},
   // {  311 * OVERSAMPLENR, 117},
   // {  321 * OVERSAMPLENR, 115},
   {  331 * OVERSAMPLENR, 113},
   // {  341 * OVERSAMPLENR, 112},
   // {  351 * OVERSAMPLENR, 110},
   {  361 * OVERSAMPLENR, 108},
   // {  371 * OVERSAMPLENR, 107},
   // {  381 * OVERSAMPLENR, 105},
   {  391 * OVERSAMPLENR, 104},
   // {  401 * OVERSAMPLENR, 102},
   // {  411 * OVERSAMPLENR, 101},
   {  421 * OVERSAMPLENR, 99},
   // {  431 * OVERSAMPLENR, 98},
   // {  441 * OVERSAMPLENR, 97},
   {  451 * OVERSAMPLENR, 95},
   // {  461 * OVERSAMPLENR, 94},
   // {  471 * OVERSAMPLENR, 93},
   // {  481 * OVERSAMPLENR, 91},
   {  491 * OVERSAMPLENR, 90},
   // {  501 * OVERSAMPLENR, 89},
   // {  511 * OVERSAMPLENR, 87},
   // {  521 * OVERSAMPLENR, 86},
   {  531 * OVERSAMPLENR, 85},
   // {  541 * OVERSAMPLENR, 84},
   // {  551 * OVERSAMPLENR, 82},
   // {  561 * OVERSAMPLENR, 81},
   {  571 * OVERSAMPLENR, 80},
   // {  581 * OVERSAMPLENR, 78},
   // {  591 * OVERSAMPLENR, 77},
   // {  601 * OVERSAMPLENR, 76},
   {  611 * OVERSAMPLENR, 75},
   // {  621 * OVERSAMPLENR, 74},
   // {  631 * OVERSAMPLENR, 72},
   {  641 * OVERSAMPLENR, 71},
   // {  651 * OVERSAMPLENR, 70},
   // {  661 * OVERSAMPLENR, 68},
   // {  671 * OVERSAMPLENR, 67},
   {  681 * OVERSAMPLENR, 66},
   // {  691 * OVERSAMPLENR, 65},
   // {  701 * OVERSAMPLENR, 63},
   {  711 * OVERSAMPLENR, 62},
   // {  721 * OVERSAMPLENR, 61},
   // {  731 * OVERSAMPLENR, 59},
   // {  741 * OVERSAMPLENR, 58},
   {  751 * OVERSAMPLENR, 57},
   // {  761 * OVERSAMPLENR, 55},
   // {  771 * OVERSAMPLENR, 54},
   // {  781 * OVERSAMPLENR, 52},
   {  791 * OVERSAMPLENR, 51},
   // {  801 * OVERSAMPLENR, 49},
   {  811 * OVERSAMPLENR, 48},
   // {  821 * OVERSAMPLENR, 46},
   {  831 * OVERSAMPLENR, 45},
   // {  841 * OVERSAMPLENR, 43},
   // {  851 * OVERSAMPLENR, 41},
   // {  861 * OVERSAMPLENR, 40},
   {  871 * OVERSAMPLENR, 38},
   {  881 * OVERSAMPLENR, 36},
   // {  891 * OVERSAMPLENR, 34},
   {  901 * OVERSAMPLENR, 32},
   // {  911 * OVERSAMPLENR, 29},
   {  921 * OVERSAMPLENR, 27},
   // {  931 * OVERSAMPLENR, 24},
   {  941 * OVERSAMPLENR, 22},
   // {  951 * OVERSAMPLENR, 19},
   // {  961 * OVERSAMPLENR, 15},
   {  971 * OVERSAMPLENR, 11},
   {  981 * OVERSAMPLENR, 7},
   {  991 * OVERSAMPLENR, 2},
   { 1001 * OVERSAMPLENR, -4},
   // { 1011 * OVERSAMPLENR, -14},
   { 1021 * OVERSAMPLENR, -37}
};