/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y25
 */

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     PROLOGUE
 *     INCLUDES
 *     
 *     CREATE ARGS
 *     INTERNAL DEFINITIONS
 *     MODULE-WIDE CONFIGS
 *     PER-INSTANCE TYPES
 *     FUNCTION DECLARATIONS
 *     FUNCTION SELECTORS
 *     SYSTEM FUNCTIONS
 *     
 *     EPILOGUE
 *     STATE STRUCTURES
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_sysbios_knl_Task__include
#define ti_sysbios_knl_Task__include

#ifndef __nested__
#define __nested__
#define ti_sysbios_knl_Task__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sysbios_knl_Task___VERS 150


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sysbios/knl/Task__prologue.h>
#include <ti/sysbios/knl/package/package.defs.h>

#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/interfaces/ITaskSupport.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/IHeap.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/IModule.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/package/Task_SupportProxy.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* FuncPtr */
typedef xdc_Void (*ti_sysbios_knl_Task_FuncPtr)(xdc_UArg, xdc_UArg);

/* AllBlockedFuncPtr */
typedef xdc_Void (*ti_sysbios_knl_Task_AllBlockedFuncPtr)(xdc_Void);

/* Mode */
enum ti_sysbios_knl_Task_Mode {
    ti_sysbios_knl_Task_Mode_RUNNING,
    ti_sysbios_knl_Task_Mode_READY,
    ti_sysbios_knl_Task_Mode_BLOCKED,
    ti_sysbios_knl_Task_Mode_TERMINATED,
    ti_sysbios_knl_Task_Mode_INACTIVE
};
typedef enum ti_sysbios_knl_Task_Mode ti_sysbios_knl_Task_Mode;

/* Stat */
struct ti_sysbios_knl_Task_Stat {
    xdc_Int priority;
    xdc_Ptr stack;
    xdc_SizeT stackSize;
    xdc_runtime_IHeap_Handle stackHeap;
    xdc_Ptr env;
    ti_sysbios_knl_Task_Mode mode;
    xdc_Ptr sp;
    xdc_SizeT used;
};

/* HookSet */
struct ti_sysbios_knl_Task_HookSet {
    xdc_Void (*registerFxn)(xdc_Int);
    xdc_Void (*createFxn)(ti_sysbios_knl_Task_Handle, xdc_runtime_Error_Block*);
    xdc_Void (*readyFxn)(ti_sysbios_knl_Task_Handle);
    xdc_Void (*switchFxn)(ti_sysbios_knl_Task_Handle, ti_sysbios_knl_Task_Handle);
    xdc_Void (*exitFxn)(ti_sysbios_knl_Task_Handle);
    xdc_Void (*deleteFxn)(ti_sysbios_knl_Task_Handle);
};


/*
 * ======== CREATE ARGS ========
 */

/* Args__create */
typedef struct ti_sysbios_knl_Task_Args__create {
    ti_sysbios_knl_Task_FuncPtr fxn;
} ti_sysbios_knl_Task_Args__create;


/*
 * ======== INTERNAL DEFINITIONS ========
 */

/* PendElem */
struct ti_sysbios_knl_Task_PendElem {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Task_Handle task;
    ti_sysbios_knl_Clock_Handle clock;
};

/* Instance_State */
typedef xdc_Char __T1_ti_sysbios_knl_Task_Instance_State__stack;
typedef xdc_Char *__ARRAY1_ti_sysbios_knl_Task_Instance_State__stack;
typedef __ARRAY1_ti_sysbios_knl_Task_Instance_State__stack __TA_ti_sysbios_knl_Task_Instance_State__stack;
typedef xdc_Ptr __T1_ti_sysbios_knl_Task_Instance_State__hookEnv;
typedef xdc_Ptr *__ARRAY1_ti_sysbios_knl_Task_Instance_State__hookEnv;
typedef __ARRAY1_ti_sysbios_knl_Task_Instance_State__hookEnv __TA_ti_sysbios_knl_Task_Instance_State__hookEnv;

/* Module_State */
typedef ti_sysbios_knl_Queue_Instance_State __T1_ti_sysbios_knl_Task_Module_State__readyQ;
typedef ti_sysbios_knl_Queue_Instance_State *__ARRAY1_ti_sysbios_knl_Task_Module_State__readyQ;
typedef __ARRAY1_ti_sysbios_knl_Task_Module_State__readyQ __TA_ti_sysbios_knl_Task_Module_State__readyQ;
typedef ti_sysbios_knl_Task_Handle __T1_ti_sysbios_knl_Task_Module_State__constructedTasks;
typedef ti_sysbios_knl_Task_Handle *__ARRAY1_ti_sysbios_knl_Task_Module_State__constructedTasks;
typedef __ARRAY1_ti_sysbios_knl_Task_Module_State__constructedTasks __TA_ti_sysbios_knl_Task_Module_State__constructedTasks;


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sysbios_knl_Task_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sysbios_knl_Task_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16* CT__ti_sysbios_knl_Task_Module__diagsMask;
__extern __FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sysbios_knl_Task_Module__gateObj;
__extern __FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sysbios_knl_Task_Module__gatePrms;
__extern __FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sysbios_knl_Task_Module__id;
__extern __FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sysbios_knl_Task_Module__loggerDefined;
__extern __FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sysbios_knl_Task_Module__loggerObj;
__extern __FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sysbios_knl_Task_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sysbios_knl_Task_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sysbios_knl_Task_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sysbios_knl_Task_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sysbios_knl_Task_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sysbios_knl_Task_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sysbios_knl_Task_Object__count;
__extern __FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sysbios_knl_Task_Object__heap;
__extern __FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sysbios_knl_Task_Object__sizeof;
__extern __FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sysbios_knl_Task_Object__table;
__extern __FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C;

/* LM_switch */
#define ti_sysbios_knl_Task_LM_switch (ti_sysbios_knl_Task_LM_switch__C)
typedef xdc_runtime_Log_Event CT__ti_sysbios_knl_Task_LM_switch;
__extern __FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C;

/* LM_sleep */
#define ti_sysbios_knl_Task_LM_sleep (ti_sysbios_knl_Task_LM_sleep__C)
typedef xdc_runtime_Log_Event CT__ti_sysbios_knl_Task_LM_sleep;
__extern __FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C;

/* LD_ready */
#define ti_sysbios_knl_Task_LD_ready (ti_sysbios_knl_Task_LD_ready__C)
typedef xdc_runtime_Log_Event CT__ti_sysbios_knl_Task_LD_ready;
__extern __FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C;

/* LD_block */
#define ti_sysbios_knl_Task_LD_block (ti_sysbios_knl_Task_LD_block__C)
typedef xdc_runtime_Log_Event CT__ti_sysbios_knl_Task_LD_block;
__extern __FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C;

/* LM_yield */
#define ti_sysbios_knl_Task_LM_yield (ti_sysbios_knl_Task_LM_yield__C)
typedef xdc_runtime_Log_Event CT__ti_sysbios_knl_Task_LM_yield;
__extern __FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C;

/* LM_setPri */
#define ti_sysbios_knl_Task_LM_setPri (ti_sysbios_knl_Task_LM_setPri__C)
typedef xdc_runtime_Log_Event CT__ti_sysbios_knl_Task_LM_setPri;
__extern __FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C;

/* LD_exit */
#define ti_sysbios_knl_Task_LD_exit (ti_sysbios_knl_Task_LD_exit__C)
typedef xdc_runtime_Log_Event CT__ti_sysbios_knl_Task_LD_exit;
__extern __FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C;

/* E_stackOverflow */
#define ti_sysbios_knl_Task_E_stackOverflow (ti_sysbios_knl_Task_E_stackOverflow__C)
typedef xdc_runtime_Error_Id CT__ti_sysbios_knl_Task_E_stackOverflow;
__extern __FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C;

