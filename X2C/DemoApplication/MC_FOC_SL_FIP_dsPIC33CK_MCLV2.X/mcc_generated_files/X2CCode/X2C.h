/**
 * @file
 * @brief Generated model file.
 * 
 * Date:  2019-06-26 09:50
 * 
 * X2C-Version: 6.1.1707
 * X2C-Edition: Free
 */
/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: MC_FOC_SL_FIP_dsPIC33CK_MCLV2                                                                               */
/* Date:  2019-06-26 09:50                                                                                            */

/* X2C-Version: 6.1.1707                                                                                              */
/* X2C-Edition: Free                                                                                                  */

#ifndef X2C_H
#define X2C_H

#ifdef __cplusplus
extern "C" {
#endif

/**********************************************************************************************************************/
/**     Includes                                                                                                     **/
/**********************************************************************************************************************/
#include "Constant_Bool.h"
#include "Delay_FiP16.h"
#include "Clark_Park_FiP16.h"
#include "Constant_FiP16.h"
#include "Gain_FiP16.h"
#include "ManualSwitch_FiP16.h"
#include "Not_Bool.h"
#include "PI_FiP16.h"
#include "BEMF_calc_FiP16.h"
#include "PT1_FiP16.h"
#include "Park_FiP16.h"
#include "Add_FiP16.h"
#include "AutoSwitch_FiP16.h"
#include "Sub_FiP16.h"
#include "uI_FiP16.h"
#include "Park_Clark_inv_FiP16.h"
#include "Saturation_FiP16.h"
#include "Sin3Gen_FiP16.h"
#include "TypeConv_FiP16_Bool.h"
#include "Negation_FiP16.h"
#include "RateLimiter_FiP16.h"
#include "I_FiP16.h"
#include "Sequencer_FiP16.h"
#include "Scope_Main.h"
#include "CommonFcts.h"

/**********************************************************************************************************************/
/**     Defines                                                                                                      **/
/**********************************************************************************************************************/
#define FUNCTIONS \
    CONSTANT_BOOL_FUNCTIONS , \
    DELAY_FIP16_FUNCTIONS , \
    CLARK_PARK_FIP16_FUNCTIONS , \
    CONSTANT_FIP16_FUNCTIONS , \
    GAIN_FIP16_FUNCTIONS , \
    MANUALSWITCH_FIP16_FUNCTIONS , \
    NOT_BOOL_FUNCTIONS , \
    PI_FIP16_FUNCTIONS , \
    BEMF_CALC_FIP16_FUNCTIONS , \
    PT1_FIP16_FUNCTIONS , \
    PARK_FIP16_FUNCTIONS , \
    ADD_FIP16_FUNCTIONS , \
    AUTOSWITCH_FIP16_FUNCTIONS , \
    SUB_FIP16_FUNCTIONS , \
    UI_FIP16_FUNCTIONS , \
    PARK_CLARK_INV_FIP16_FUNCTIONS , \
    SATURATION_FIP16_FUNCTIONS , \
    SIN3GEN_FIP16_FUNCTIONS , \
    TYPECONV_FIP16_BOOL_FUNCTIONS , \
    NEGATION_FIP16_FUNCTIONS , \
    RATELIMITER_FIP16_FUNCTIONS , \
    I_FIP16_FUNCTIONS , \
    SEQUENCER_FIP16_FUNCTIONS , \
    SCOPE_MAIN_FUNCTIONS

#define PARAMETER_TABLE \
    { 1, &x2cModel.blocks.bConstant3 } , \
    { 2, &x2cModel.blocks.bDelay1 } , \
    { 3, &x2cModel.blocks.bDelay2 } , \
    { 4, &x2cModel.blocks.bDelay3 } , \
    { 5, &x2cModel.blocks.sFOC_main.bClark_Park } , \
    { 6, &x2cModel.blocks.sFOC_main.bConstant } , \
    { 7, &x2cModel.blocks.sFOC_main.bConstant1 } , \
    { 8, &x2cModel.blocks.sFOC_main.bGain1 } , \
    { 9, &x2cModel.blocks.sFOC_main.bGain2 } , \
    { 10, &x2cModel.blocks.sFOC_main.bManualSwitch } , \
    { 11, &x2cModel.blocks.sFOC_main.bManualSwitch1 } , \
    { 12, &x2cModel.blocks.sFOC_main.bManualSwitch2 } , \
    { 13, &x2cModel.blocks.sFOC_main.bManualSwitch3 } , \
    { 14, &x2cModel.blocks.sFOC_main.bManualSwitch4 } , \
    { 15, &x2cModel.blocks.sFOC_main.bNot } , \
    { 16, &x2cModel.blocks.sFOC_main.bOpenLoop_Vd } , \
    { 17, &x2cModel.blocks.sFOC_main.bOpenLoop_Vq } , \
    { 18, &x2cModel.blocks.sFOC_main.bPI_flux } , \
    { 19, &x2cModel.blocks.sFOC_main.bPI_torque } , \
    { 20, &x2cModel.blocks.sFOC_main.sPLLEstimator.bBEMF_calc } , \
    { 21, &x2cModel.blocks.sFOC_main.sPLLEstimator.bConstant1 } , \
    { 22, &x2cModel.blocks.sFOC_main.sPLLEstimator.bDelay1 } , \
    { 23, &x2cModel.blocks.sFOC_main.sPLLEstimator.bEdfilter } , \
    { 24, &x2cModel.blocks.sFOC_main.sPLLEstimator.bEqfilter } , \
    { 25, &x2cModel.blocks.sFOC_main.sPLLEstimator.bPark } , \
    { 26, &x2cModel.blocks.sFOC_main.sPLLEstimator.sSpeed_Estim_Superblock.bAdd } , \
    { 27, &x2cModel.blocks.sFOC_main.sPLLEstimator.sSpeed_Estim_Superblock.bAutoSwitch } , \
    { 28, &x2cModel.blocks.sFOC_main.sPLLEstimator.sSpeed_Estim_Superblock.bGain } , \
    { 29, &x2cModel.blocks.sFOC_main.sPLLEstimator.sSpeed_Estim_Superblock.bSub } , \
    { 30, &x2cModel.blocks.sFOC_main.sPLLEstimator.buI } , \
    { 31, &x2cModel.blocks.sFOC_main.bPark_Clark_inv } , \
    { 32, &x2cModel.blocks.sFOC_main.bSaturation } , \
    { 33, &x2cModel.blocks.sFOC_main.bSaturation1 } , \
    { 34, &x2cModel.blocks.sFOC_main.bSin3Gen } , \
    { 35, &x2cModel.blocks.sFOC_main.bSub_flux } , \
    { 36, &x2cModel.blocks.sFOC_main.bSub_torque } , \
    { 37, &x2cModel.blocks.sFOC_main.bTypeConv2 } , \
    { 38, &x2cModel.blocks.sFOC_main.binitForcedValue } , \
    { 39, &x2cModel.blocks.bGain } , \
    { 40, &x2cModel.blocks.bGain1 } , \
    { 41, &x2cModel.blocks.bManualSwitch } , \
    { 42, &x2cModel.blocks.bManualSwitch1 } , \
    { 43, &x2cModel.blocks.bNegation } , \
    { 44, &x2cModel.blocks.sspeedPI.bPI_speed } , \
    { 45, &x2cModel.blocks.sspeedPI.bRateLimiter } , \
    { 46, &x2cModel.blocks.sspeedPI.bSpeed_Init } , \
    { 47, &x2cModel.blocks.sspeedPI.bSpeed_Init1 } , \
    { 48, &x2cModel.blocks.sspeedPI.bSpeed_error } , \
    { 49, &x2cModel.blocks.sstartup.bAutoSwitch } , \
    { 50, &x2cModel.blocks.sstartup.bAutoSwitch1 } , \
    { 51, &x2cModel.blocks.sstartup.bAutoSwitch2 } , \
    { 52, &x2cModel.blocks.sstartup.bConstant1 } , \
    { 53, &x2cModel.blocks.sstartup.bConstant5 } , \
    { 54, &x2cModel.blocks.sstartup.bConstant6 } , \
    { 55, &x2cModel.blocks.sstartup.sDelay50.bDelay } , \
    { 56, &x2cModel.blocks.sstartup.bFlux_select } , \
    { 57, &x2cModel.blocks.sstartup.bFlux_select1 } , \
    { 58, &x2cModel.blocks.sstartup.bRamp_Up_Current } , \
    { 59, &x2cModel.blocks.sstartup.sRamp_Up_SB.bConstant4 } , \
    { 60, &x2cModel.blocks.sstartup.sRamp_Up_SB.bI_Init_Zero } , \
    { 61, &x2cModel.blocks.sstartup.sRamp_Up_SB.bI_Init_Zero1 } , \
    { 62, &x2cModel.blocks.sstartup.sRamp_Up_SB.bRamp_Up_PositionGenerator } , \
    { 63, &x2cModel.blocks.sstartup.sRamp_Up_SB.bRateLimiter } , \
    { 64, &x2cModel.blocks.sstartup.sRamp_Up_SB.bSaturation } , \
    { 65, &x2cModel.blocks.sstartup.sRamp_Up_SB.bSpeed_Ramp_UP_I } , \
    { 66, &x2cModel.blocks.sstartup.sRamp_Up_SB.bTypeConv } , \
    { 67, &x2cModel.blocks.sstartup.sRamp_Up_SB.bTypeConv1 } , \
    { 68, &x2cModel.blocks.sstartup.bRateLimiter } , \
    { 69, &x2cModel.blocks.sstartup.bRateLimiter1 } , \
    { 70, &x2cModel.blocks.sstartup.bRateLimiter2 } , \
    { 71, &x2cModel.blocks.sstartup.bSequencer } , \
    { 72, &x2cModel.blocks.sstartup.bTypeConv } , \
    { 73, &x2cModel.blocks.sstartup.bTypeConv1 } , \
    { 74, &x2cModel.blocks.sstartup.bTypeConv2 } , \
    { 96, &x2cScope }

#define INPORT_PARAMID_TABLE \
    { 75, 2, &x2cModel.inports.bCPU_LOAD } , \
    { 76, 2, &x2cModel.inports.bI_a } , \
    { 77, 2, &x2cModel.inports.bI_b } , \
    { 78, 2, &x2cModel.inports.bI_sum } , \
    { 79, 2, &x2cModel.inports.bQEI_POS } , \
    { 80, 2, &x2cModel.inports.bQEI_VEL } , \
    { 81, 1, &x2cModel.inports.bS2 } , \
    { 82, 2, &x2cModel.inports.bS3 } , \
    { 83, 2, &x2cModel.inports.bV_POT } 

#define OUTPORT_PARAMID_TABLE \
    { 84, 2, &x2cModel.outports.sFOC_main.bEstimated_angle } , \
    { 85, 2, &x2cModel.outports.sFOC_main.bEstimated_speed } , \
    { 86, 2, &x2cModel.outports.bHOME_INIT } , \
    { 87, 1, &x2cModel.outports.bLED_D17 } , \
    { 88, 1, &x2cModel.outports.bLED_D2 } , \
    { 89, 2, &x2cModel.outports.bPWM1 } , \
    { 90, 2, &x2cModel.outports.bPWM2 } , \
    { 91, 2, &x2cModel.outports.bPWM3 } , \
    { 92, 2, &x2cModel.outports.sstartup.bId } , \
    { 93, 2, &x2cModel.outports.sstartup.bIq } , \
    { 94, 2, &x2cModel.outports.sstartup.bON_OFF } , \
    { 95, 2, &x2cModel.outports.sstartup.bpos } 


/**********************************************************************************************************************/
/**                                            Model structure definition                                            **/
/**********************************************************************************************************************/
struct x2cModel {
/*  Control Blocks                                                                                                    */
    struct {
/*      Sub-system FOC_main                                                                                           */
        struct {
/*          Sub-system PLLEstimator                                                                                   */
            struct {
/*              Sub-system Speed_Estim_Superblock                                                                     */
                struct {
                    ADD_FIP16 bAdd;
                    AUTOSWITCH_FIP16 bAutoSwitch;
                    GAIN_FIP16 bGain;
                    SUB_FIP16 bSub;
                } sSpeed_Estim_Superblock;
                BEMF_CALC_FIP16 bBEMF_calc;
                CONSTANT_FIP16 bConstant1;
                DELAY_FIP16 bDelay1;
                PT1_FIP16 bEdfilter;
                PT1_FIP16 bEqfilter;
                PARK_FIP16 bPark;
                UI_FIP16 buI;
            } sPLLEstimator;
            CLARK_PARK_FIP16 bClark_Park;
            CONSTANT_FIP16 bConstant;
            CONSTANT_FIP16 bConstant1;
            GAIN_FIP16 bGain1;
            GAIN_FIP16 bGain2;
            MANUALSWITCH_FIP16 bManualSwitch;
            MANUALSWITCH_FIP16 bManualSwitch1;
            MANUALSWITCH_FIP16 bManualSwitch2;
            MANUALSWITCH_FIP16 bManualSwitch3;
            MANUALSWITCH_FIP16 bManualSwitch4;
            NOT_BOOL bNot;
            CONSTANT_FIP16 bOpenLoop_Vd;
            CONSTANT_FIP16 bOpenLoop_Vq;
            PI_FIP16 bPI_flux;
            PI_FIP16 bPI_torque;
            PARK_CLARK_INV_FIP16 bPark_Clark_inv;
            SATURATION_FIP16 bSaturation;
            SATURATION_FIP16 bSaturation1;
            SIN3GEN_FIP16 bSin3Gen;
            SUB_FIP16 bSub_flux;
            SUB_FIP16 bSub_torque;
            TYPECONV_FIP16_BOOL bTypeConv2;
            CONSTANT_FIP16 binitForcedValue;
        } sFOC_main;
/*      Sub-system speedPI                                                                                            */
        struct {
            PI_FIP16 bPI_speed;
            RATELIMITER_FIP16 bRateLimiter;
            CONSTANT_BOOL bSpeed_Init;
            CONSTANT_FIP16 bSpeed_Init1;
            SUB_FIP16 bSpeed_error;
        } sspeedPI;
/*      Sub-system startup                                                                                            */
        struct {
/*          Sub-system Delay50                                                                                        */
            struct {
                DELAY_FIP16 bDelay;
            } sDelay50;
/*          Sub-system Ramp_Up_SB                                                                                     */
            struct {
                CONSTANT_FIP16 bConstant4;
                CONSTANT_FIP16 bI_Init_Zero;
                CONSTANT_FIP16 bI_Init_Zero1;
                UI_FIP16 bRamp_Up_PositionGenerator;
                RATELIMITER_FIP16 bRateLimiter;
                SATURATION_FIP16 bSaturation;
                I_FIP16 bSpeed_Ramp_UP_I;
                TYPECONV_FIP16_BOOL bTypeConv;
                TYPECONV_FIP16_BOOL bTypeConv1;
            } sRamp_Up_SB;
            AUTOSWITCH_FIP16 bAutoSwitch;
            AUTOSWITCH_FIP16 bAutoSwitch1;
            AUTOSWITCH_FIP16 bAutoSwitch2;
            CONSTANT_FIP16 bConstant1;
            CONSTANT_FIP16 bConstant5;
            CONSTANT_FIP16 bConstant6;
            AUTOSWITCH_FIP16 bFlux_select;
            AUTOSWITCH_FIP16 bFlux_select1;
            CONSTANT_FIP16 bRamp_Up_Current;
            RATELIMITER_FIP16 bRateLimiter;
            RATELIMITER_FIP16 bRateLimiter1;
            RATELIMITER_FIP16 bRateLimiter2;
            SEQUENCER_FIP16 bSequencer;
            TYPECONV_FIP16_BOOL bTypeConv;
            TYPECONV_FIP16_BOOL bTypeConv1;
            TYPECONV_FIP16_BOOL bTypeConv2;
        } sstartup;
        CONSTANT_BOOL bConstant3;
        DELAY_FIP16 bDelay1;
        DELAY_FIP16 bDelay2;
        DELAY_FIP16 bDelay3;
        GAIN_FIP16 bGain;
        GAIN_FIP16 bGain1;
        MANUALSWITCH_FIP16 bManualSwitch;
        MANUALSWITCH_FIP16 bManualSwitch1;
        NEGATION_FIP16 bNegation;
    } blocks;
/*  Inports                                                                                                           */
    struct {
        int16 bCPU_LOAD;
        int16 bI_a;
        int16 bI_b;
        int16 bI_sum;
        int16 bQEI_POS;
        int16 bQEI_VEL;
        bool bS2;
        int16 bS3;
        int16 bV_POT;
    } inports;
/*  Outports                                                                                                          */
    struct {
/*      Sub-system FOC_main                                                                                           */
        struct {
            int16* bEstimated_angle;
            int16* bEstimated_speed;
        } sFOC_main;
/*      Sub-system startup                                                                                            */
        struct {
            int16* bId;
            int16* bIq;
            int16* bON_OFF;
            int16* bpos;
        } sstartup;
        int16* bHOME_INIT;
        bool* bLED_D17;
        bool* bLED_D2;
        int16* bPWM1;
        int16* bPWM2;
        int16* bPWM3;
    } outports;
};

/**********************************************************************************************************************/
/**     Externals                                                                                                    **/
/**********************************************************************************************************************/
extern struct x2cModel x2cModel;

extern const tBlockFunctions blockFunctionTable[];
extern const tParameterTable parameterIdTable[];
extern const tIoParamIdEntry inportParamIdTable[];
extern const tIoParamIdEntry outportParamIdTable[];

#define X2C_UPDATE_10_DIVIDER 10
#define X2C_UPDATE_50_DIVIDER 50

/**********************************************************************************************************************/
/**     Prototypes                                                                                                   **/
/**********************************************************************************************************************/
void X2C_Init(void);
void X2C_Update(void);
void X2C_Update_1(void);
void X2C_Update_10(void);
void X2C_Update_50(void);

#ifdef __cplusplus
}
#endif

#endif