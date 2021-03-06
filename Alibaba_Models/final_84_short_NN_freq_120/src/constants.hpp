#pragma once
#include <ap_int.h>

//////////////////////////////   TEMPLATE START  //////////////////////////////

#define AXI_WIDTH_PLRAM 32
#define AXI_WIDTH_HBM 32
#define AXI_WIDTH_DDR 32

#define INT_BITS 32
#define INTS_PER_AXI_PLRAM 1
#define INTS_PER_AXI_HBM 1
#define INTS_PER_AXI_DDR 1

#define PLRAM_BANK_NUM 4
#define HBM_BANK_NUM 32
#define DDR_BANK 2

#define TABLE_NUM 84

// #define ACCESS_IDX_SIZE 84
// #define PADDED_ACCESS_IDX_SIZE 84
// #define AXI_PADDED_ACCESS_IDX_SIZE 84

#define TABLE_NUM_HBM 64
#define TABLE_NUM_DDR 4
#define TABLE_NUM_PLRAM 16

/////////////////////////   HBM   ///////////////////////// 
// alignment of tables to HBM: 
// table 0 ~ 31 -> HBM 0 ~ 31
// table 32 ~ 63 -> HBM 0 ~ 31

#define DATA_SIZE_HBM_0 12
#define PADDED_SIZE_HBM_0 12
#define AXI_PADDED_SIZE_HBM_0 12
#define TABLE_SIZE_HBM_0 50000
#define DATA_SIZE_HBM_1 8
#define PADDED_SIZE_HBM_1 8
#define AXI_PADDED_SIZE_HBM_1 8
#define TABLE_SIZE_HBM_1 50000
#define DATA_SIZE_HBM_2 8
#define PADDED_SIZE_HBM_2 8
#define AXI_PADDED_SIZE_HBM_2 8
#define TABLE_SIZE_HBM_2 50000
#define DATA_SIZE_HBM_3 8
#define PADDED_SIZE_HBM_3 8
#define AXI_PADDED_SIZE_HBM_3 8
#define TABLE_SIZE_HBM_3 50000
#define DATA_SIZE_HBM_4 8
#define PADDED_SIZE_HBM_4 8
#define AXI_PADDED_SIZE_HBM_4 8
#define TABLE_SIZE_HBM_4 50000
#define DATA_SIZE_HBM_5 8
#define PADDED_SIZE_HBM_5 8
#define AXI_PADDED_SIZE_HBM_5 8
#define TABLE_SIZE_HBM_5 50000
#define DATA_SIZE_HBM_6 8
#define PADDED_SIZE_HBM_6 8
#define AXI_PADDED_SIZE_HBM_6 8
#define TABLE_SIZE_HBM_6 50000
#define DATA_SIZE_HBM_7 8
#define PADDED_SIZE_HBM_7 8
#define AXI_PADDED_SIZE_HBM_7 8
#define TABLE_SIZE_HBM_7 50000
#define DATA_SIZE_HBM_8 8
#define PADDED_SIZE_HBM_8 8
#define AXI_PADDED_SIZE_HBM_8 8
#define TABLE_SIZE_HBM_8 50000
#define DATA_SIZE_HBM_9 8
#define PADDED_SIZE_HBM_9 8
#define AXI_PADDED_SIZE_HBM_9 8
#define TABLE_SIZE_HBM_9 50000
#define DATA_SIZE_HBM_10 8
#define PADDED_SIZE_HBM_10 8
#define AXI_PADDED_SIZE_HBM_10 8
#define TABLE_SIZE_HBM_10 50000
#define DATA_SIZE_HBM_11 8
#define PADDED_SIZE_HBM_11 8
#define AXI_PADDED_SIZE_HBM_11 8
#define TABLE_SIZE_HBM_11 50000
#define DATA_SIZE_HBM_12 8
#define PADDED_SIZE_HBM_12 8
#define AXI_PADDED_SIZE_HBM_12 8
#define TABLE_SIZE_HBM_12 50000
#define DATA_SIZE_HBM_13 8
#define PADDED_SIZE_HBM_13 8
#define AXI_PADDED_SIZE_HBM_13 8
#define TABLE_SIZE_HBM_13 50000
#define DATA_SIZE_HBM_14 8
#define PADDED_SIZE_HBM_14 8
#define AXI_PADDED_SIZE_HBM_14 8
#define TABLE_SIZE_HBM_14 50000
#define DATA_SIZE_HBM_15 8
#define PADDED_SIZE_HBM_15 8
#define AXI_PADDED_SIZE_HBM_15 8
#define TABLE_SIZE_HBM_15 50000
#define DATA_SIZE_HBM_16 8
#define PADDED_SIZE_HBM_16 8
#define AXI_PADDED_SIZE_HBM_16 8
#define TABLE_SIZE_HBM_16 50000
#define DATA_SIZE_HBM_17 8
#define PADDED_SIZE_HBM_17 8
#define AXI_PADDED_SIZE_HBM_17 8
#define TABLE_SIZE_HBM_17 50000
#define DATA_SIZE_HBM_18 8
#define PADDED_SIZE_HBM_18 8
#define AXI_PADDED_SIZE_HBM_18 8
#define TABLE_SIZE_HBM_18 50000
#define DATA_SIZE_HBM_19 8
#define PADDED_SIZE_HBM_19 8
#define AXI_PADDED_SIZE_HBM_19 8
#define TABLE_SIZE_HBM_19 50000
#define DATA_SIZE_HBM_20 8
#define PADDED_SIZE_HBM_20 8
#define AXI_PADDED_SIZE_HBM_20 8
#define TABLE_SIZE_HBM_20 50000
#define DATA_SIZE_HBM_21 8
#define PADDED_SIZE_HBM_21 8
#define AXI_PADDED_SIZE_HBM_21 8
#define TABLE_SIZE_HBM_21 50000
#define DATA_SIZE_HBM_22 8
#define PADDED_SIZE_HBM_22 8
#define AXI_PADDED_SIZE_HBM_22 8
#define TABLE_SIZE_HBM_22 50000
#define DATA_SIZE_HBM_23 8
#define PADDED_SIZE_HBM_23 8
#define AXI_PADDED_SIZE_HBM_23 8
#define TABLE_SIZE_HBM_23 50000
#define DATA_SIZE_HBM_24 8
#define PADDED_SIZE_HBM_24 8
#define AXI_PADDED_SIZE_HBM_24 8
#define TABLE_SIZE_HBM_24 50000
#define DATA_SIZE_HBM_25 8
#define PADDED_SIZE_HBM_25 8
#define AXI_PADDED_SIZE_HBM_25 8
#define TABLE_SIZE_HBM_25 50000
#define DATA_SIZE_HBM_26 8
#define PADDED_SIZE_HBM_26 8
#define AXI_PADDED_SIZE_HBM_26 8
#define TABLE_SIZE_HBM_26 50000
#define DATA_SIZE_HBM_27 8
#define PADDED_SIZE_HBM_27 8
#define AXI_PADDED_SIZE_HBM_27 8
#define TABLE_SIZE_HBM_27 50000
#define DATA_SIZE_HBM_28 8
#define PADDED_SIZE_HBM_28 8
#define AXI_PADDED_SIZE_HBM_28 8
#define TABLE_SIZE_HBM_28 50000
#define DATA_SIZE_HBM_29 8
#define PADDED_SIZE_HBM_29 8
#define AXI_PADDED_SIZE_HBM_29 8
#define TABLE_SIZE_HBM_29 50000
#define DATA_SIZE_HBM_30 8
#define PADDED_SIZE_HBM_30 8
#define AXI_PADDED_SIZE_HBM_30 8
#define TABLE_SIZE_HBM_30 50000
#define DATA_SIZE_HBM_31 8
#define PADDED_SIZE_HBM_31 8
#define AXI_PADDED_SIZE_HBM_31 8
#define TABLE_SIZE_HBM_31 100000
#define DATA_SIZE_HBM_32 8
#define PADDED_SIZE_HBM_32 8
#define AXI_PADDED_SIZE_HBM_32 8
#define TABLE_SIZE_HBM_32 100000
#define DATA_SIZE_HBM_33 8
#define PADDED_SIZE_HBM_33 8
#define AXI_PADDED_SIZE_HBM_33 8
#define TABLE_SIZE_HBM_33 100000
#define DATA_SIZE_HBM_34 8
#define PADDED_SIZE_HBM_34 8
#define AXI_PADDED_SIZE_HBM_34 8
#define TABLE_SIZE_HBM_34 100000
#define DATA_SIZE_HBM_35 8
#define PADDED_SIZE_HBM_35 8
#define AXI_PADDED_SIZE_HBM_35 8
#define TABLE_SIZE_HBM_35 100000
#define DATA_SIZE_HBM_36 8
#define PADDED_SIZE_HBM_36 8
#define AXI_PADDED_SIZE_HBM_36 8
#define TABLE_SIZE_HBM_36 100000
#define DATA_SIZE_HBM_37 8
#define PADDED_SIZE_HBM_37 8
#define AXI_PADDED_SIZE_HBM_37 8
#define TABLE_SIZE_HBM_37 100000
#define DATA_SIZE_HBM_38 8
#define PADDED_SIZE_HBM_38 8
#define AXI_PADDED_SIZE_HBM_38 8
#define TABLE_SIZE_HBM_38 100000
#define DATA_SIZE_HBM_39 8
#define PADDED_SIZE_HBM_39 8
#define AXI_PADDED_SIZE_HBM_39 8
#define TABLE_SIZE_HBM_39 100000
#define DATA_SIZE_HBM_40 8
#define PADDED_SIZE_HBM_40 8
#define AXI_PADDED_SIZE_HBM_40 8
#define TABLE_SIZE_HBM_40 100000
#define DATA_SIZE_HBM_41 8
#define PADDED_SIZE_HBM_41 8
#define AXI_PADDED_SIZE_HBM_41 8
#define TABLE_SIZE_HBM_41 100000
#define DATA_SIZE_HBM_42 8
#define PADDED_SIZE_HBM_42 8
#define AXI_PADDED_SIZE_HBM_42 8
#define TABLE_SIZE_HBM_42 150000
#define DATA_SIZE_HBM_43 8
#define PADDED_SIZE_HBM_43 8
#define AXI_PADDED_SIZE_HBM_43 8
#define TABLE_SIZE_HBM_43 150000
#define DATA_SIZE_HBM_44 8
#define PADDED_SIZE_HBM_44 8
#define AXI_PADDED_SIZE_HBM_44 8
#define TABLE_SIZE_HBM_44 250000
#define DATA_SIZE_HBM_45 8
#define PADDED_SIZE_HBM_45 8
#define AXI_PADDED_SIZE_HBM_45 8
#define TABLE_SIZE_HBM_45 250000
#define DATA_SIZE_HBM_46 16
#define PADDED_SIZE_HBM_46 16
#define AXI_PADDED_SIZE_HBM_46 16
#define TABLE_SIZE_HBM_46 500000
#define DATA_SIZE_HBM_47 16
#define PADDED_SIZE_HBM_47 16
#define AXI_PADDED_SIZE_HBM_47 16
#define TABLE_SIZE_HBM_47 500000
#define DATA_SIZE_HBM_48 16
#define PADDED_SIZE_HBM_48 16
#define AXI_PADDED_SIZE_HBM_48 16
#define TABLE_SIZE_HBM_48 500000
#define DATA_SIZE_HBM_49 16
#define PADDED_SIZE_HBM_49 16
#define AXI_PADDED_SIZE_HBM_49 16
#define TABLE_SIZE_HBM_49 500000
#define DATA_SIZE_HBM_50 16
#define PADDED_SIZE_HBM_50 16
#define AXI_PADDED_SIZE_HBM_50 16
#define TABLE_SIZE_HBM_50 500000
#define DATA_SIZE_HBM_51 16
#define PADDED_SIZE_HBM_51 16
#define AXI_PADDED_SIZE_HBM_51 16
#define TABLE_SIZE_HBM_51 500000
#define DATA_SIZE_HBM_52 16
#define PADDED_SIZE_HBM_52 16
#define AXI_PADDED_SIZE_HBM_52 16
#define TABLE_SIZE_HBM_52 500000
#define DATA_SIZE_HBM_53 16
#define PADDED_SIZE_HBM_53 16
#define AXI_PADDED_SIZE_HBM_53 16
#define TABLE_SIZE_HBM_53 500000
#define DATA_SIZE_HBM_54 16
#define PADDED_SIZE_HBM_54 16
#define AXI_PADDED_SIZE_HBM_54 16
#define TABLE_SIZE_HBM_54 500000
#define DATA_SIZE_HBM_55 16
#define PADDED_SIZE_HBM_55 16
#define AXI_PADDED_SIZE_HBM_55 16
#define TABLE_SIZE_HBM_55 500000
#define DATA_SIZE_HBM_56 16
#define PADDED_SIZE_HBM_56 16
#define AXI_PADDED_SIZE_HBM_56 16
#define TABLE_SIZE_HBM_56 500000
#define DATA_SIZE_HBM_57 16
#define PADDED_SIZE_HBM_57 16
#define AXI_PADDED_SIZE_HBM_57 16
#define TABLE_SIZE_HBM_57 500000
#define DATA_SIZE_HBM_58 16
#define PADDED_SIZE_HBM_58 16
#define AXI_PADDED_SIZE_HBM_58 16
#define TABLE_SIZE_HBM_58 500000
#define DATA_SIZE_HBM_59 16
#define PADDED_SIZE_HBM_59 16
#define AXI_PADDED_SIZE_HBM_59 16
#define TABLE_SIZE_HBM_59 500000
#define DATA_SIZE_HBM_60 16
#define PADDED_SIZE_HBM_60 16
#define AXI_PADDED_SIZE_HBM_60 16
#define TABLE_SIZE_HBM_60 500000
#define DATA_SIZE_HBM_61 16
#define PADDED_SIZE_HBM_61 16
#define AXI_PADDED_SIZE_HBM_61 16
#define TABLE_SIZE_HBM_61 500000
#define DATA_SIZE_HBM_62 16
#define PADDED_SIZE_HBM_62 16
#define AXI_PADDED_SIZE_HBM_62 16
#define TABLE_SIZE_HBM_62 1000000
#define DATA_SIZE_HBM_63 16
#define PADDED_SIZE_HBM_63 16
#define AXI_PADDED_SIZE_HBM_63 16
#define TABLE_SIZE_HBM_63 1000000

