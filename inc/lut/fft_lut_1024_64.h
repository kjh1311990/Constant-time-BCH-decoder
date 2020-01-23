/**
 * @file fft_lut_1024_64.h
 * Lookup tables of additive FFT constants for GF(2^10) with BCH_DELTA less than 64
 */

#ifndef FFT_LUT_1024_64_H
#define FFT_LUT_1024_64_H

#include <stdint.h>

/**
 * Constants for the additive FFT and its transpose.
 */
const uint16_t gammas_sums[512+256+128+64+32+16] = {
        0,512,256,768,128,640,384,896,64,576,320,832,192,704,448,960,32,544,288,800,160,672,416,928,96,608,352,864,224,736,480,992,16,528,272,784,144,656,400,912,80,592,336,848,208,720,464,976,48,560,304,816,176,688,432,944,112,624,368,880,240,752,496,1008,8,520,264,776,136,648,392,904,72,584,328,840,200,712,456,968,40,552,296,808,168,680,424,936,104,616,360,872,232,744,488,1000,24,536,280,792,152,664,408,920,88,600,344,856,216,728,472,984,56,568,312,824,184,696,440,952,120,632,376,888,248,760,504,1016,2,514,258,770,130,642,386,898,66,578,322,834,194,706,450,962,34,546,290,802,162,674,418,930,98,610,354,866,226,738,482,994,18,530,274,786,146,658,402,914,82,594,338,850,210,722,466,978,50,562,306,818,178,690,434,946,114,626,370,882,242,754,498,1010,10,522,266,778,138,650,394,906,74,586,330,842,202,714,458,970,42,554,298,810,170,682,426,938,106,618,362,874,234,746,490,1002,26,538,282,794,154,666,410,922,90,602,346,858,218,730,474,986,58,570,314,826,186,698,442,954,122,634,378,890,250,762,506,1018,237,749,493,1005,109,621,365,877,173,685,429,941,45,557,301,813,205,717,461,973,77,589,333,845,141,653,397,909,13,525,269,781,253,765,509,1021,125,637,381,893,189,701,445,957,61,573,317,829,221,733,477,989,93,605,349,861,157,669,413,925,29,541,285,797,229,741,485,997,101,613,357,869,165,677,421,933,37,549,293,805,197,709,453,965,69,581,325,837,133,645,389,901,5,517,261,773,245,757,501,1013,117,629,373,885,181,693,437,949,53,565,309,821,213,725,469,981,85,597,341,853,149,661,405,917,21,533,277,789,239,751,495,1007,111,623,367,879,175,687,431,943,47,559,303,815,207,719,463,975,79,591,335,847,143,655,399,911,15,527,271,783,255,767,511,1023,127,639,383,895,191,703,447,959,63,575,319,831,223,735,479,991,95,607,351,863,159,671,415,927,31,543,287,799,231,743,487,999,103,615,359,871,167,679,423,935,39,551,295,807,199,711,455,967,71,583,327,839,135,647,391,903,7,519,263,775,247,759,503,1015,119,631,375,887,183,695,439,951,55,567,311,823,215,727,471,983,87,599,343,855,151,663,407,919,23,535,279,791,
        0,786,832,82,16,770,848,66,100,886,804,54,116,870,820,38,41,827,873,123,57,811,889,107,77,863,781,31,93,847,797,15,272,514,592,322,256,530,576,338,372,614,564,294,356,630,548,310,313,555,633,363,297,571,617,379,349,591,541,271,333,607,525,287,72,858,776,26,88,842,792,10,44,830,876,126,60,814,892,110,97,883,801,51,113,867,817,35,5,791,837,87,21,775,853,71,344,586,536,266,328,602,520,282,316,558,636,366,300,574,620,382,369,611,561,291,353,627,545,307,277,519,597,327,261,535,581,343,6,788,838,84,22,772,854,68,98,880,802,48,114,864,818,32,47,829,879,125,63,813,895,109,75,857,779,25,91,841,795,9,278,516,598,324,262,532,582,340,370,608,562,288,354,624,546,304,319,557,639,365,303,573,623,381,347,585,539,265,331,601,523,281,78,860,782,28,94,844,798,12,42,824,874,120,58,808,890,104,103,885,807,53,119,869,823,37,3,785,835,81,19,769,851,65,350,588,542,268,334,604,526,284,314,552,634,360,298,568,618,376,375,613,567,293,359,629,551,309,275,513,595,321,259,529,579,337,
        0,304,3,307,717,1021,718,1022,362,90,361,89,935,663,932,660,657,929,658,930,92,364,95,367,1019,715,1016,712,310,6,309,5,620,860,623,863,161,401,162,402,774,566,773,565,459,251,456,248,253,461,254,462,560,768,563,771,407,167,404,164,858,618,857,617,292,20,295,23,1001,729,1002,730,78,382,77,381,643,947,640,944,949,645,950,646,376,72,379,75,735,1007,732,1004,18,290,17,289,840,632,843,635,389,181,390,182,546,786,545,785,239,479,236,476,473,233,474,234,788,548,791,551,179,387,176,384,638,846,637,845,
        0,807,1010,213,318,537,716,491,746,461,280,575,980,243,38,769,831,24,205,1002,513,294,499,724,469,754,551,256,235,972,793,62,887,80,133,930,585,366,443,668,413,698,623,328,163,900,849,118,72,879,954,157,374,593,644,419,674,389,336,631,924,187,110,841,
        0,355,74,297,684,975,742,901,49,338,123,280,669,1022,727,948,644,999,718,941,40,331,98,257,693,982,767,924,25,378,83,304,
        0,819,997,214,804,23,193,1010,246,965,787,32,978,225,55,772 };

/**
 * Constants for the additive FFT and its transpose.
 */
const uint16_t betas_pows[64+32+16+8+4] = {
        1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
        1,18,260,620,592,488,367,3,54,780,701,761,568,945,5,90,285,974,770,577,218,15,238,807,91,271,714,366,17,306,352,237,
        1,893,558,500,335,606,1005,12,561,510,98,863,958,248,80,378,
        1,285,785,353,595,1021,620,577,
        1,790,582,919 };

/**
 * Constants for the additive FFT transpose.
 */
const uint16_t fft_t_final_betas_sums [16] = {
        0,365,27,374,111,258,116,281,351,50,324,41,304,93,299,70 };

/**
 * Constants for the additive FFT.
 */
const uint16_t fft_final_betas [5] = {
        779,42,887,313,790 };

#endif