/* E_spOutOfBounds */
#define ti_sysbios_knl_Task_E_spOutOfBounds (ti_sysbios_knl_Task_E_spOutOfBounds__C)
typedef xdc_runtime_Error_Id CT__ti_sysbios_knl_Task_E_spOutOfBounds;
__extern __FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C;

/* A_badThreadType */
#define ti_sysbios_knl_Task_A_badThreadType (ti_sysbios_knl_Task_A_badThreadType__C)
typedef xdc_runtime_Assert_Id CT__ti_sysbios_knl_Task_A_badThreadType;
__extern __FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C;

/* A_badTaskState */
#define ti_sysbios_knl_Task_A_badTaskState (ti_sysbios_knl_Task_A_badTaskState__C)
typedef xdc_runtime_Assert_Id CT__ti_sysbios_knl_Task_A_badTaskState;
__extern __FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C;

/* A_noPendElem */
#define ti_sysbios_knl_Task_A_noPendElem (ti_sysbios_knl_Task_A_noPendElem__C)
typedef xdc_runtime_Assert_Id CT__ti_sysbios_knl_Task_A_noPendElem;
__extern __FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C;

/* A_taskDisabled */
#define ti_sysbios_knl_Task_A_taskDisabled (ti_sysbios_knl_Task_A_taskDisabled__C)
typedef xdc_runtime_Assert_Id CT__ti_sysbios_knl_Task_A_taskDisabled;
__extern __FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C;

/* A_badPriority */
#define ti_sysbios_knl_Task_A_badPriority (ti_sysbios_knl_Task_A_badPriority__C)
typedef xdc_runtime_Assert_Id CT__ti_sysbios_knl_Task_A_badPriority;
__extern __FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C;

/* A_badTimeout */
#define ti_sysbios_knl_Task_A_badTimeout (ti_sysbios_knl_Task_A_badTimeout__C)
typedef xdc_runtime_Assert_Id CT__ti_sysbios_knl_Task_A_badTimeout;
__extern __FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C;

/* numPriorities */
#ifdef ti_sysbios_knl_Task_numPriorities__D
#define ti_sysbios_knl_Task_numPriorities (ti_sysbios_knl_Task_numPriorities__D)
#else
#define ti_sysbios_knl_Task_numPriorities (ti_sysbios_knl_Task_numPriorities__C)
typedef xdc_UInt CT__ti_sysbios_knl_Task_numPriorities;
__extern __FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C;
#endif

/* defaultStackSize */
#ifdef ti_sysbios_knl_Task_defaultStackSize__D
#define ti_sysbios_knl_Task_defaultStackSize (ti_sysbios_knl_Task_defaultStackSize__D)
#else
#define ti_sysbios_knl_Task_defaultStackSize (ti_sysbios_knl_Task_defaultStackSize__C)
typedef xdc_SizeT CT__ti_sysbios_knl_Task_defaultStackSize;
__extern __FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C;
#endif

/* defaultStackHeap */
#define ti_sysbios_knl_Task_defaultStackHeap (ti_sysbios_knl_Task_defaultStackHeap__C)
typedef xdc_runtime_IHeap_Handle CT__ti_sysbios_knl_Task_defaultStackHeap;
__extern __FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C;

/* allBlockedFunc */
#define ti_sysbios_knl_Task_allBlockedFunc (ti_sysbios_knl_Task_allBlockedFunc__C)
typedef ti_sysbios_knl_Task_AllBlockedFuncPtr CT__ti_sysbios_knl_Task_allBlockedFunc;
__extern __FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C;

/* initStackFlag */
#ifdef ti_sysbios_knl_Task_initStackFlag__D
#define ti_sysbios_knl_Task_initStackFlag (ti_sysbios_knl_Task_initStackFlag__D)
#else
#define ti_sysbios_knl_Task_initStackFlag (ti_sysbios_knl_Task_initStackFlag__C)
typedef xdc_Bool CT__ti_sysbios_knl_Task_initStackFlag;
__extern __FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C;
#endif

/* deleteTerminatedTasks */
#ifdef ti_sysbios_knl_Task_deleteTerminatedTasks__D
#define ti_sysbios_knl_Task_deleteTerminatedTasks (ti_sysbios_knl_Task_deleteTerminatedTasks__D)
#else
#define ti_sysbios_knl_Task_deleteTerminatedTasks (ti_sysbios_knl_Task_deleteTerminatedTasks__C)
typedef xdc_Bool CT__ti_sysbios_knl_Task_deleteTerminatedTasks;
__extern __FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C;
#endif

/* hooks */
#define ti_sysbios_knl_Task_hooks (ti_sysbios_knl_Task_hooks__C)
typedef ti_sysbios_knl_Task_HookSet __T1_ti_sysbios_knl_Task_hooks;
typedef struct { int length; ti_sysbios_knl_Task_HookSet *elem; } __ARRAY1_ti_sysbios_knl_Task_hooks;
typedef __ARRAY1_ti_sysbios_knl_Task_hooks __TA_ti_sysbios_knl_Task_hooks;
typedef __TA_ti_sysbios_knl_Task_hooks CT__ti_sysbios_knl_Task_hooks;
__extern __FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C;

/* numConstructedTasks */
#ifdef ti_sysbios_knl_Task_numConstructedTasks__D
#define ti_sysbios_knl_Task_numConstructedTasks (ti_sysbios_knl_Task_numConstructedTasks__D)
#else
#define ti_sysbios_knl_Task_numConstructedTasks (ti_sysbios_knl_Task_numConstructedTasks__C)
typedef xdc_UInt CT__ti_sysbios_knl_Task_numConstructedTasks;
__extern __FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C;
#endif


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sysbios_knl_Task_Params {
    size_t __size;
    const void* __self;
    void* __fxns;
    xdc_runtime_IInstance_Params* instance;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Int priority;
    xdc_Ptr stack;
    xdc_SizeT stackSize;
    xdc_runtime_IHeap_Handle stackHeap;
    xdc_Ptr env;
    xdc_Bool vitalTaskFlag;
    xdc_runtime_IInstance_Params __iprms;
};

/* Struct */
struct ti_sysbios_knl_Task_Struct {
    ti_sysbios_knl_Queue_Elem __f0;
    volatile xdc_Int __f1;
    xdc_UInt __f2;
    xdc_Ptr __f3;
    ti_sysbios_knl_Task_Mode __f4;
    ti_sysbios_knl_Task_PendElem* __f5;
    xdc_SizeT __f6;
    __TA_ti_sysbios_knl_Task_Instance_State__stack __f7;
    xdc_runtime_IHeap_Handle __f8;
    ti_sysbios_knl_Task_FuncPtr __f9;
    xdc_UArg __f10;
    xdc_UArg __f11;
    xdc_Ptr __f12;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv __f13;
    xdc_Bool __f14;
    ti_sysbios_knl_Queue_Handle __f15;
    xdc_runtime_Types_CordAddr __name;
};


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sysbios_knl_Task_Module_startup ti_sysbios_knl_Task_Module_startup__E
xdc__CODESECT(ti_sysbios_knl_Task_Module_startup__E, "ti_sysbios_knl_Task_Module_startup")
__extern xdc_Int ti_sysbios_knl_Task_Module_startup__E( xdc_Int state );
xdc__CODESECT(ti_sysbios_knl_Task_Module_startup__F, "ti_sysbios_knl_Task_Module_startup")
__extern xdc_Int ti_sysbios_knl_Task_Module_startup__F( xdc_Int state );
xdc__CODESECT(ti_sysbios_knl_Task_Module_startup__R, "ti_sysbios_knl_Task_Module_startup")
__extern xdc_Int ti_sysbios_knl_Task_Module_startup__R( xdc_Int state );

/* Instance_init__F */
xdc__CODESECT(ti_sysbios_knl_Task_Instance_init__F, "ti_sysbios_knl_Task_Instance_init")
__extern int ti_sysbios_knl_Task_Instance_init__F( ti_sysbios_knl_Task_Object*, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params*, xdc_runtime_Error_Block* );