#define BURST_SIZE_HBM 16

#define ADDR_AXI_HBM_0 0
#define ADDR_AXI_HBM_1 0
#define ADDR_AXI_HBM_2 0
#define ADDR_AXI_HBM_3 0
#define ADDR_AXI_HBM_4 0
#define ADDR_AXI_HBM_5 0
#define ADDR_AXI_HBM_6 0
#define ADDR_AXI_HBM_7 0
#define ADDR_AXI_HBM_8 0
#define ADDR_AXI_HBM_9 0
#define ADDR_AXI_HBM_10 0
#define ADDR_AXI_HBM_11 0
#define ADDR_AXI_HBM_12 0
#define ADDR_AXI_HBM_13 0
#define ADDR_AXI_HBM_14 0
#define ADDR_AXI_HBM_15 0
#define ADDR_AXI_HBM_16 0
#define ADDR_AXI_HBM_17 0
#define ADDR_AXI_HBM_18 0
#define ADDR_AXI_HBM_19 0
#define ADDR_AXI_HBM_20 0
#define ADDR_AXI_HBM_21 0
#define ADDR_AXI_HBM_22 0
#define ADDR_AXI_HBM_23 0
#define ADDR_AXI_HBM_24 0
#define ADDR_AXI_HBM_25 0
#define ADDR_AXI_HBM_26 0
#define ADDR_AXI_HBM_27 0
#define ADDR_AXI_HBM_28 0
#define ADDR_AXI_HBM_29 0
#define ADDR_AXI_HBM_30 0
#define ADDR_AXI_HBM_31 0
#define ADDR_AXI_HBM_32 600000
#define ADDR_AXI_HBM_33 400000
#define ADDR_AXI_HBM_34 400000
#define ADDR_AXI_HBM_35 400000
#define ADDR_AXI_HBM_36 400000
#define ADDR_AXI_HBM_37 400000
#define ADDR_AXI_HBM_38 400000
#define ADDR_AXI_HBM_39 400000
#define ADDR_AXI_HBM_40 400000
#define ADDR_AXI_HBM_41 400000
#define ADDR_AXI_HBM_42 400000
#define ADDR_AXI_HBM_43 400000
#define ADDR_AXI_HBM_44 400000
#define ADDR_AXI_HBM_45 400000
#define ADDR_AXI_HBM_46 400000
#define ADDR_AXI_HBM_47 400000
#define ADDR_AXI_HBM_48 400000
#define ADDR_AXI_HBM_49 400000
#define ADDR_AXI_HBM_50 400000
#define ADDR_AXI_HBM_51 400000
#define ADDR_AXI_HBM_52 400000
#define ADDR_AXI_HBM_53 400000
#define ADDR_AXI_HBM_54 400000
#define ADDR_AXI_HBM_55 400000
#define ADDR_AXI_HBM_56 400000
#define ADDR_AXI_HBM_57 400000
#define ADDR_AXI_HBM_58 400000
#define ADDR_AXI_HBM_59 400000
#define ADDR_AXI_HBM_60 400000
#define ADDR_AXI_HBM_61 400000
#define ADDR_AXI_HBM_62 400000
#define ADDR_AXI_HBM_63 800000

