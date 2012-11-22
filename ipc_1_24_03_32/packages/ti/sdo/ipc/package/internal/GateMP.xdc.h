/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y25
 */

#ifndef ti_sdo_ipc_GateMP__INTERNAL__
#define ti_sdo_ipc_GateMP__INTERNAL__

#ifndef ti_sdo_ipc_GateMP__internalaccess
#define ti_sdo_ipc_GateMP__internalaccess
#endif

#include <ti/sdo/ipc/GateMP.h>

#undef xdc_FILE__
#ifndef xdc_FILE
#define xdc_FILE__ NULL
#else
#define xdc_FILE__ xdc_FILE
#endif

/* createLocal */
#undef ti_sdo_ipc_GateMP_createLocal
#define ti_sdo_ipc_GateMP_createLocal ti_sdo_ipc_GateMP_createLocal__F

/* attach */
#undef ti_sdo_ipc_GateMP_attach
#define ti_sdo_ipc_GateMP_attach ti_sdo_ipc_GateMP_attach__F

/* getRegion0ReservedSize */
#undef ti_sdo_ipc_GateMP_getRegion0ReservedSize
#define ti_sdo_ipc_GateMP_getRegion0ReservedSize ti_sdo_ipc_GateMP_getRegion0ReservedSize__F

/* setRegion0Reserved */
#undef ti_sdo_ipc_GateMP_setRegion0Reserved
#define ti_sdo_ipc_GateMP_setRegion0Reserved ti_sdo_ipc_GateMP_setRegion0Reserved__F

/* openRegion0Reserved */
#undef ti_sdo_ipc_GateMP_openRegion0Reserved
#define ti_sdo_ipc_GateMP_openRegion0Reserved ti_sdo_ipc_GateMP_openRegion0Reserved__F

/* setDefaultRemote */
#undef ti_sdo_ipc_GateMP_setDefaultRemote
#define ti_sdo_ipc_GateMP_setDefaultRemote ti_sdo_ipc_GateMP_setDefaultRemote__F

/* start */
#undef ti_sdo_ipc_GateMP_start
#define ti_sdo_ipc_GateMP_start ti_sdo_ipc_GateMP_start__F

/* getSharedAddr */
#undef ti_sdo_ipc_GateMP_getSharedAddr
#define ti_sdo_ipc_GateMP_getSharedAddr ti_sdo_ipc_GateMP_getSharedAddr__F

/* getFreeResource */
#define GateMP_getFreeResource ti_sdo_ipc_GateMP_getFreeResource__I

/* Module_startup */
#undef ti_sdo_ipc_GateMP_Module_startup
#define ti_sdo_ipc_GateMP_Module_startup ti_sdo_ipc_GateMP_Module_startup__F

/* Instance_init */
#undef ti_sdo_ipc_GateMP_Instance_init
#define ti_sdo_ipc_GateMP_Instance_init ti_sdo_ipc_GateMP_Instance_init__F

/* Instance_finalize */
#undef ti_sdo_ipc_GateMP_Instance_finalize
#define ti_sdo_ipc_GateMP_Instance_finalize ti_sdo_ipc_GateMP_Instance_finalize__F

/* module */
#define GateMP_module ((ti_sdo_ipc_GateMP_Module_State *)(xdc__MODOBJADDR__(ti_sdo_ipc_GateMP_Module__state__V)))
#if !defined(__cplusplus) || !defined(ti_sdo_ipc_GateMP__cplusplus)
#define module ((ti_sdo_ipc_GateMP_Module_State *)(xdc__MODOBJADDR__(ti_sdo_ipc_GateMP_Module__state__V)))
#endif
/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_ipc_GateMP_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_ipc_GateMP_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_ipc_GateMP_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_ipc_GateMP_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_ipc_GateMP_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_ipc_GateMP_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_ipc_GateMP_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_ipc_GateMP_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_ipc_GateMP_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_ipc_GateMP_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_ipc_GateMP_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_ipc_GateMP_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_ipc_GateMP_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_ipc_GateMP_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_ipc_GateMP_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_ipc_GateMP_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_ipc_GateMP_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_ipc_GateMP_Module_GateProxy_query

/* Object__sizingError */
#line 1 "Error_inconsistent_object_size_in_ti.sdo.ipc.GateMP"
typedef char ti_sdo_ipc_GateMP_Object__sizingError[sizeof(ti_sdo_ipc_GateMP_Object) > sizeof(ti_sdo_ipc_GateMP_Struct) ? -1 : 1];


#endif /* ti_sdo_ipc_GateMP__INTERNAL____ */