/* Instance_finalize__F */
xdc__CODESECT(ti_sysbios_knl_Task_Instance_finalize__F, "ti_sysbios_knl_Task_Instance_finalize")
__extern void ti_sysbios_knl_Task_Instance_finalize__F( ti_sysbios_knl_Task_Object* , int );

/* Instance_init__R */
xdc__CODESECT(ti_sysbios_knl_Task_Instance_init__R, "ti_sysbios_knl_Task_Instance_init")
__extern int ti_sysbios_knl_Task_Instance_init__R( ti_sysbios_knl_Task_Object*, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params*, xdc_runtime_Error_Block* );

/* Instance_finalize__R */
xdc__CODESECT(ti_sysbios_knl_Task_Instance_finalize__R, "ti_sysbios_knl_Task_Instance_finalize")
__extern void ti_sysbios_knl_Task_Instance_finalize__R( ti_sysbios_knl_Task_Object* , int );

/* Handle__label__S */
xdc__CODESECT(ti_sysbios_knl_Task_Handle__label__S, "ti_sysbios_knl_Task_Handle__label")
__extern xdc_runtime_Types_Label* ti_sysbios_knl_Task_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab );

/* Module__startupDone__S */
xdc__CODESECT(ti_sysbios_knl_Task_Module__startupDone__S, "ti_sysbios_knl_Task_Module__startupDone")
__extern xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void );

/* Object__create__S */
xdc__CODESECT(ti_sysbios_knl_Task_Object__create__S, "ti_sysbios_knl_Task_Object__create")
__extern xdc_Ptr ti_sysbios_knl_Task_Object__create__S( xdc_Ptr __oa, xdc_SizeT __osz, xdc_Ptr __aa, const xdc_UChar* __pa, xdc_SizeT __psz, xdc_runtime_Error_Block* __eb );

/* Object__delete__S */
xdc__CODESECT(ti_sysbios_knl_Task_Object__delete__S, "ti_sysbios_knl_Task_Object__delete")
__extern xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp );

/* Object__destruct__S */
xdc__CODESECT(ti_sysbios_knl_Task_Object__destruct__S, "ti_sysbios_knl_Task_Object__destruct")
__extern xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr objp );

/* Object__get__S */
xdc__CODESECT(ti_sysbios_knl_Task_Object__get__S, "ti_sysbios_knl_Task_Object__get")
__extern xdc_Ptr ti_sysbios_knl_Task_Object__get__S( xdc_Ptr oarr, xdc_Int i );

/* Object__first__S */
xdc__CODESECT(ti_sysbios_knl_Task_Object__first__S, "ti_sysbios_knl_Task_Object__first")
__extern xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void );

/* Object__next__S */
xdc__CODESECT(ti_sysbios_knl_Task_Object__next__S, "ti_sysbios_knl_Task_Object__next")
__extern xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj );

/* Params__init__S */
xdc__CODESECT(ti_sysbios_knl_Task_Params__init__S, "ti_sysbios_knl_Task_Params__init")
__extern xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz );

/* startup__E */
#define ti_sysbios_knl_Task_startup ti_sysbios_knl_Task_startup__E
xdc__CODESECT(ti_sysbios_knl_Task_startup__E, "ti_sysbios_knl_Task_startup")
__extern xdc_Void ti_sysbios_knl_Task_startup__E( void );
xdc__CODESECT(ti_sysbios_knl_Task_startup__F, "ti_sysbios_knl_Task_startup")
__extern xdc_Void ti_sysbios_knl_Task_startup__F( void );
__extern xdc_Void ti_sysbios_knl_Task_startup__R( void );

/* disable__E */
#define ti_sysbios_knl_Task_disable ti_sysbios_knl_Task_disable__E
xdc__CODESECT(ti_sysbios_knl_Task_disable__E, "ti_sysbios_knl_Task_disable")
__extern xdc_UInt ti_sysbios_knl_Task_disable__E( void );
xdc__CODESECT(ti_sysbios_knl_Task_disable__F, "ti_sysbios_knl_Task_disable")
__extern xdc_UInt ti_sysbios_knl_Task_disable__F( void );
__extern xdc_UInt ti_sysbios_knl_Task_disable__R( void );

/* enable__E */
#define ti_sysbios_knl_Task_enable ti_sysbios_knl_Task_enable__E
xdc__CODESECT(ti_sysbios_knl_Task_enable__E, "ti_sysbios_knl_Task_enable")
__extern xdc_Void ti_sysbios_knl_Task_enable__E( void );
xdc__CODESECT(ti_sysbios_knl_Task_enable__F, "ti_sysbios_knl_Task_enable")
__extern xdc_Void ti_sysbios_knl_Task_enable__F( void );
__extern xdc_Void ti_sysbios_knl_Task_enable__R( void );

/* restore__E */
#define ti_sysbios_knl_Task_restore ti_sysbios_knl_Task_restore__E
xdc__CODESECT(ti_sysbios_knl_Task_restore__E, "ti_sysbios_knl_Task_restore")
__extern xdc_Void ti_sysbios_knl_Task_restore__E( xdc_UInt key );
xdc__CODESECT(ti_sysbios_knl_Task_restore__F, "ti_sysbios_knl_Task_restore")
__extern xdc_Void ti_sysbios_knl_Task_restore__F( xdc_UInt key );
__extern xdc_Void ti_sysbios_knl_Task_restore__R( xdc_UInt key );

/* restoreHwi__E */
#define ti_sysbios_knl_Task_restoreHwi ti_sysbios_knl_Task_restoreHwi__E
xdc__CODESECT(ti_sysbios_knl_Task_restoreHwi__E, "ti_sysbios_knl_Task_restoreHwi")
__extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E( xdc_UInt key );
xdc__CODESECT(ti_sysbios_knl_Task_restoreHwi__F, "ti_sysbios_knl_Task_restoreHwi")
__extern xdc_Void ti_sysbios_knl_Task_restoreHwi__F( xdc_UInt key );
__extern xdc_Void ti_sysbios_knl_Task_restoreHwi__R( xdc_UInt key );

/* self__E */
#define ti_sysbios_knl_Task_self ti_sysbios_knl_Task_self__E
xdc__CODESECT(ti_sysbios_knl_Task_self__E, "ti_sysbios_knl_Task_self")
__extern ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_self__E( void );
xdc__CODESECT(ti_sysbios_knl_Task_self__F, "ti_sysbios_knl_Task_self")
__extern ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_self__F( void );
__extern ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_self__R( void );

/* checkStacks__E */
#define ti_sysbios_knl_Task_checkStacks ti_sysbios_knl_Task_checkStacks__E
xdc__CODESECT(ti_sysbios_knl_Task_checkStacks__E, "ti_sysbios_knl_Task_checkStacks")
__extern xdc_Void ti_sysbios_knl_Task_checkStacks__E( ti_sysbios_knl_Task_Handle oldTask, ti_sysbios_knl_Task_Handle newTask );
xdc__CODESECT(ti_sysbios_knl_Task_checkStacks__F, "ti_sysbios_knl_Task_checkStacks")
__extern xdc_Void ti_sysbios_knl_Task_checkStacks__F( ti_sysbios_knl_Task_Handle oldTask, ti_sysbios_knl_Task_Handle newTask );
__extern xdc_Void ti_sysbios_knl_Task_checkStacks__R( ti_sysbios_knl_Task_Handle oldTask, ti_sysbios_knl_Task_Handle newTask );

/* exit__E */
#define ti_sysbios_knl_Task_exit ti_sysbios_knl_Task_exit__E
xdc__CODESECT(ti_sysbios_knl_Task_exit__E, "ti_sysbios_knl_Task_exit")
__extern xdc_Void ti_sysbios_knl_Task_exit__E( void );
xdc__CODESECT(ti_sysbios_knl_Task_exit__F, "ti_sysbios_knl_Task_exit")
__extern xdc_Void ti_sysbios_knl_Task_exit__F( void );
__extern xdc_Void ti_sysbios_knl_Task_exit__R( void );