#define HBM_BANK0_ROUND 2
#define HBM_BANK1_ROUND 2
#define HBM_BANK2_ROUND 2
#define HBM_BANK3_ROUND 2
#define HBM_BANK4_ROUND 2
#define HBM_BANK5_ROUND 2
#define HBM_BANK6_ROUND 2
#define HBM_BANK7_ROUND 2
#define HBM_BANK8_ROUND 2
#define HBM_BANK9_ROUND 2
#define HBM_BANK10_ROUND 2
#define HBM_BANK11_ROUND 2
#define HBM_BANK12_ROUND 2
#define HBM_BANK13_ROUND 2
#define HBM_BANK14_ROUND 2
#define HBM_BANK15_ROUND 2
#define HBM_BANK16_ROUND 2
#define HBM_BANK17_ROUND 2
#define HBM_BANK18_ROUND 2
#define HBM_BANK19_ROUND 2
#define HBM_BANK20_ROUND 2
#define HBM_BANK21_ROUND 2
#define HBM_BANK22_ROUND 2
#define HBM_BANK23_ROUND 2
#define HBM_BANK24_ROUND 2
#define HBM_BANK25_ROUND 2
#define HBM_BANK26_ROUND 2
#define HBM_BANK27_ROUND 2
#define HBM_BANK28_ROUND 2
#define HBM_BANK29_ROUND 2
#define HBM_BANK30_ROUND 2
#define HBM_BANK31_ROUND 2

