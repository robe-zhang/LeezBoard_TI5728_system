/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-D20
 */

#ifndef ti_ipc_namesrv_NameServerRemoteRpmsg__INTERNAL__
#define ti_ipc_namesrv_NameServerRemoteRpmsg__INTERNAL__

#ifndef ti_ipc_namesrv_NameServerRemoteRpmsg__internalaccess
#define ti_ipc_namesrv_NameServerRemoteRpmsg__internalaccess
#endif

#include <ti/ipc/namesrv/NameServerRemoteRpmsg.h>

#undef xdc_FILE__
#ifndef xdc_FILE
#define xdc_FILE__ NULL
#else
#define xdc_FILE__ xdc_FILE
#endif

/* attach */
#undef ti_ipc_namesrv_NameServerRemoteRpmsg_attach
#define ti_ipc_namesrv_NameServerRemoteRpmsg_attach ti_ipc_namesrv_NameServerRemoteRpmsg_attach__E

/* detach */
#undef ti_ipc_namesrv_NameServerRemoteRpmsg_detach
#define ti_ipc_namesrv_NameServerRemoteRpmsg_detach ti_ipc_namesrv_NameServerRemoteRpmsg_detach__E

/* sharedMemReq */
#undef ti_ipc_namesrv_NameServerRemoteRpmsg_sharedMemReq
#define ti_ipc_namesrv_NameServerRemoteRpmsg_sharedMemReq ti_ipc_namesrv_NameServerRemoteRpmsg_sharedMemReq__E

/* get */
#undef ti_ipc_namesrv_NameServerRemoteRpmsg_get
#define ti_ipc_namesrv_NameServerRemoteRpmsg_get ti_ipc_namesrv_NameServerRemoteRpmsg_get__F

/* Module_startup */
#undef ti_ipc_namesrv_NameServerRemoteRpmsg_Module_startup
#define ti_ipc_namesrv_NameServerRemoteRpmsg_Module_startup ti_ipc_namesrv_NameServerRemoteRpmsg_Module_startup__E

/* Instance_init */
#undef ti_ipc_namesrv_NameServerRemoteRpmsg_Instance_init
#define ti_ipc_namesrv_NameServerRemoteRpmsg_Instance_init ti_ipc_namesrv_NameServerRemoteRpmsg_Instance_init__E

/* Instance_finalize */
#undef ti_ipc_namesrv_NameServerRemoteRpmsg_Instance_finalize
#define ti_ipc_namesrv_NameServerRemoteRpmsg_Instance_finalize ti_ipc_namesrv_NameServerRemoteRpmsg_Instance_finalize__E

/* module */
#ifdef ti_ipc_namesrv_NameServerRemoteRpmsg_Module__state__VR
#define NameServerRemoteRpmsg_module ((ti_ipc_namesrv_NameServerRemoteRpmsg_Module_State *)(xdcRomStatePtr + ti_ipc_namesrv_NameServerRemoteRpmsg_Module__state__V_offset))
#define module ((ti_ipc_namesrv_NameServerRemoteRpmsg_Module_State *)(xdcRomStatePtr + ti_ipc_namesrv_NameServerRemoteRpmsg_Module__state__V_offset))
#else
#define NameServerRemoteRpmsg_module ((ti_ipc_namesrv_NameServerRemoteRpmsg_Module_State *)(xdc__MODOBJADDR__(ti_ipc_namesrv_NameServerRemoteRpmsg_Module__state__V)))
#if !defined(__cplusplus) ||!defined(ti_ipc_namesrv_NameServerRemoteRpmsg__cplusplus)
#define module ((ti_ipc_namesrv_NameServerRemoteRpmsg_Module_State *)(xdc__MODOBJADDR__(ti_ipc_namesrv_NameServerRemoteRpmsg_Module__state__V)))
#endif
#endif

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_ipc_namesrv_NameServerRemoteRpmsg_Module__id__CR
#define Module__MID (*((CT__ti_ipc_namesrv_NameServerRemoteRpmsg_Module__id *)(xdcRomConstPtr + ti_ipc_namesrv_NameServerRemoteRpmsg_Module__id__C_offset)))
#else
#define Module__MID ti_ipc_namesrv_NameServerRemoteRpmsg_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_ipc_namesrv_NameServerRemoteRpmsg_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_ipc_namesrv_NameServerRemoteRpmsg_Module__diagsIncluded *)(xdcRomConstPtr + ti_ipc_namesrv_NameServerRemoteRpmsg_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_ipc_namesrv_NameServerRemoteRpmsg_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_ipc_namesrv_NameServerRemoteRpmsg_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_ipc_namesrv_NameServerRemoteRpmsg_Module__diagsEnabled *)(xdcRomConstPtr + ti_ipc_namesrv_NameServerRemoteRpmsg_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_ipc_namesrv_NameServerRemoteRpmsg_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_ipc_namesrv_NameServerRemoteRpmsg_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_ipc_namesrv_NameServerRemoteRpmsg_Module__diagsMask *)(xdcRomConstPtr + ti_ipc_namesrv_NameServerRemoteRpmsg_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_ipc_namesrv_NameServerRemoteRpmsg_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerDefined *)(xdcRomConstPtr + ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerObj__CR
#define Module__LOGOBJ ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerObj *)(xdcRomConstPtr + ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn0 *)(xdcRomConstPtr + ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn1 *)(xdcRomConstPtr + ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn2 *)(xdcRomConstPtr + ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn4 *)(xdcRomConstPtr + ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn8 *)(xdcRomConstPtr + ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_ipc_namesrv_NameServerRemoteRpmsg_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_ipc_namesrv_NameServerRemoteRpmsg_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_ipc_namesrv_NameServerRemoteRpmsg_Module__gateObj *)(xdcRomConstPtr + ti_ipc_namesrv_NameServerRemoteRpmsg_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_ipc_namesrv_NameServerRemoteRpmsg_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_ipc_namesrv_NameServerRemoteRpmsg_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_ipc_namesrv_NameServerRemoteRpmsg_Module__gatePrms *)(xdcRomConstPtr + ti_ipc_namesrv_NameServerRemoteRpmsg_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_ipc_namesrv_NameServerRemoteRpmsg_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_ipc_namesrv_NameServerRemoteRpmsg_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_ipc_namesrv_NameServerRemoteRpmsg_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_ipc_namesrv_NameServerRemoteRpmsg_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_ipc_namesrv_NameServerRemoteRpmsg_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_ipc_namesrv_NameServerRemoteRpmsg_Module_GateProxy_query

/* Object__sizingError */
#line 1 "Error_inconsistent_object_size_in_ti.ipc.namesrv.NameServerRemoteRpmsg"
typedef char ti_ipc_namesrv_NameServerRemoteRpmsg_Object__sizingError[sizeof(ti_ipc_namesrv_NameServerRemoteRpmsg_Object) > sizeof(ti_ipc_namesrv_NameServerRemoteRpmsg_Struct) ? -1 : 1];


#endif /* ti_ipc_namesrv_NameServerRemoteRpmsg__INTERNAL____ */