/* sleep__E */
#define ti_sysbios_knl_Task_sleep ti_sysbios_knl_Task_sleep__E
xdc__CODESECT(ti_sysbios_knl_Task_sleep__E, "ti_sysbios_knl_Task_sleep")
__extern xdc_Void ti_sysbios_knl_Task_sleep__E( xdc_UInt nticks );
xdc__CODESECT(ti_sysbios_knl_Task_sleep__F, "ti_sysbios_knl_Task_sleep")
__extern xdc_Void ti_sysbios_knl_Task_sleep__F( xdc_UInt nticks );
__extern xdc_Void ti_sysbios_knl_Task_sleep__R( xdc_UInt nticks );

/* yield__E */
#define ti_sysbios_knl_Task_yield ti_sysbios_knl_Task_yield__E
xdc__CODESECT(ti_sysbios_knl_Task_yield__E, "ti_sysbios_knl_Task_yield")
__extern xdc_Void ti_sysbios_knl_Task_yield__E( void );
xdc__CODESECT(ti_sysbios_knl_Task_yield__F, "ti_sysbios_knl_Task_yield")
__extern xdc_Void ti_sysbios_knl_Task_yield__F( void );
__extern xdc_Void ti_sysbios_knl_Task_yield__R( void );

/* getIdleTask__E */
#define ti_sysbios_knl_Task_getIdleTask ti_sysbios_knl_Task_getIdleTask__E
xdc__CODESECT(ti_sysbios_knl_Task_getIdleTask__E, "ti_sysbios_knl_Task_getIdleTask")
__extern ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_getIdleTask__E( void );
xdc__CODESECT(ti_sysbios_knl_Task_getIdleTask__F, "ti_sysbios_knl_Task_getIdleTask")
__extern ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_getIdleTask__F( void );
__extern ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_getIdleTask__R( void );

/* getArg0__E */
#define ti_sysbios_knl_Task_getArg0 ti_sysbios_knl_Task_getArg0__E
xdc__CODESECT(ti_sysbios_knl_Task_getArg0__E, "ti_sysbios_knl_Task_getArg0")
__extern xdc_UArg ti_sysbios_knl_Task_getArg0__E( ti_sysbios_knl_Task_Handle __inst );
xdc__CODESECT(ti_sysbios_knl_Task_getArg0__F, "ti_sysbios_knl_Task_getArg0")
__extern xdc_UArg ti_sysbios_knl_Task_getArg0__F( ti_sysbios_knl_Task_Object* __inst );
__extern xdc_UArg ti_sysbios_knl_Task_getArg0__R( ti_sysbios_knl_Task_Handle __inst );

/* getArg1__E */
#define ti_sysbios_knl_Task_getArg1 ti_sysbios_knl_Task_getArg1__E
xdc__CODESECT(ti_sysbios_knl_Task_getArg1__E, "ti_sysbios_knl_Task_getArg1")
__extern xdc_UArg ti_sysbios_knl_Task_getArg1__E( ti_sysbios_knl_Task_Handle __inst );
xdc__CODESECT(ti_sysbios_knl_Task_getArg1__F, "ti_sysbios_knl_Task_getArg1")
__extern xdc_UArg ti_sysbios_knl_Task_getArg1__F( ti_sysbios_knl_Task_Object* __inst );
__extern xdc_UArg ti_sysbios_knl_Task_getArg1__R( ti_sysbios_knl_Task_Handle __inst );

/* getEnv__E */
#define ti_sysbios_knl_Task_getEnv ti_sysbios_knl_Task_getEnv__E
xdc__CODESECT(ti_sysbios_knl_Task_getEnv__E, "ti_sysbios_knl_Task_getEnv")
__extern xdc_Ptr ti_sysbios_knl_Task_getEnv__E( ti_sysbios_knl_Task_Handle __inst );
xdc__CODESECT(ti_sysbios_knl_Task_getEnv__F, "ti_sysbios_knl_Task_getEnv")
__extern xdc_Ptr ti_sysbios_knl_Task_getEnv__F( ti_sysbios_knl_Task_Object* __inst );
__extern xdc_Ptr ti_sysbios_knl_Task_getEnv__R( ti_sysbios_knl_Task_Handle __inst );

/* getHookContext__E */
#define ti_sysbios_knl_Task_getHookContext ti_sysbios_knl_Task_getHookContext__E
xdc__CODESECT(ti_sysbios_knl_Task_getHookContext__E, "ti_sysbios_knl_Task_getHookContext")
__extern xdc_Ptr ti_sysbios_knl_Task_getHookContext__E( ti_sysbios_knl_Task_Handle __inst, xdc_Int id );
xdc__CODESECT(ti_sysbios_knl_Task_getHookContext__F, "ti_sysbios_knl_Task_getHookContext")
__extern xdc_Ptr ti_sysbios_knl_Task_getHookContext__F( ti_sysbios_knl_Task_Object* __inst, xdc_Int id );
__extern xdc_Ptr ti_sysbios_knl_Task_getHookContext__R( ti_sysbios_knl_Task_Handle __inst, xdc_Int id );

/* getPri__E */
#define ti_sysbios_knl_Task_getPri ti_sysbios_knl_Task_getPri__E
xdc__CODESECT(ti_sysbios_knl_Task_getPri__E, "ti_sysbios_knl_Task_getPri")
__extern xdc_Int ti_sysbios_knl_Task_getPri__E( ti_sysbios_knl_Task_Handle __inst );
xdc__CODESECT(ti_sysbios_knl_Task_getPri__F, "ti_sysbios_knl_Task_getPri")
__extern xdc_Int ti_sysbios_knl_Task_getPri__F( ti_sysbios_knl_Task_Object* __inst );
__extern xdc_Int ti_sysbios_knl_Task_getPri__R( ti_sysbios_knl_Task_Handle __inst );

/* setArg0__E */
#define ti_sysbios_knl_Task_setArg0 ti_sysbios_knl_Task_setArg0__E
xdc__CODESECT(ti_sysbios_knl_Task_setArg0__E, "ti_sysbios_knl_Task_setArg0")
__extern xdc_Void ti_sysbios_knl_Task_setArg0__E( ti_sysbios_knl_Task_Handle __inst, xdc_UArg arg );
xdc__CODESECT(ti_sysbios_knl_Task_setArg0__F, "ti_sysbios_knl_Task_setArg0")
__extern xdc_Void ti_sysbios_knl_Task_setArg0__F( ti_sysbios_knl_Task_Object* __inst, xdc_UArg arg );
__extern xdc_Void ti_sysbios_knl_Task_setArg0__R( ti_sysbios_knl_Task_Handle __inst, xdc_UArg arg );

/* setArg1__E */
#define ti_sysbios_knl_Task_setArg1 ti_sysbios_knl_Task_setArg1__E
xdc__CODESECT(ti_sysbios_knl_Task_setArg1__E, "ti_sysbios_knl_Task_setArg1")
__extern xdc_Void ti_sysbios_knl_Task_setArg1__E( ti_sysbios_knl_Task_Handle __inst, xdc_UArg arg );
xdc__CODESECT(ti_sysbios_knl_Task_setArg1__F, "ti_sysbios_knl_Task_setArg1")
__extern xdc_Void ti_sysbios_knl_Task_setArg1__F( ti_sysbios_knl_Task_Object* __inst, xdc_UArg arg );
__extern xdc_Void ti_sysbios_knl_Task_setArg1__R( ti_sysbios_knl_Task_Handle __inst, xdc_UArg arg );