#define HBM_BANK0_SIZE 1400000
#define HBM_BANK1_SIZE 1200000
#define HBM_BANK2_SIZE 1200000
#define HBM_BANK3_SIZE 1200000
#define HBM_BANK4_SIZE 1200000
#define HBM_BANK5_SIZE 1200000
#define HBM_BANK6_SIZE 1200000
#define HBM_BANK7_SIZE 1200000
#define HBM_BANK8_SIZE 1200000
#define HBM_BANK9_SIZE 1200000
#define HBM_BANK10_SIZE 1600000
#define HBM_BANK11_SIZE 1600000
#define HBM_BANK12_SIZE 2400000
#define HBM_BANK13_SIZE 2400000
#define HBM_BANK14_SIZE 8400000
#define HBM_BANK15_SIZE 8400000
#define HBM_BANK16_SIZE 8400000
#define HBM_BANK17_SIZE 8400000
#define HBM_BANK18_SIZE 8400000
#define HBM_BANK19_SIZE 8400000
#define HBM_BANK20_SIZE 8400000
#define HBM_BANK21_SIZE 8400000
#define HBM_BANK22_SIZE 8400000
#define HBM_BANK23_SIZE 8400000
#define HBM_BANK24_SIZE 8400000
#define HBM_BANK25_SIZE 8400000
#define HBM_BANK26_SIZE 8400000
#define HBM_BANK27_SIZE 8400000
#define HBM_BANK28_SIZE 8400000
#define HBM_BANK29_SIZE 8400000
#define HBM_BANK30_SIZE 16400000
#define HBM_BANK31_SIZE 16800000

