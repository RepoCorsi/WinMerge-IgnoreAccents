

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for IgnoreAccents.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __IgnoreAccents_h__
#define __IgnoreAccents_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IWinMergeScript_FWD_DEFINED__
#define __IWinMergeScript_FWD_DEFINED__
typedef interface IWinMergeScript IWinMergeScript;

#endif 	/* __IWinMergeScript_FWD_DEFINED__ */


#ifndef __WinMergeScript_FWD_DEFINED__
#define __WinMergeScript_FWD_DEFINED__

#ifdef __cplusplus
typedef class WinMergeScript WinMergeScript;
#else
typedef struct WinMergeScript WinMergeScript;
#endif /* __cplusplus */

#endif 	/* __WinMergeScript_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IWinMergeScript_INTERFACE_DEFINED__
#define __IWinMergeScript_INTERFACE_DEFINED__

/* interface IWinMergeScript */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWinMergeScript;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("221ACB26-BF4C-42DF-B4CA-2C2574FD0AD3")
    IWinMergeScript : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PluginEvent( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PluginDescription( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PluginFileFilters( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PluginIsAutomatic( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PluginArguments( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PluginArguments( 
            /* [in] */ BSTR val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PluginExtendedProperties( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PrediffFile( 
            /* [in] */ BSTR fileSrc,
            /* [in] */ BSTR fileDst,
            /* [out][in] */ VARIANT_BOOL *pbChanged,
            /* [retval][out] */ VARIANT_BOOL *pbSuccess) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowSettingsDialog( 
            /* [retval][out] */ VARIANT_BOOL *pbHandled) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PluginOnEvent( 
            /* [in] */ int iEventType,
            /* [in] */ IDispatch *pDispatch) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWinMergeScriptVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWinMergeScript * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWinMergeScript * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWinMergeScript * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWinMergeScript * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWinMergeScript * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWinMergeScript * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWinMergeScript * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IWinMergeScript, get_PluginEvent)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PluginEvent )( 
            IWinMergeScript * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IWinMergeScript, get_PluginDescription)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PluginDescription )( 
            IWinMergeScript * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IWinMergeScript, get_PluginFileFilters)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PluginFileFilters )( 
            IWinMergeScript * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IWinMergeScript, get_PluginIsAutomatic)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PluginIsAutomatic )( 
            IWinMergeScript * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IWinMergeScript, get_PluginArguments)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PluginArguments )( 
            IWinMergeScript * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IWinMergeScript, put_PluginArguments)
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PluginArguments )( 
            IWinMergeScript * This,
            /* [in] */ BSTR val);
        
        DECLSPEC_XFGVIRT(IWinMergeScript, get_PluginExtendedProperties)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PluginExtendedProperties )( 
            IWinMergeScript * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IWinMergeScript, PrediffFile)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PrediffFile )( 
            IWinMergeScript * This,
            /* [in] */ BSTR fileSrc,
            /* [in] */ BSTR fileDst,
            /* [out][in] */ VARIANT_BOOL *pbChanged,
            /* [retval][out] */ VARIANT_BOOL *pbSuccess);
        
        DECLSPEC_XFGVIRT(IWinMergeScript, ShowSettingsDialog)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowSettingsDialog )( 
            IWinMergeScript * This,
            /* [retval][out] */ VARIANT_BOOL *pbHandled);
        
        DECLSPEC_XFGVIRT(IWinMergeScript, PluginOnEvent)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PluginOnEvent )( 
            IWinMergeScript * This,
            /* [in] */ int iEventType,
            /* [in] */ IDispatch *pDispatch);
        
        END_INTERFACE
    } IWinMergeScriptVtbl;

    interface IWinMergeScript
    {
        CONST_VTBL struct IWinMergeScriptVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWinMergeScript_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWinMergeScript_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWinMergeScript_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWinMergeScript_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWinMergeScript_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWinMergeScript_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWinMergeScript_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWinMergeScript_get_PluginEvent(This,pVal)	\
    ( (This)->lpVtbl -> get_PluginEvent(This,pVal) ) 

#define IWinMergeScript_get_PluginDescription(This,pVal)	\
    ( (This)->lpVtbl -> get_PluginDescription(This,pVal) ) 

#define IWinMergeScript_get_PluginFileFilters(This,pVal)	\
    ( (This)->lpVtbl -> get_PluginFileFilters(This,pVal) ) 

#define IWinMergeScript_get_PluginIsAutomatic(This,pVal)	\
    ( (This)->lpVtbl -> get_PluginIsAutomatic(This,pVal) ) 

#define IWinMergeScript_get_PluginArguments(This,pVal)	\
    ( (This)->lpVtbl -> get_PluginArguments(This,pVal) ) 

#define IWinMergeScript_put_PluginArguments(This,val)	\
    ( (This)->lpVtbl -> put_PluginArguments(This,val) ) 

#define IWinMergeScript_get_PluginExtendedProperties(This,pVal)	\
    ( (This)->lpVtbl -> get_PluginExtendedProperties(This,pVal) ) 

#define IWinMergeScript_PrediffFile(This,fileSrc,fileDst,pbChanged,pbSuccess)	\
    ( (This)->lpVtbl -> PrediffFile(This,fileSrc,fileDst,pbChanged,pbSuccess) ) 

#define IWinMergeScript_ShowSettingsDialog(This,pbHandled)	\
    ( (This)->lpVtbl -> ShowSettingsDialog(This,pbHandled) ) 

#define IWinMergeScript_PluginOnEvent(This,iEventType,pDispatch)	\
    ( (This)->lpVtbl -> PluginOnEvent(This,iEventType,pDispatch) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWinMergeScript_INTERFACE_DEFINED__ */



#ifndef __IgnoreAccentsLib_LIBRARY_DEFINED__
#define __IgnoreAccentsLib_LIBRARY_DEFINED__

/* library IgnoreAccentsLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_IgnoreAccentsLib;

EXTERN_C const CLSID CLSID_WinMergeScript;

#ifdef __cplusplus

class DECLSPEC_UUID("A84C1E59-0788-4E1B-BEB7-278201CAAB2F")
WinMergeScript;
#endif
#endif /* __IgnoreAccentsLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