/* setEnv__E */
#define ti_sysbios_knl_Task_setEnv ti_sysbios_knl_Task_setEnv__E
xdc__CODESECT(ti_sysbios_knl_Task_setEnv__E, "ti_sysbios_knl_Task_setEnv")
__extern xdc_Void ti_sysbios_knl_Task_setEnv__E( ti_sysbios_knl_Task_Handle __inst, xdc_Ptr env );
xdc__CODESECT(ti_sysbios_knl_Task_setEnv__F, "ti_sysbios_knl_Task_setEnv")
__extern xdc_Void ti_sysbios_knl_Task_setEnv__F( ti_sysbios_knl_Task_Object* __inst, xdc_Ptr env );
__extern xdc_Void ti_sysbios_knl_Task_setEnv__R( ti_sysbios_knl_Task_Handle __inst, xdc_Ptr env );

/* setHookContext__E */
#define ti_sysbios_knl_Task_setHookContext ti_sysbios_knl_Task_setHookContext__E
xdc__CODESECT(ti_sysbios_knl_Task_setHookContext__E, "ti_sysbios_knl_Task_setHookContext")
__extern xdc_Void ti_sysbios_knl_Task_setHookContext__E( ti_sysbios_knl_Task_Handle __inst, xdc_Int id, xdc_Ptr hookContext );
xdc__CODESECT(ti_sysbios_knl_Task_setHookContext__F, "ti_sysbios_knl_Task_setHookContext")
__extern xdc_Void ti_sysbios_knl_Task_setHookContext__F( ti_sysbios_knl_Task_Object* __inst, xdc_Int id, xdc_Ptr hookContext );
__extern xdc_Void ti_sysbios_knl_Task_setHookContext__R( ti_sysbios_knl_Task_Handle __inst, xdc_Int id, xdc_Ptr hookContext );

/* setPri__E */
#define ti_sysbios_knl_Task_setPri ti_sysbios_knl_Task_setPri__E
xdc__CODESECT(ti_sysbios_knl_Task_setPri__E, "ti_sysbios_knl_Task_setPri")
__extern xdc_UInt ti_sysbios_knl_Task_setPri__E( ti_sysbios_knl_Task_Handle __inst, xdc_Int newpri );
xdc__CODESECT(ti_sysbios_knl_Task_setPri__F, "ti_sysbios_knl_Task_setPri")
__extern xdc_UInt ti_sysbios_knl_Task_setPri__F( ti_sysbios_knl_Task_Object* __inst, xdc_Int newpri );
__extern xdc_UInt ti_sysbios_knl_Task_setPri__R( ti_sysbios_knl_Task_Handle __inst, xdc_Int newpri );

/* stat__E */
#define ti_sysbios_knl_Task_stat ti_sysbios_knl_Task_stat__E
xdc__CODESECT(ti_sysbios_knl_Task_stat__E, "ti_sysbios_knl_Task_stat")
__extern xdc_Void ti_sysbios_knl_Task_stat__E( ti_sysbios_knl_Task_Handle __inst, ti_sysbios_knl_Task_Stat* statbuf );
xdc__CODESECT(ti_sysbios_knl_Task_stat__F, "ti_sysbios_knl_Task_stat")
__extern xdc_Void ti_sysbios_knl_Task_stat__F( ti_sysbios_knl_Task_Object* __inst, ti_sysbios_knl_Task_Stat* statbuf );
__extern xdc_Void ti_sysbios_knl_Task_stat__R( ti_sysbios_knl_Task_Handle __inst, ti_sysbios_knl_Task_Stat* statbuf );

/* getMode__E */
#define ti_sysbios_knl_Task_getMode ti_sysbios_knl_Task_getMode__E
xdc__CODESECT(ti_sysbios_knl_Task_getMode__E, "ti_sysbios_knl_Task_getMode")
__extern ti_sysbios_knl_Task_Mode ti_sysbios_knl_Task_getMode__E( ti_sysbios_knl_Task_Handle __inst );
xdc__CODESECT(ti_sysbios_knl_Task_getMode__F, "ti_sysbios_knl_Task_getMode")
__extern ti_sysbios_knl_Task_Mode ti_sysbios_knl_Task_getMode__F( ti_sysbios_knl_Task_Object* __inst );
__extern ti_sysbios_knl_Task_Mode ti_sysbios_knl_Task_getMode__R( ti_sysbios_knl_Task_Handle __inst );

/* block__E */
#define ti_sysbios_knl_Task_block ti_sysbios_knl_Task_block__E
xdc__CODESECT(ti_sysbios_knl_Task_block__E, "ti_sysbios_knl_Task_block")
__extern xdc_Void ti_sysbios_knl_Task_block__E( ti_sysbios_knl_Task_Handle __inst );
xdc__CODESECT(ti_sysbios_knl_Task_block__F, "ti_sysbios_knl_Task_block")
__extern xdc_Void ti_sysbios_knl_Task_block__F( ti_sysbios_knl_Task_Object* __inst );
__extern xdc_Void ti_sysbios_knl_Task_block__R( ti_sysbios_knl_Task_Handle __inst );

/* unblock__E */
#define ti_sysbios_knl_Task_unblock ti_sysbios_knl_Task_unblock__E
xdc__CODESECT(ti_sysbios_knl_Task_unblock__E, "ti_sysbios_knl_Task_unblock")
__extern xdc_Void ti_sysbios_knl_Task_unblock__E( ti_sysbios_knl_Task_Handle __inst );
xdc__CODESECT(ti_sysbios_knl_Task_unblock__F, "ti_sysbios_knl_Task_unblock")
__extern xdc_Void ti_sysbios_knl_Task_unblock__F( ti_sysbios_knl_Task_Object* __inst );
__extern xdc_Void ti_sysbios_knl_Task_unblock__R( ti_sysbios_knl_Task_Handle __inst );

/* blockI__E */
#define ti_sysbios_knl_Task_blockI ti_sysbios_knl_Task_blockI__E
xdc__CODESECT(ti_sysbios_knl_Task_blockI__E, "ti_sysbios_knl_Task_blockI")
__extern xdc_Void ti_sysbios_knl_Task_blockI__E( ti_sysbios_knl_Task_Handle __inst );
xdc__CODESECT(ti_sysbios_knl_Task_blockI__F, "ti_sysbios_knl_Task_blockI")
__extern xdc_Void ti_sysbios_knl_Task_blockI__F( ti_sysbios_knl_Task_Object* __inst );
__extern xdc_Void ti_sysbios_knl_Task_blockI__R( ti_sysbios_knl_Task_Handle __inst );

/* unblockI__E */
#define ti_sysbios_knl_Task_unblockI ti_sysbios_knl_Task_unblockI__E
xdc__CODESECT(ti_sysbios_knl_Task_unblockI__E, "ti_sysbios_knl_Task_unblockI")
__extern xdc_Void ti_sysbios_knl_Task_unblockI__E( ti_sysbios_knl_Task_Handle __inst, xdc_UInt hwiKey );
xdc__CODESECT(ti_sysbios_knl_Task_unblockI__F, "ti_sysbios_knl_Task_unblockI")
__extern xdc_Void ti_sysbios_knl_Task_unblockI__F( ti_sysbios_knl_Task_Object* __inst, xdc_UInt hwiKey );
__extern xdc_Void ti_sysbios_knl_Task_unblockI__R( ti_sysbios_knl_Task_Handle __inst, xdc_UInt hwiKey );

/* schedule__I */
#define ti_sysbios_knl_Task_schedule ti_sysbios_knl_Task_schedule__I
xdc__CODESECT(ti_sysbios_knl_Task_schedule__I, "ti_sysbios_knl_Task_schedule")
__extern xdc_Void ti_sysbios_knl_Task_schedule__I( void );

/* enter__I */
#define ti_sysbios_knl_Task_enter ti_sysbios_knl_Task_enter__I
xdc__CODESECT(ti_sysbios_knl_Task_enter__I, "ti_sysbios_knl_Task_enter")
__extern xdc_Void ti_sysbios_knl_Task_enter__I( void );

/* sleepTimeout__I */
#define ti_sysbios_knl_Task_sleepTimeout ti_sysbios_knl_Task_sleepTimeout__I
xdc__CODESECT(ti_sysbios_knl_Task_sleepTimeout__I, "ti_sysbios_knl_Task_sleepTimeout")
__extern xdc_Void ti_sysbios_knl_Task_sleepTimeout__I( xdc_UArg arg );