#define VECTOR_SIZE_HBM_BANK_0 20
#define VECTOR_SIZE_HBM_BANK_1 16
#define VECTOR_SIZE_HBM_BANK_2 16
#define VECTOR_SIZE_HBM_BANK_3 16
#define VECTOR_SIZE_HBM_BANK_4 16
#define VECTOR_SIZE_HBM_BANK_5 16
#define VECTOR_SIZE_HBM_BANK_6 16
#define VECTOR_SIZE_HBM_BANK_7 16
#define VECTOR_SIZE_HBM_BANK_8 16
#define VECTOR_SIZE_HBM_BANK_9 16
#define VECTOR_SIZE_HBM_BANK_10 16
#define VECTOR_SIZE_HBM_BANK_11 16
#define VECTOR_SIZE_HBM_BANK_12 16
#define VECTOR_SIZE_HBM_BANK_13 16
#define VECTOR_SIZE_HBM_BANK_14 24
#define VECTOR_SIZE_HBM_BANK_15 24
#define VECTOR_SIZE_HBM_BANK_16 24
#define VECTOR_SIZE_HBM_BANK_17 24
#define VECTOR_SIZE_HBM_BANK_18 24
#define VECTOR_SIZE_HBM_BANK_19 24
#define VECTOR_SIZE_HBM_BANK_20 24
#define VECTOR_SIZE_HBM_BANK_21 24
#define VECTOR_SIZE_HBM_BANK_22 24
#define VECTOR_SIZE_HBM_BANK_23 24
#define VECTOR_SIZE_HBM_BANK_24 24
#define VECTOR_SIZE_HBM_BANK_25 24
#define VECTOR_SIZE_HBM_BANK_26 24
#define VECTOR_SIZE_HBM_BANK_27 24
#define VECTOR_SIZE_HBM_BANK_28 24
#define VECTOR_SIZE_HBM_BANK_29 24
#define VECTOR_SIZE_HBM_BANK_30 24
#define VECTOR_SIZE_HBM_BANK_31 24