/* postInit__I */
#define ti_sysbios_knl_Task_postInit ti_sysbios_knl_Task_postInit__I
xdc__CODESECT(ti_sysbios_knl_Task_postInit__I, "ti_sysbios_knl_Task_postInit")
__extern xdc_Int ti_sysbios_knl_Task_postInit__I( ti_sysbios_knl_Task_Object* swi, xdc_runtime_Error_Block* eb );

/* allBlockedFunction__I */
#define ti_sysbios_knl_Task_allBlockedFunction ti_sysbios_knl_Task_allBlockedFunction__I
xdc__CODESECT(ti_sysbios_knl_Task_allBlockedFunction__I, "ti_sysbios_knl_Task_allBlockedFunction")
__extern xdc_Void ti_sysbios_knl_Task_allBlockedFunction__I( void );

/* deleteTerminatedTasksFunc__I */
#define ti_sysbios_knl_Task_deleteTerminatedTasksFunc ti_sysbios_knl_Task_deleteTerminatedTasksFunc__I
xdc__CODESECT(ti_sysbios_knl_Task_deleteTerminatedTasksFunc__I, "ti_sysbios_knl_Task_deleteTerminatedTasksFunc")
__extern xdc_Void ti_sysbios_knl_Task_deleteTerminatedTasksFunc__I( void );


/*
 * ======== FUNCTION SELECTORS ========
 */

/* getArg0_{FxnT,fxnP} */
typedef xdc_UArg (*ti_sysbios_knl_Task_getArg0_FxnT)(void*);
static inline ti_sysbios_knl_Task_getArg0_FxnT ti_sysbios_knl_Task_getArg0_fxnP( void )
{
    return (ti_sysbios_knl_Task_getArg0_FxnT)ti_sysbios_knl_Task_getArg0; 
}

/* getArg1_{FxnT,fxnP} */
typedef xdc_UArg (*ti_sysbios_knl_Task_getArg1_FxnT)(void*);
static inline ti_sysbios_knl_Task_getArg1_FxnT ti_sysbios_knl_Task_getArg1_fxnP( void )
{
    return (ti_sysbios_knl_Task_getArg1_FxnT)ti_sysbios_knl_Task_getArg1; 
}

/* getEnv_{FxnT,fxnP} */
typedef xdc_Ptr (*ti_sysbios_knl_Task_getEnv_FxnT)(void*);
static inline ti_sysbios_knl_Task_getEnv_FxnT ti_sysbios_knl_Task_getEnv_fxnP( void )
{
    return (ti_sysbios_knl_Task_getEnv_FxnT)ti_sysbios_knl_Task_getEnv; 
}

/* getHookContext_{FxnT,fxnP} */
typedef xdc_Ptr (*ti_sysbios_knl_Task_getHookContext_FxnT)(void*, xdc_Int);
static inline ti_sysbios_knl_Task_getHookContext_FxnT ti_sysbios_knl_Task_getHookContext_fxnP( void )
{
    return (ti_sysbios_knl_Task_getHookContext_FxnT)ti_sysbios_knl_Task_getHookContext; 
}

/* getPri_{FxnT,fxnP} */
typedef xdc_Int (*ti_sysbios_knl_Task_getPri_FxnT)(void*);
static inline ti_sysbios_knl_Task_getPri_FxnT ti_sysbios_knl_Task_getPri_fxnP( void )
{
    return (ti_sysbios_knl_Task_getPri_FxnT)ti_sysbios_knl_Task_getPri; 
}

/* setArg0_{FxnT,fxnP} */
typedef xdc_Void (*ti_sysbios_knl_Task_setArg0_FxnT)(void*, xdc_UArg);
static inline ti_sysbios_knl_Task_setArg0_FxnT ti_sysbios_knl_Task_setArg0_fxnP( void )
{
    return (ti_sysbios_knl_Task_setArg0_FxnT)ti_sysbios_knl_Task_setArg0; 
}

/* setArg1_{FxnT,fxnP} */
typedef xdc_Void (*ti_sysbios_knl_Task_setArg1_FxnT)(void*, xdc_UArg);
static inline ti_sysbios_knl_Task_setArg1_FxnT ti_sysbios_knl_Task_setArg1_fxnP( void )
{
    return (ti_sysbios_knl_Task_setArg1_FxnT)ti_sysbios_knl_Task_setArg1; 
}

/* setEnv_{FxnT,fxnP} */
typedef xdc_Void (*ti_sysbios_knl_Task_setEnv_FxnT)(void*, xdc_Ptr);
static inline ti_sysbios_knl_Task_setEnv_FxnT ti_sysbios_knl_Task_setEnv_fxnP( void )
{
    return (ti_sysbios_knl_Task_setEnv_FxnT)ti_sysbios_knl_Task_setEnv; 
}

/* setHookContext_{FxnT,fxnP} */
typedef xdc_Void (*ti_sysbios_knl_Task_setHookContext_FxnT)(void*, xdc_Int, xdc_Ptr);
static inline ti_sysbios_knl_Task_setHookContext_FxnT ti_sysbios_knl_Task_setHookContext_fxnP( void )
{
    return (ti_sysbios_knl_Task_setHookContext_FxnT)ti_sysbios_knl_Task_setHookContext; 
}

/* setPri_{FxnT,fxnP} */
typedef xdc_UInt (*ti_sysbios_knl_Task_setPri_FxnT)(void*, xdc_Int);
static inline ti_sysbios_knl_Task_setPri_FxnT ti_sysbios_knl_Task_setPri_fxnP( void )
{
    return (ti_sysbios_knl_Task_setPri_FxnT)ti_sysbios_knl_Task_setPri; 
}

/* stat_{FxnT,fxnP} */
typedef xdc_Void (*ti_sysbios_knl_Task_stat_FxnT)(void*, ti_sysbios_knl_Task_Stat*);
static inline ti_sysbios_knl_Task_stat_FxnT ti_sysbios_knl_Task_stat_fxnP( void )
{
    return (ti_sysbios_knl_Task_stat_FxnT)ti_sysbios_knl_Task_stat; 
}

/* getMode_{FxnT,fxnP} */
typedef ti_sysbios_knl_Task_Mode (*ti_sysbios_knl_Task_getMode_FxnT)(void*);
static inline ti_sysbios_knl_Task_getMode_FxnT ti_sysbios_knl_Task_getMode_fxnP( void )
{
    return (ti_sysbios_knl_Task_getMode_FxnT)ti_sysbios_knl_Task_getMode; 
}

/* block_{FxnT,fxnP} */
typedef xdc_Void (*ti_sysbios_knl_Task_block_FxnT)(void*);
static inline ti_sysbios_knl_Task_block_FxnT ti_sysbios_knl_Task_block_fxnP( void )
{
    return (ti_sysbios_knl_Task_block_FxnT)ti_sysbios_knl_Task_block; 
}

/* unblock_{FxnT,fxnP} */
typedef xdc_Void (*ti_sysbios_knl_Task_unblock_FxnT)(void*);
static inline ti_sysbios_knl_Task_unblock_FxnT ti_sysbios_knl_Task_unblock_fxnP( void )
{
    return (ti_sysbios_knl_Task_unblock_FxnT)ti_sysbios_knl_Task_unblock; 
}

/* blockI_{FxnT,fxnP} */
typedef xdc_Void (*ti_sysbios_knl_Task_blockI_FxnT)(void*);
static inline ti_sysbios_knl_Task_blockI_FxnT ti_sysbios_knl_Task_blockI_fxnP( void )
{
    return (ti_sysbios_knl_Task_blockI_FxnT)ti_sysbios_knl_Task_blockI; 
}