#define VECTOR_START_IDX_HBM_BANK_0 0
#define VECTOR_START_IDX_HBM_BANK_1 20
#define VECTOR_START_IDX_HBM_BANK_2 36
#define VECTOR_START_IDX_HBM_BANK_3 52
#define VECTOR_START_IDX_HBM_BANK_4 68
#define VECTOR_START_IDX_HBM_BANK_5 84
#define VECTOR_START_IDX_HBM_BANK_6 100
#define VECTOR_START_IDX_HBM_BANK_7 116
#define VECTOR_START_IDX_HBM_BANK_8 132
#define VECTOR_START_IDX_HBM_BANK_9 148
#define VECTOR_START_IDX_HBM_BANK_10 164
#define VECTOR_START_IDX_HBM_BANK_11 180
#define VECTOR_START_IDX_HBM_BANK_12 196
#define VECTOR_START_IDX_HBM_BANK_13 212
#define VECTOR_START_IDX_HBM_BANK_14 228
#define VECTOR_START_IDX_HBM_BANK_15 252
#define VECTOR_START_IDX_HBM_BANK_16 276
#define VECTOR_START_IDX_HBM_BANK_17 300
#define VECTOR_START_IDX_HBM_BANK_18 324
#define VECTOR_START_IDX_HBM_BANK_19 348
#define VECTOR_START_IDX_HBM_BANK_20 372
#define VECTOR_START_IDX_HBM_BANK_21 396
#define VECTOR_START_IDX_HBM_BANK_22 420
#define VECTOR_START_IDX_HBM_BANK_23 444
#define VECTOR_START_IDX_HBM_BANK_24 468
#define VECTOR_START_IDX_HBM_BANK_25 492
#define VECTOR_START_IDX_HBM_BANK_26 516
#define VECTOR_START_IDX_HBM_BANK_27 540
#define VECTOR_START_IDX_HBM_BANK_28 564
#define VECTOR_START_IDX_HBM_BANK_29 588
#define VECTOR_START_IDX_HBM_BANK_30 612
#define VECTOR_START_IDX_HBM_BANK_31 636

/////////////////////////   DDR   ///////////////////////// 
// alignment of tables to DDR: 
// table 0 ~ 1 -> DDR 0 ~ 1
// table 2 ~ 3 -> DDR 0 ~ 1

#define DATA_SIZE_DDR_0 12
#define PADDED_SIZE_DDR_0 12
#define AXI_PADDED_SIZE_DDR_0 12
#define TABLE_SIZE_DDR_0 5000000
#define DATA_SIZE_DDR_1 16
#define PADDED_SIZE_DDR_1 16
#define AXI_PADDED_SIZE_DDR_1 16
#define TABLE_SIZE_DDR_1 5000000
#define DATA_SIZE_DDR_2 32
#define PADDED_SIZE_DDR_2 32
#define AXI_PADDED_SIZE_DDR_2 32
#define TABLE_SIZE_DDR_2 10000000
#define DATA_SIZE_DDR_3 32
#define PADDED_SIZE_DDR_3 32
#define AXI_PADDED_SIZE_DDR_3 32
#define TABLE_SIZE_DDR_3 100000000

#define BURST_SIZE_DDR 32

#define ADDR_AXI_DDR_0 0
#define ADDR_AXI_DDR_1 0
#define ADDR_AXI_DDR_2 60000000
#define ADDR_AXI_DDR_3 80000000

#define DDR_BANK0_ROUND 2
#define DDR_BANK1_ROUND 2

#define DDR_BANK0_SIZE 380000000
#define DDR_BANK1_SIZE 3280000000

#define VECTOR_SIZE_DDR_BANK_0 44
#define VECTOR_SIZE_DDR_BANK_1 48

#define VECTOR_START_IDX_DDR_BANK_0 660
#define VECTOR_START_IDX_DDR_BANK_1 704

/////////////////////////   PLRAM   ///////////////////////// 
// alignment of tables to PLRAM: 
// table 0 ~ 3 -> PLRAM 0 ~ 3
// table 4 ~ 7 -> PLRAM 0 ~ 3

#define DATA_SIZE_PLRAM_0 8
#define PADDED_SIZE_PLRAM_0 8
#define AXI_PADDED_SIZE_PLRAM_0 8
#define TABLE_SIZE_PLRAM_0 5000
#define DATA_SIZE_PLRAM_1 8
#define PADDED_SIZE_PLRAM_1 8
#define AXI_PADDED_SIZE_PLRAM_1 8
#define TABLE_SIZE_PLRAM_1 5000
#define DATA_SIZE_PLRAM_2 8
#define PADDED_SIZE_PLRAM_2 8
#define AXI_PADDED_SIZE_PLRAM_2 8
#define TABLE_SIZE_PLRAM_2 5000
#define DATA_SIZE_PLRAM_3 8
#define PADDED_SIZE_PLRAM_3 8
#define AXI_PADDED_SIZE_PLRAM_3 8
#define TABLE_SIZE_PLRAM_3 5000
#define DATA_SIZE_PLRAM_4 8
#define PADDED_SIZE_PLRAM_4 8
#define AXI_PADDED_SIZE_PLRAM_4 8
#define TABLE_SIZE_PLRAM_4 5000
#define DATA_SIZE_PLRAM_5 8
#define PADDED_SIZE_PLRAM_5 8
#define AXI_PADDED_SIZE_PLRAM_5 8
#define TABLE_SIZE_PLRAM_5 5000
#define DATA_SIZE_PLRAM_6 8
#define PADDED_SIZE_PLRAM_6 8
#define AXI_PADDED_SIZE_PLRAM_6 8
#define TABLE_SIZE_PLRAM_6 5000
#define DATA_SIZE_PLRAM_7 8
#define PADDED_SIZE_PLRAM_7 8
#define AXI_PADDED_SIZE_PLRAM_7 8
#define TABLE_SIZE_PLRAM_7 5000
#define DATA_SIZE_PLRAM_8 8
#define PADDED_SIZE_PLRAM_8 8
#define AXI_PADDED_SIZE_PLRAM_8 8
#define TABLE_SIZE_PLRAM_8 5000
#define DATA_SIZE_PLRAM_9 8
#define PADDED_SIZE_PLRAM_9 8
#define AXI_PADDED_SIZE_PLRAM_9 8
#define TABLE_SIZE_PLRAM_9 5000
#define DATA_SIZE_PLRAM_10 8
#define PADDED_SIZE_PLRAM_10 8
#define AXI_PADDED_SIZE_PLRAM_10 8
#define TABLE_SIZE_PLRAM_10 5000
#define DATA_SIZE_PLRAM_11 8
#define PADDED_SIZE_PLRAM_11 8
#define AXI_PADDED_SIZE_PLRAM_11 8
#define TABLE_SIZE_PLRAM_11 5000
#define DATA_SIZE_PLRAM_12 8
#define PADDED_SIZE_PLRAM_12 8
#define AXI_PADDED_SIZE_PLRAM_12 8
#define TABLE_SIZE_PLRAM_12 5000
#define DATA_SIZE_PLRAM_13 8
#define PADDED_SIZE_PLRAM_13 8
#define AXI_PADDED_SIZE_PLRAM_13 8
#define TABLE_SIZE_PLRAM_13 5000
#define DATA_SIZE_PLRAM_14 8
#define PADDED_SIZE_PLRAM_14 8
#define AXI_PADDED_SIZE_PLRAM_14 8
#define TABLE_SIZE_PLRAM_14 15000
#define DATA_SIZE_PLRAM_15 8
#define PADDED_SIZE_PLRAM_15 8
#define AXI_PADDED_SIZE_PLRAM_15 8
#define TABLE_SIZE_PLRAM_15 15000