/* unblockI_{FxnT,fxnP} */
typedef xdc_Void (*ti_sysbios_knl_Task_unblockI_FxnT)(void*, xdc_UInt);
static inline ti_sysbios_knl_Task_unblockI_FxnT ti_sysbios_knl_Task_unblockI_fxnP( void )
{
    return (ti_sysbios_knl_Task_unblockI_FxnT)ti_sysbios_knl_Task_unblockI; 
}


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sysbios_knl_Task_Module_startupDone() ti_sysbios_knl_Task_Module__startupDone__S()

/* Object_heap */
#define ti_sysbios_knl_Task_Object_heap() ti_sysbios_knl_Task_Object__heap__C

/* Module_heap */
#define ti_sysbios_knl_Task_Module_heap() ti_sysbios_knl_Task_Object__heap__C

/* Module_id */
static inline CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module_id( void ) 
{
    return ti_sysbios_knl_Task_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sysbios_knl_Task_Module_hasMask( void ) 
{
    return ti_sysbios_knl_Task_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_sysbios_knl_Task_Module_getMask( void ) 
{
    return ti_sysbios_knl_Task_Module__diagsMask__C != NULL ? *ti_sysbios_knl_Task_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_sysbios_knl_Task_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_sysbios_knl_Task_Module__diagsMask__C != NULL) *ti_sysbios_knl_Task_Module__diagsMask__C = mask;
}

/* Params_init */
static inline void ti_sysbios_knl_Task_Params_init( ti_sysbios_knl_Task_Params* prms ) 
{
    if (prms) {
        ti_sysbios_knl_Task_Params__init__S(prms, 0, sizeof(ti_sysbios_knl_Task_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Params_copy */
static inline void ti_sysbios_knl_Task_Params_copy( ti_sysbios_knl_Task_Params* dst, const ti_sysbios_knl_Task_Params* src ) 
{
    if (dst) {
        ti_sysbios_knl_Task_Params__init__S(dst, (xdc_Ptr)src, sizeof(ti_sysbios_knl_Task_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Object_count */
#define ti_sysbios_knl_Task_Object_count() ti_sysbios_knl_Task_Object__count__C

/* Object_sizeof */
#define ti_sysbios_knl_Task_Object_sizeof() ti_sysbios_knl_Task_Object__sizeof__C

/* Object_get */
static inline ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_Object_get( ti_sysbios_knl_Task_Instance_State* oarr, int i ) 
{
    return (ti_sysbios_knl_Task_Handle)ti_sysbios_knl_Task_Object__get__S(oarr, i);
}

/* Object_first */
static inline ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_Object_first( void )
{
    return (ti_sysbios_knl_Task_Handle)ti_sysbios_knl_Task_Object__first__S();
}

/* Object_next */
static inline ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_Object_next( ti_sysbios_knl_Task_Object* obj )
{
    return (ti_sysbios_knl_Task_Handle)ti_sysbios_knl_Task_Object__next__S(obj);
}

/* Handle_label */
static inline xdc_runtime_Types_Label* ti_sysbios_knl_Task_Handle_label( ti_sysbios_knl_Task_Handle inst, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_knl_Task_Handle__label__S(inst, lab);
}

/* Handle_name */
static inline String ti_sysbios_knl_Task_Handle_name( ti_sysbios_knl_Task_Handle inst )
{
    xdc_runtime_Types_Label lab;
    return ti_sysbios_knl_Task_Handle__label__S(inst, &lab)->iname;
}

/* create */
static inline ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params* __prms, xdc_runtime_Error_Block* __eb )
{
    ti_sysbios_knl_Task_Args__create __args;
    __args.fxn = fxn;
    return (ti_sysbios_knl_Task_Handle)ti_sysbios_knl_Task_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_knl_Task_Params), __eb);
}

/* construct */
static inline void ti_sysbios_knl_Task_construct( ti_sysbios_knl_Task_Struct* __obj, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params* __prms, xdc_runtime_Error_Block* __eb )
{
    ti_sysbios_knl_Task_Args__create __args;
    __args.fxn = fxn;
    ti_sysbios_knl_Task_Object__create__S(__obj, sizeof (ti_sysbios_knl_Task_Struct), &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_knl_Task_Params), __eb);
}

/* delete */
static inline void ti_sysbios_knl_Task_delete( ti_sysbios_knl_Task_Handle* instp )
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}

/* destruct */
static inline void ti_sysbios_knl_Task_destruct( ti_sysbios_knl_Task_Struct* obj )
{
    ti_sysbios_knl_Task_Object__destruct__S(obj);
}

/* handle */
static inline ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_handle( ti_sysbios_knl_Task_Struct* str )
{
    return (ti_sysbios_knl_Task_Handle)str;
}

/* struct */
static inline ti_sysbios_knl_Task_Struct* ti_sysbios_knl_Task_struct( ti_sysbios_knl_Task_Handle inst )
{
    return (ti_sysbios_knl_Task_Struct*)inst;
}


/*
 * ======== EPILOGUE ========
 */

#include <ti/sysbios/knl/Task__epilogue.h>

#ifdef ti_sysbios_knl_Task__top__
#undef __nested__
#endif

#endif /* ti_sysbios_knl_Task__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sysbios_knl_Task__internalaccess))

#ifndef ti_sysbios_knl_Task__include_state
#define ti_sysbios_knl_Task__include_state

/* Module_State */
struct ti_sysbios_knl_Task_Module_State {
    xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    ti_sysbios_knl_Task_Handle idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    char __dummy;
};

/* Module__state__V */
extern struct ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;

/* Object */
struct ti_sysbios_knl_Task_Object {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem* pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
};

/* Module_State_inactiveQ */
__extern __FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O;
static inline ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Task_Module_State_inactiveQ()
{
    return (ti_sysbios_knl_Queue_Handle)(((char*)&ti_sysbios_knl_Task_Module__state__V) + ti_sysbios_knl_Task_Module_State_inactiveQ__O);
}

/* Module_State_terminatedQ */
__extern __FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O;
static inline ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Task_Module_State_terminatedQ()
{
    return (ti_sysbios_knl_Queue_Handle)(((char*)&ti_sysbios_knl_Task_Module__state__V) + ti_sysbios_knl_Task_Module_State_terminatedQ__O);
}

#endif /* ti_sysbios_knl_Task__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sysbios_knl_Task__nolocalnames)

#ifndef ti_sysbios_knl_Task__localnames__done
#define ti_sysbios_knl_Task__localnames__done

/* module prefix */
#define Task_Instance ti_sysbios_knl_Task_Instance
#define Task_Handle ti_sysbios_knl_Task_Handle
#define Task_Module ti_sysbios_knl_Task_Module
#define Task_Object ti_sysbios_knl_Task_Object
#define Task_Struct ti_sysbios_knl_Task_Struct
#define Task_FuncPtr ti_sysbios_knl_Task_FuncPtr
#define Task_AllBlockedFuncPtr ti_sysbios_knl_Task_AllBlockedFuncPtr
#define Task_Mode ti_sysbios_knl_Task_Mode
#define Task_Stat ti_sysbios_knl_Task_Stat
#define Task_HookSet ti_sysbios_knl_Task_HookSet
#define Task_PendElem ti_sysbios_knl_Task_PendElem
#define Task_Instance_State ti_sysbios_knl_Task_Instance_State
#define Task_Module_State ti_sysbios_knl_Task_Module_State
#define Task_Mode_RUNNING ti_sysbios_knl_Task_Mode_RUNNING
#define Task_Mode_READY ti_sysbios_knl_Task_Mode_READY
#define Task_Mode_BLOCKED ti_sysbios_knl_Task_Mode_BLOCKED
#define Task_Mode_TERMINATED ti_sysbios_knl_Task_Mode_TERMINATED
#define Task_Mode_INACTIVE ti_sysbios_knl_Task_Mode_INACTIVE
#define Task_LM_switch ti_sysbios_knl_Task_LM_switch
#define Task_LM_sleep ti_sysbios_knl_Task_LM_sleep
#define Task_LD_ready ti_sysbios_knl_Task_LD_ready
#define Task_LD_block ti_sysbios_knl_Task_LD_block
#define Task_LM_yield ti_sysbios_knl_Task_LM_yield
#define Task_LM_setPri ti_sysbios_knl_Task_LM_setPri
#define Task_LD_exit ti_sysbios_knl_Task_LD_exit
#define Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow
#define Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds
#define Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType
#define Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState
#define Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem
#define Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled
#define Task_A_badPriority ti_sysbios_knl_Task_A_badPriority
#define Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout
#define Task_numPriorities ti_sysbios_knl_Task_numPriorities
#define Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize
#define Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap
#define Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc
#define Task_initStackFlag ti_sysbios_knl_Task_initStackFlag
#define Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks
#define Task_hooks ti_sysbios_knl_Task_hooks
#define Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks
#define Task_Module_State_inactiveQ ti_sysbios_knl_Task_Module_State_inactiveQ
#define Task_Module_State_terminatedQ ti_sysbios_knl_Task_Module_State_terminatedQ
#define Task_Params ti_sysbios_knl_Task_Params
#define Task_startup ti_sysbios_knl_Task_startup
#define Task_disable ti_sysbios_knl_Task_disable
#define Task_enable ti_sysbios_knl_Task_enable
#define Task_restore ti_sysbios_knl_Task_restore
#define Task_restoreHwi ti_sysbios_knl_Task_restoreHwi
#define Task_self ti_sysbios_knl_Task_self
#define Task_selfMacro ti_sysbios_knl_Task_selfMacro
#define Task_checkStacks ti_sysbios_knl_Task_checkStacks
#define Task_exit ti_sysbios_knl_Task_exit
#define Task_sleep ti_sysbios_knl_Task_sleep
#define Task_yield ti_sysbios_knl_Task_yield
#define Task_getIdleTask ti_sysbios_knl_Task_getIdleTask
#define Task_getArg0 ti_sysbios_knl_Task_getArg0
#define Task_getArg0_fxnP ti_sysbios_knl_Task_getArg0_fxnP
#define Task_getArg0_FxnT ti_sysbios_knl_Task_getArg0_FxnT
#define Task_getArg1 ti_sysbios_knl_Task_getArg1
#define Task_getArg1_fxnP ti_sysbios_knl_Task_getArg1_fxnP
#define Task_getArg1_FxnT ti_sysbios_knl_Task_getArg1_FxnT
#define Task_getEnv ti_sysbios_knl_Task_getEnv
#define Task_getEnv_fxnP ti_sysbios_knl_Task_getEnv_fxnP
#define Task_getEnv_FxnT ti_sysbios_knl_Task_getEnv_FxnT
#define Task_getHookContext ti_sysbios_knl_Task_getHookContext
#define Task_getHookContext_fxnP ti_sysbios_knl_Task_getHookContext_fxnP
#define Task_getHookContext_FxnT ti_sysbios_knl_Task_getHookContext_FxnT
#define Task_getPri ti_sysbios_knl_Task_getPri
#define Task_getPri_fxnP ti_sysbios_knl_Task_getPri_fxnP
#define Task_getPri_FxnT ti_sysbios_knl_Task_getPri_FxnT
#define Task_setArg0 ti_sysbios_knl_Task_setArg0
#define Task_setArg0_fxnP ti_sysbios_knl_Task_setArg0_fxnP
#define Task_setArg0_FxnT ti_sysbios_knl_Task_setArg0_FxnT
#define Task_setArg1 ti_sysbios_knl_Task_setArg1
#define Task_setArg1_fxnP ti_sysbios_knl_Task_setArg1_fxnP
#define Task_setArg1_FxnT ti_sysbios_knl_Task_setArg1_FxnT
#define Task_setEnv ti_sysbios_knl_Task_setEnv
#define Task_setEnv_fxnP ti_sysbios_knl_Task_setEnv_fxnP
#define Task_setEnv_FxnT ti_sysbios_knl_Task_setEnv_FxnT
#define Task_setHookContext ti_sysbios_knl_Task_setHookContext
#define Task_setHookContext_fxnP ti_sysbios_knl_Task_setHookContext_fxnP
#define Task_setHookContext_FxnT ti_sysbios_knl_Task_setHookContext_FxnT
#define Task_setPri ti_sysbios_knl_Task_setPri
#define Task_setPri_fxnP ti_sysbios_knl_Task_setPri_fxnP
#define Task_setPri_FxnT ti_sysbios_knl_Task_setPri_FxnT
#define Task_stat ti_sysbios_knl_Task_stat
#define Task_stat_fxnP ti_sysbios_knl_Task_stat_fxnP
#define Task_stat_FxnT ti_sysbios_knl_Task_stat_FxnT
#define Task_getMode ti_sysbios_knl_Task_getMode
#define Task_getMode_fxnP ti_sysbios_knl_Task_getMode_fxnP
#define Task_getMode_FxnT ti_sysbios_knl_Task_getMode_FxnT
#define Task_block ti_sysbios_knl_Task_block
#define Task_block_fxnP ti_sysbios_knl_Task_block_fxnP
#define Task_block_FxnT ti_sysbios_knl_Task_block_FxnT
#define Task_unblock ti_sysbios_knl_Task_unblock
#define Task_unblock_fxnP ti_sysbios_knl_Task_unblock_fxnP
#define Task_unblock_FxnT ti_sysbios_knl_Task_unblock_FxnT
#define Task_blockI ti_sysbios_knl_Task_blockI
#define Task_blockI_fxnP ti_sysbios_knl_Task_blockI_fxnP
#define Task_blockI_FxnT ti_sysbios_knl_Task_blockI_FxnT
#define Task_unblockI ti_sysbios_knl_Task_unblockI
#define Task_unblockI_fxnP ti_sysbios_knl_Task_unblockI_fxnP
#define Task_unblockI_FxnT ti_sysbios_knl_Task_unblockI_FxnT
#define Task_Module_name ti_sysbios_knl_Task_Module_name
#define Task_Module_id ti_sysbios_knl_Task_Module_id
#define Task_Module_startup ti_sysbios_knl_Task_Module_startup
#define Task_Module_startupDone ti_sysbios_knl_Task_Module_startupDone
#define Task_Module_hasMask ti_sysbios_knl_Task_Module_hasMask
#define Task_Module_getMask ti_sysbios_knl_Task_Module_getMask
#define Task_Module_setMask ti_sysbios_knl_Task_Module_setMask
#define Task_Object_heap ti_sysbios_knl_Task_Object_heap
#define Task_Module_heap ti_sysbios_knl_Task_Module_heap
#define Task_construct ti_sysbios_knl_Task_construct
#define Task_create ti_sysbios_knl_Task_create
#define Task_handle ti_sysbios_knl_Task_handle
#define Task_struct ti_sysbios_knl_Task_struct
#define Task_Handle_label ti_sysbios_knl_Task_Handle_label
#define Task_Handle_name ti_sysbios_knl_Task_Handle_name
#define Task_Instance_init ti_sysbios_knl_Task_Instance_init
#define Task_Object_count ti_sysbios_knl_Task_Object_count
#define Task_Object_get ti_sysbios_knl_Task_Object_get
#define Task_Object_first ti_sysbios_knl_Task_Object_first
#define Task_Object_next ti_sysbios_knl_Task_Object_next
#define Task_Object_sizeof ti_sysbios_knl_Task_Object_sizeof
#define Task_Params_copy ti_sysbios_knl_Task_Params_copy
#define Task_Params_init ti_sysbios_knl_Task_Params_init
#define Task_Instance_finalize ti_sysbios_knl_Task_Instance_finalize
#define Task_delete ti_sysbios_knl_Task_delete
#define Task_destruct ti_sysbios_knl_Task_destruct

/* proxies */
#include <ti/sysbios/knl/package/Task_SupportProxy.h>

#endif /* ti_sysbios_knl_Task__localnames__done */
#endif