#define BURST_SIZE_PLRAM 8

#define ADDR_AXI_PLRAM_0 0
#define ADDR_AXI_PLRAM_1 0
#define ADDR_AXI_PLRAM_2 0
#define ADDR_AXI_PLRAM_3 0
#define ADDR_AXI_PLRAM_4 40000
#define ADDR_AXI_PLRAM_5 40000
#define ADDR_AXI_PLRAM_6 40000
#define ADDR_AXI_PLRAM_7 40000
#define ADDR_AXI_PLRAM_8 80000
#define ADDR_AXI_PLRAM_9 80000
#define ADDR_AXI_PLRAM_10 80000
#define ADDR_AXI_PLRAM_11 80000
#define ADDR_AXI_PLRAM_12 120000
#define ADDR_AXI_PLRAM_13 120000
#define ADDR_AXI_PLRAM_14 120000
#define ADDR_AXI_PLRAM_15 120000

#define PLRAM_BANK0_ROUND 4
#define PLRAM_BANK1_ROUND 4
#define PLRAM_BANK2_ROUND 4
#define PLRAM_BANK3_ROUND 4

#define PLRAM_BANK0_SIZE 160000
#define PLRAM_BANK1_SIZE 160000
#define PLRAM_BANK2_SIZE 240000
#define PLRAM_BANK3_SIZE 240000

#define VECTOR_SIZE_PLRAM_BANK_0 32
#define VECTOR_SIZE_PLRAM_BANK_1 32
#define VECTOR_SIZE_PLRAM_BANK_2 32
#define VECTOR_SIZE_PLRAM_BANK_3 32

#define VECTOR_START_IDX_PLRAM_BANK_0 752
#define VECTOR_START_IDX_PLRAM_BANK_1 784
#define VECTOR_START_IDX_PLRAM_BANK_2 816
#define VECTOR_START_IDX_PLRAM_BANK_3 848

//////////////////////////////   TEMPLATE END  //////////////////////////////


typedef short t_hbm;
typedef short t_ddr;
typedef short t_plram;
typedef short t_axi;

typedef short D_TYPE;
typedef ap_int<64> VEC_TYPE; // the shortest vector has a length of 4
typedef ap_int<128> W_TYPE;  // weights / feature width
// typedef ap_int<256> FIFO_TYPE;  // stream width

#define SHORTS_PER_W 8 // 64 bit = 2 x 32 bit int
#define SHORTS_PER_VEC 4
// #define SHORTS_PER_FIFO 8

#define INPUT_SIZE 880
#define HIDDEN_SIZE1 1024
#define HIDDEN_SIZE2 512
#define HIDDEN_SIZE3 256
#define OUTPUT_SIZE 1

#define PE_NUM1 128
#define PE_NUM2 128
#define PE_NUM3 32
#define PE_NUM_OUT 1

// This row means after transpose it is row, before is col
#define ROW_PER_PE1 (HIDDEN_SIZE1 / PE_NUM1) // 1024 / 128 = 8
#define ROW_PER_PE2 (HIDDEN_SIZE2 / PE_NUM2) // 512 / 128 = 4
#define ROW_PER_PE3 (HIDDEN_SIZE3 / PE_NUM3) // 256 / 32 = 8
#define ROW_PER_PE_OUT (OUTPUT_SIZE / PE_NUM_OUT) // 1 / 1 = 1

#define FIFO_BATCH_SIZE 8   // cache 8 batches at max in FIFO
#define BATCH_SIZE 32
// #define BATCH_NUM 2
// #define BATCH_NUM 1
#define BATCH_NUM 5000 // NOTE! load access idx to BRAM!
