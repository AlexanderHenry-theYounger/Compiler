

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for evr.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __evr_h__
#define __evr_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMFVideoPositionMapper_FWD_DEFINED__
#define __IMFVideoPositionMapper_FWD_DEFINED__
typedef interface IMFVideoPositionMapper IMFVideoPositionMapper;
#endif 	/* __IMFVideoPositionMapper_FWD_DEFINED__ */


#ifndef __IMFVideoDeviceID_FWD_DEFINED__
#define __IMFVideoDeviceID_FWD_DEFINED__
typedef interface IMFVideoDeviceID IMFVideoDeviceID;
#endif 	/* __IMFVideoDeviceID_FWD_DEFINED__ */


#ifndef __IMFVideoDisplayControl_FWD_DEFINED__
#define __IMFVideoDisplayControl_FWD_DEFINED__
typedef interface IMFVideoDisplayControl IMFVideoDisplayControl;
#endif 	/* __IMFVideoDisplayControl_FWD_DEFINED__ */


#ifndef __IMFVideoPresenter_FWD_DEFINED__
#define __IMFVideoPresenter_FWD_DEFINED__
typedef interface IMFVideoPresenter IMFVideoPresenter;
#endif 	/* __IMFVideoPresenter_FWD_DEFINED__ */


#ifndef __IMFDesiredSample_FWD_DEFINED__
#define __IMFDesiredSample_FWD_DEFINED__
typedef interface IMFDesiredSample IMFDesiredSample;
#endif 	/* __IMFDesiredSample_FWD_DEFINED__ */


#ifndef __IMFTrackedSample_FWD_DEFINED__
#define __IMFTrackedSample_FWD_DEFINED__
typedef interface IMFTrackedSample IMFTrackedSample;
#endif 	/* __IMFTrackedSample_FWD_DEFINED__ */


#ifndef __IMFVideoMixerControl_FWD_DEFINED__
#define __IMFVideoMixerControl_FWD_DEFINED__
typedef interface IMFVideoMixerControl IMFVideoMixerControl;
#endif 	/* __IMFVideoMixerControl_FWD_DEFINED__ */


#ifndef __IMFVideoRenderer_FWD_DEFINED__
#define __IMFVideoRenderer_FWD_DEFINED__
typedef interface IMFVideoRenderer IMFVideoRenderer;
#endif 	/* __IMFVideoRenderer_FWD_DEFINED__ */


#ifndef __IEVRFilterConfig_FWD_DEFINED__
#define __IEVRFilterConfig_FWD_DEFINED__
typedef interface IEVRFilterConfig IEVRFilterConfig;
#endif 	/* __IEVRFilterConfig_FWD_DEFINED__ */


#ifndef __IMFTopologyServiceLookup_FWD_DEFINED__
#define __IMFTopologyServiceLookup_FWD_DEFINED__
typedef interface IMFTopologyServiceLookup IMFTopologyServiceLookup;
#endif 	/* __IMFTopologyServiceLookup_FWD_DEFINED__ */


#ifndef __IMFTopologyServiceLookupClient_FWD_DEFINED__
#define __IMFTopologyServiceLookupClient_FWD_DEFINED__
typedef interface IMFTopologyServiceLookupClient IMFTopologyServiceLookupClient;
#endif 	/* __IMFTopologyServiceLookupClient_FWD_DEFINED__ */


#ifndef __IEVRTrustedVideoPlugin_FWD_DEFINED__
#define __IEVRTrustedVideoPlugin_FWD_DEFINED__
typedef interface IEVRTrustedVideoPlugin IEVRTrustedVideoPlugin;
#endif 	/* __IEVRTrustedVideoPlugin_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "propidl.h"
#include "mfidl.h"
#include "mftransform.h"
#include "strmif.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_evr_0000_0000 */
/* [local] */ 

#if defined(__midl)
typedef 
enum _D3DFORMAT
    {	D3DFMT_UNKNOWN	= 0,
	D3DFMT_R8G8B8	= 20,
	D3DFMT_A8R8G8B8	= 21,
	D3DFMT_X8R8G8B8	= 22,
	D3DFMT_R5G6B5	= 23,
	D3DFMT_X1R5G5B5	= 24,
	D3DFMT_A1R5G5B5	= 25,
	D3DFMT_A4R4G4B4	= 26,
	D3DFMT_R3G3B2	= 27,
	D3DFMT_A8	= 28,
	D3DFMT_A8R3G3B2	= 29,
	D3DFMT_X4R4G4B4	= 30,
	D3DFMT_A2B10G10R10	= 31,
	D3DFMT_G16R16	= 34,
	D3DFMT_A8P8	= 40,
	D3DFMT_P8	= 41,
	D3DFMT_L8	= 50,
	D3DFMT_A8L8	= 51,
	D3DFMT_A4L4	= 52,
	D3DFMT_V8U8	= 60,
	D3DFMT_L6V5U5	= 61,
	D3DFMT_X8L8V8U8	= 62,
	D3DFMT_Q8W8V8U8	= 63,
	D3DFMT_V16U16	= 64,
	D3DFMT_W11V11U10	= 65,
	D3DFMT_A2W10V10U10	= 67,
	D3DFMT_D16_LOCKABLE	= 70,
	D3DFMT_D32	= 71,
	D3DFMT_D15S1	= 73,
	D3DFMT_D24S8	= 75,
	D3DFMT_D16	= 80,
	D3DFMT_D24X8	= 77,
	D3DFMT_D24X4S4	= 79,
	D3DFMT_VERTEXDATA	= 100,
	D3DFMT_INDEX16	= 101,
	D3DFMT_INDEX32	= 102,
	D3DFMT_FORCE_DWORD	= 0x7fffffff
    } 	D3DFORMAT;

#endif // __midl
DEFINE_GUID(MR_VIDEO_RENDER_SERVICE, 
    0x1092a86c, 
    0xab1a, 
    0x459a, 
    0xa3, 0x36, 0x83, 0x1f, 0xbc, 0x4d, 0x11, 0xff 
);
DEFINE_GUID(MR_VIDEO_MIXER_SERVICE, 
    0x73cd2fc, 
    0x6cf4, 
    0x40b7, 
    0x88, 0x59, 0xe8, 0x95, 0x52, 0xc8, 0x41, 0xf8 
);
DEFINE_GUID(MR_VIDEO_ACCELERATION_SERVICE, 
    0xefef5175, 
    0x5c7d, 
    0x4ce2, 
    0xbb, 0xbd, 0x34, 0xff, 0x8b, 0xca, 0x65, 0x54 
); 
DEFINE_GUID(MR_BUFFER_SERVICE, 
    0xa562248c, 
    0x9ac6, 
    0x4ffc, 
    0x9f, 0xba, 0x3a, 0xf8, 0xf8, 0xad, 0x1a, 0x4d 
);
DEFINE_GUID(VIDEO_ZOOM_RECT, 
    0x7aaa1638, 
    0x1b7f, 
    0x4c93, 
    0xbd, 0x89, 0x5b, 0x9c, 0x9f, 0xb6, 0xfc, 0xf0
);











extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0000_v0_0_s_ifspec;

#ifndef __IMFVideoPositionMapper_INTERFACE_DEFINED__
#define __IMFVideoPositionMapper_INTERFACE_DEFINED__

/* interface IMFVideoPositionMapper */
/* [local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMFVideoPositionMapper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1F6A9F17-E70B-4e24-8AE4-0B2C3BA7A4AE")
    IMFVideoPositionMapper : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MapOutputCoordinateToInputStream( 
            /* [in] */ float xOut,
            /* [in] */ float yOut,
            /* [in] */ DWORD dwOutputStreamIndex,
            /* [in] */ DWORD dwInputStreamIndex,
            /* [out] */ 
            __out  float *pxIn,
            /* [out] */ 
            __out  float *pyIn) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMFVideoPositionMapperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMFVideoPositionMapper * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMFVideoPositionMapper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMFVideoPositionMapper * This);
        
        HRESULT ( STDMETHODCALLTYPE *MapOutputCoordinateToInputStream )( 
            IMFVideoPositionMapper * This,
            /* [in] */ float xOut,
            /* [in] */ float yOut,
            /* [in] */ DWORD dwOutputStreamIndex,
            /* [in] */ DWORD dwInputStreamIndex,
            /* [out] */ 
            __out  float *pxIn,
            /* [out] */ 
            __out  float *pyIn);
        
        END_INTERFACE
    } IMFVideoPositionMapperVtbl;

    interface IMFVideoPositionMapper
    {
        CONST_VTBL struct IMFVideoPositionMapperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMFVideoPositionMapper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMFVideoPositionMapper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMFVideoPositionMapper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMFVideoPositionMapper_MapOutputCoordinateToInputStream(This,xOut,yOut,dwOutputStreamIndex,dwInputStreamIndex,pxIn,pyIn)	\
    ( (This)->lpVtbl -> MapOutputCoordinateToInputStream(This,xOut,yOut,dwOutputStreamIndex,dwInputStreamIndex,pxIn,pyIn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMFVideoPositionMapper_INTERFACE_DEFINED__ */


#ifndef __IMFVideoDeviceID_INTERFACE_DEFINED__
#define __IMFVideoDeviceID_INTERFACE_DEFINED__

/* interface IMFVideoDeviceID */
/* [local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMFVideoDeviceID;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A38D9567-5A9C-4f3c-B293-8EB415B279BA")
    IMFVideoDeviceID : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDeviceID( 
            /* [out] */ 
            __out  IID *pDeviceID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMFVideoDeviceIDVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMFVideoDeviceID * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMFVideoDeviceID * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMFVideoDeviceID * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceID )( 
            IMFVideoDeviceID * This,
            /* [out] */ 
            __out  IID *pDeviceID);
        
        END_INTERFACE
    } IMFVideoDeviceIDVtbl;

    interface IMFVideoDeviceID
    {
        CONST_VTBL struct IMFVideoDeviceIDVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMFVideoDeviceID_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMFVideoDeviceID_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMFVideoDeviceID_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMFVideoDeviceID_GetDeviceID(This,pDeviceID)	\
    ( (This)->lpVtbl -> GetDeviceID(This,pDeviceID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMFVideoDeviceID_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_evr_0000_0002 */
/* [local] */ 

typedef /* [public] */ 
enum __MIDL___MIDL_itf_evr_0000_0002_0001
    {	MFVideoARMode_None	= 0,
	MFVideoARMode_PreservePicture	= 0x1,
	MFVideoARMode_PreservePixel	= 0x2,
	MFVideoARMode_NonLinearStretch	= 0x4,
	MFVideoARMode_Mask	= 0x7
    } 	MFVideoAspectRatioMode;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_evr_0000_0002_0002
    {	MFVideoRenderPrefs_DoNotRenderBorder	= 0x1,
	MFVideoRenderPrefs_DoNotClipToDevice	= 0x2,
	MFVideoRenderPrefs_Mask	= 0x3
    } 	MFVideoRenderPrefs;

typedef struct MFVideoNormalizedRect
    {
    float left;
    float top;
    float right;
    float bottom;
    } 	MFVideoNormalizedRect;



extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0002_v0_0_s_ifspec;

#ifndef __IMFVideoDisplayControl_INTERFACE_DEFINED__
#define __IMFVideoDisplayControl_INTERFACE_DEFINED__

/* interface IMFVideoDisplayControl */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMFVideoDisplayControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a490b1e4-ab84-4d31-a1b2-181e03b1077a")
    IMFVideoDisplayControl : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNativeVideoSize( 
            /* [unique][out][in] */ __RPC__inout_opt SIZE *pszVideo,
            /* [unique][out][in] */ __RPC__inout_opt SIZE *pszARVideo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIdealVideoSize( 
            /* [unique][out][in] */ __RPC__inout_opt SIZE *pszMin,
            /* [unique][out][in] */ __RPC__inout_opt SIZE *pszMax) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVideoPosition( 
            /* [unique][in] */ __RPC__in_opt const MFVideoNormalizedRect *pnrcSource,
            /* [unique][in] */ __RPC__in_opt const LPRECT prcDest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVideoPosition( 
            /* [out] */ __RPC__out MFVideoNormalizedRect *pnrcSource,
            /* [out] */ __RPC__out LPRECT prcDest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAspectRatioMode( 
            /* [in] */ DWORD dwAspectRatioMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAspectRatioMode( 
            /* [out] */ __RPC__out DWORD *pdwAspectRatioMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVideoWindow( 
            /* [in] */ __RPC__in HWND hwndVideo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVideoWindow( 
            /* [out] */ __RPC__deref_out_opt HWND *phwndVideo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RepaintVideo( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentImage( 
            /* [out][in] */ __RPC__inout BITMAPINFOHEADER *pBih,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pcbDib) BYTE **pDib,
            /* [out] */ __RPC__out DWORD *pcbDib,
            /* [unique][out][in] */ __RPC__inout_opt LONGLONG *pTimeStamp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderColor( 
            /* [in] */ COLORREF Clr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderColor( 
            /* [out] */ __RPC__out COLORREF *pClr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRenderingPrefs( 
            /* [in] */ DWORD dwRenderFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRenderingPrefs( 
            /* [out] */ __RPC__out DWORD *pdwRenderFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFullscreen( 
            /* [in] */ BOOL fFullscreen) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFullscreen( 
            /* [out] */ __RPC__out BOOL *pfFullscreen) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMFVideoDisplayControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMFVideoDisplayControl * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMFVideoDisplayControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMFVideoDisplayControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetNativeVideoSize )( 
            IMFVideoDisplayControl * This,
            /* [unique][out][in] */ __RPC__inout_opt SIZE *pszVideo,
            /* [unique][out][in] */ __RPC__inout_opt SIZE *pszARVideo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIdealVideoSize )( 
            IMFVideoDisplayControl * This,
            /* [unique][out][in] */ __RPC__inout_opt SIZE *pszMin,
            /* [unique][out][in] */ __RPC__inout_opt SIZE *pszMax);
        
        HRESULT ( STDMETHODCALLTYPE *SetVideoPosition )( 
            IMFVideoDisplayControl * This,
            /* [unique][in] */ __RPC__in_opt const MFVideoNormalizedRect *pnrcSource,
            /* [unique][in] */ __RPC__in_opt const LPRECT prcDest);
        
        HRESULT ( STDMETHODCALLTYPE *GetVideoPosition )( 
            IMFVideoDisplayControl * This,
            /* [out] */ __RPC__out MFVideoNormalizedRect *pnrcSource,
            /* [out] */ __RPC__out LPRECT prcDest);
        
        HRESULT ( STDMETHODCALLTYPE *SetAspectRatioMode )( 
            IMFVideoDisplayControl * This,
            /* [in] */ DWORD dwAspectRatioMode);
        
        HRESULT ( STDMETHODCALLTYPE *GetAspectRatioMode )( 
            IMFVideoDisplayControl * This,
            /* [out] */ __RPC__out DWORD *pdwAspectRatioMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetVideoWindow )( 
            IMFVideoDisplayControl * This,
            /* [in] */ __RPC__in HWND hwndVideo);
        
        HRESULT ( STDMETHODCALLTYPE *GetVideoWindow )( 
            IMFVideoDisplayControl * This,
            /* [out] */ __RPC__deref_out_opt HWND *phwndVideo);
        
        HRESULT ( STDMETHODCALLTYPE *RepaintVideo )( 
            IMFVideoDisplayControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentImage )( 
            IMFVideoDisplayControl * This,
            /* [out][in] */ __RPC__inout BITMAPINFOHEADER *pBih,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pcbDib) BYTE **pDib,
            /* [out] */ __RPC__out DWORD *pcbDib,
            /* [unique][out][in] */ __RPC__inout_opt LONGLONG *pTimeStamp);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderColor )( 
            IMFVideoDisplayControl * This,
            /* [in] */ COLORREF Clr);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderColor )( 
            IMFVideoDisplayControl * This,
            /* [out] */ __RPC__out COLORREF *pClr);
        
        HRESULT ( STDMETHODCALLTYPE *SetRenderingPrefs )( 
            IMFVideoDisplayControl * This,
            /* [in] */ DWORD dwRenderFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetRenderingPrefs )( 
            IMFVideoDisplayControl * This,
            /* [out] */ __RPC__out DWORD *pdwRenderFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetFullscreen )( 
            IMFVideoDisplayControl * This,
            /* [in] */ BOOL fFullscreen);
        
        HRESULT ( STDMETHODCALLTYPE *GetFullscreen )( 
            IMFVideoDisplayControl * This,
            /* [out] */ __RPC__out BOOL *pfFullscreen);
        
        END_INTERFACE
    } IMFVideoDisplayControlVtbl;

    interface IMFVideoDisplayControl
    {
        CONST_VTBL struct IMFVideoDisplayControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMFVideoDisplayControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMFVideoDisplayControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMFVideoDisplayControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMFVideoDisplayControl_GetNativeVideoSize(This,pszVideo,pszARVideo)	\
    ( (This)->lpVtbl -> GetNativeVideoSize(This,pszVideo,pszARVideo) ) 

#define IMFVideoDisplayControl_GetIdealVideoSize(This,pszMin,pszMax)	\
    ( (This)->lpVtbl -> GetIdealVideoSize(This,pszMin,pszMax) ) 

#define IMFVideoDisplayControl_SetVideoPosition(This,pnrcSource,prcDest)	\
    ( (This)->lpVtbl -> SetVideoPosition(This,pnrcSource,prcDest) ) 

#define IMFVideoDisplayControl_GetVideoPosition(This,pnrcSource,prcDest)	\
    ( (This)->lpVtbl -> GetVideoPosition(This,pnrcSource,prcDest) ) 

#define IMFVideoDisplayControl_SetAspectRatioMode(This,dwAspectRatioMode)	\
    ( (This)->lpVtbl -> SetAspectRatioMode(This,dwAspectRatioMode) ) 

#define IMFVideoDisplayControl_GetAspectRatioMode(This,pdwAspectRatioMode)	\
    ( (This)->lpVtbl -> GetAspectRatioMode(This,pdwAspectRatioMode) ) 

#define IMFVideoDisplayControl_SetVideoWindow(This,hwndVideo)	\
    ( (This)->lpVtbl -> SetVideoWindow(This,hwndVideo) ) 

#define IMFVideoDisplayControl_GetVideoWindow(This,phwndVideo)	\
    ( (This)->lpVtbl -> GetVideoWindow(This,phwndVideo) ) 

#define IMFVideoDisplayControl_RepaintVideo(This)	\
    ( (This)->lpVtbl -> RepaintVideo(This) ) 

#define IMFVideoDisplayControl_GetCurrentImage(This,pBih,pDib,pcbDib,pTimeStamp)	\
    ( (This)->lpVtbl -> GetCurrentImage(This,pBih,pDib,pcbDib,pTimeStamp) ) 

#define IMFVideoDisplayControl_SetBorderColor(This,Clr)	\
    ( (This)->lpVtbl -> SetBorderColor(This,Clr) ) 

#define IMFVideoDisplayControl_GetBorderColor(This,pClr)	\
    ( (This)->lpVtbl -> GetBorderColor(This,pClr) ) 

#define IMFVideoDisplayControl_SetRenderingPrefs(This,dwRenderFlags)	\
    ( (This)->lpVtbl -> SetRenderingPrefs(This,dwRenderFlags) ) 

#define IMFVideoDisplayControl_GetRenderingPrefs(This,pdwRenderFlags)	\
    ( (This)->lpVtbl -> GetRenderingPrefs(This,pdwRenderFlags) ) 

#define IMFVideoDisplayControl_SetFullscreen(This,fFullscreen)	\
    ( (This)->lpVtbl -> SetFullscreen(This,fFullscreen) ) 

#define IMFVideoDisplayControl_GetFullscreen(This,pfFullscreen)	\
    ( (This)->lpVtbl -> GetFullscreen(This,pfFullscreen) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMFVideoDisplayControl_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_evr_0000_0003 */
/* [local] */ 

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_evr_0000_0003_0001
    {	MFVP_MESSAGE_FLUSH	= 0,
	MFVP_MESSAGE_INVALIDATEMEDIATYPE	= 0x1,
	MFVP_MESSAGE_PROCESSINPUTNOTIFY	= 0x2,
	MFVP_MESSAGE_BEGINSTREAMING	= 0x3,
	MFVP_MESSAGE_ENDSTREAMING	= 0x4,
	MFVP_MESSAGE_ENDOFSTREAM	= 0x5,
	MFVP_MESSAGE_STEP	= 0x6,
	MFVP_MESSAGE_CANCELSTEP	= 0x7
    } 	MFVP_MESSAGE_TYPE;



extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0003_v0_0_s_ifspec;

#ifndef __IMFVideoPresenter_INTERFACE_DEFINED__
#define __IMFVideoPresenter_INTERFACE_DEFINED__

/* interface IMFVideoPresenter */
/* [local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMFVideoPresenter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("29AFF080-182A-4a5d-AF3B-448F3A6346CB")
    IMFVideoPresenter : public IMFClockStateSink
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ProcessMessage( 
            MFVP_MESSAGE_TYPE eMessage,
            ULONG_PTR ulParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentMediaType( 
            /* [out] */ 
            __deref_out  IMFVideoMediaType **ppMediaType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMFVideoPresenterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMFVideoPresenter * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMFVideoPresenter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMFVideoPresenter * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnClockStart )( 
            IMFVideoPresenter * This,
            /* [in] */ MFTIME hnsSystemTime,
            /* [in] */ LONGLONG llClockStartOffset);
        
        HRESULT ( STDMETHODCALLTYPE *OnClockStop )( 
            IMFVideoPresenter * This,
            /* [in] */ MFTIME hnsSystemTime);
        
        HRESULT ( STDMETHODCALLTYPE *OnClockPause )( 
            IMFVideoPresenter * This,
            /* [in] */ MFTIME hnsSystemTime);
        
        HRESULT ( STDMETHODCALLTYPE *OnClockRestart )( 
            IMFVideoPresenter * This,
            /* [in] */ MFTIME hnsSystemTime);
        
        HRESULT ( STDMETHODCALLTYPE *OnClockSetRate )( 
            IMFVideoPresenter * This,
            /* [in] */ MFTIME hnsSystemTime,
            /* [in] */ float flRate);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessMessage )( 
            IMFVideoPresenter * This,
            MFVP_MESSAGE_TYPE eMessage,
            ULONG_PTR ulParam);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentMediaType )( 
            IMFVideoPresenter * This,
            /* [out] */ 
            __deref_out  IMFVideoMediaType **ppMediaType);
        
        END_INTERFACE
    } IMFVideoPresenterVtbl;

    interface IMFVideoPresenter
    {
        CONST_VTBL struct IMFVideoPresenterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMFVideoPresenter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMFVideoPresenter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMFVideoPresenter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMFVideoPresenter_OnClockStart(This,hnsSystemTime,llClockStartOffset)	\
    ( (This)->lpVtbl -> OnClockStart(This,hnsSystemTime,llClockStartOffset) ) 

#define IMFVideoPresenter_OnClockStop(This,hnsSystemTime)	\
    ( (This)->lpVtbl -> OnClockStop(This,hnsSystemTime) ) 

#define IMFVideoPresenter_OnClockPause(This,hnsSystemTime)	\
    ( (This)->lpVtbl -> OnClockPause(This,hnsSystemTime) ) 

#define IMFVideoPresenter_OnClockRestart(This,hnsSystemTime)	\
    ( (This)->lpVtbl -> OnClockRestart(This,hnsSystemTime) ) 

#define IMFVideoPresenter_OnClockSetRate(This,hnsSystemTime,flRate)	\
    ( (This)->lpVtbl -> OnClockSetRate(This,hnsSystemTime,flRate) ) 


#define IMFVideoPresenter_ProcessMessage(This,eMessage,ulParam)	\
    ( (This)->lpVtbl -> ProcessMessage(This,eMessage,ulParam) ) 

#define IMFVideoPresenter_GetCurrentMediaType(This,ppMediaType)	\
    ( (This)->lpVtbl -> GetCurrentMediaType(This,ppMediaType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMFVideoPresenter_INTERFACE_DEFINED__ */


#ifndef __IMFDesiredSample_INTERFACE_DEFINED__
#define __IMFDesiredSample_INTERFACE_DEFINED__

/* interface IMFDesiredSample */
/* [local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMFDesiredSample;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56C294D0-753E-4260-8D61-A3D8820B1D54")
    IMFDesiredSample : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDesiredSampleTimeAndDuration( 
            /* [out] */ 
            __out  LONGLONG *phnsSampleTime,
            /* [out] */ 
            __out  LONGLONG *phnsSampleDuration) = 0;
        
        virtual void STDMETHODCALLTYPE SetDesiredSampleTimeAndDuration( 
            /* [in] */ LONGLONG hnsSampleTime,
            /* [in] */ LONGLONG hnsSampleDuration) = 0;
        
        virtual void STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMFDesiredSampleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMFDesiredSample * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMFDesiredSample * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMFDesiredSample * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDesiredSampleTimeAndDuration )( 
            IMFDesiredSample * This,
            /* [out] */ 
            __out  LONGLONG *phnsSampleTime,
            /* [out] */ 
            __out  LONGLONG *phnsSampleDuration);
        
        void ( STDMETHODCALLTYPE *SetDesiredSampleTimeAndDuration )( 
            IMFDesiredSample * This,
            /* [in] */ LONGLONG hnsSampleTime,
            /* [in] */ LONGLONG hnsSampleDuration);
        
        void ( STDMETHODCALLTYPE *Clear )( 
            IMFDesiredSample * This);
        
        END_INTERFACE
    } IMFDesiredSampleVtbl;

    interface IMFDesiredSample
    {
        CONST_VTBL struct IMFDesiredSampleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMFDesiredSample_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMFDesiredSample_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMFDesiredSample_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMFDesiredSample_GetDesiredSampleTimeAndDuration(This,phnsSampleTime,phnsSampleDuration)	\
    ( (This)->lpVtbl -> GetDesiredSampleTimeAndDuration(This,phnsSampleTime,phnsSampleDuration) ) 

#define IMFDesiredSample_SetDesiredSampleTimeAndDuration(This,hnsSampleTime,hnsSampleDuration)	\
    ( (This)->lpVtbl -> SetDesiredSampleTimeAndDuration(This,hnsSampleTime,hnsSampleDuration) ) 

#define IMFDesiredSample_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMFDesiredSample_INTERFACE_DEFINED__ */


#ifndef __IMFTrackedSample_INTERFACE_DEFINED__
#define __IMFTrackedSample_INTERFACE_DEFINED__

/* interface IMFTrackedSample */
/* [local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMFTrackedSample;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("245BF8E9-0755-40f7-88A5-AE0F18D55E17")
    IMFTrackedSample : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAllocator( 
            /* [in] */ 
            __in  IMFAsyncCallback *pSampleAllocator,
            /* [unique][in] */ IUnknown *pUnkState) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMFTrackedSampleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMFTrackedSample * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMFTrackedSample * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMFTrackedSample * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAllocator )( 
            IMFTrackedSample * This,
            /* [in] */ 
            __in  IMFAsyncCallback *pSampleAllocator,
            /* [unique][in] */ IUnknown *pUnkState);
        
        END_INTERFACE
    } IMFTrackedSampleVtbl;

    interface IMFTrackedSample
    {
        CONST_VTBL struct IMFTrackedSampleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMFTrackedSample_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMFTrackedSample_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMFTrackedSample_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMFTrackedSample_SetAllocator(This,pSampleAllocator,pUnkState)	\
    ( (This)->lpVtbl -> SetAllocator(This,pSampleAllocator,pUnkState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMFTrackedSample_INTERFACE_DEFINED__ */


#ifndef __IMFVideoMixerControl_INTERFACE_DEFINED__
#define __IMFVideoMixerControl_INTERFACE_DEFINED__

/* interface IMFVideoMixerControl */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMFVideoMixerControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A5C6C53F-C202-4aa5-9695-175BA8C508A5")
    IMFVideoMixerControl : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetStreamZOrder( 
            /* [in] */ DWORD dwStreamID,
            /* [in] */ DWORD dwZ) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStreamZOrder( 
            /* [in] */ DWORD dwStreamID,
            /* [out] */ __RPC__out DWORD *pdwZ) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStreamOutputRect( 
            /* [in] */ DWORD dwStreamID,
            /* [in] */ __RPC__in const MFVideoNormalizedRect *pnrcOutput) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStreamOutputRect( 
            /* [in] */ DWORD dwStreamID,
            /* [out] */ __RPC__out MFVideoNormalizedRect *pnrcOutput) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMFVideoMixerControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMFVideoMixerControl * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMFVideoMixerControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMFVideoMixerControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetStreamZOrder )( 
            IMFVideoMixerControl * This,
            /* [in] */ DWORD dwStreamID,
            /* [in] */ DWORD dwZ);
        
        HRESULT ( STDMETHODCALLTYPE *GetStreamZOrder )( 
            IMFVideoMixerControl * This,
            /* [in] */ DWORD dwStreamID,
            /* [out] */ __RPC__out DWORD *pdwZ);
        
        HRESULT ( STDMETHODCALLTYPE *SetStreamOutputRect )( 
            IMFVideoMixerControl * This,
            /* [in] */ DWORD dwStreamID,
            /* [in] */ __RPC__in const MFVideoNormalizedRect *pnrcOutput);
        
        HRESULT ( STDMETHODCALLTYPE *GetStreamOutputRect )( 
            IMFVideoMixerControl * This,
            /* [in] */ DWORD dwStreamID,
            /* [out] */ __RPC__out MFVideoNormalizedRect *pnrcOutput);
        
        END_INTERFACE
    } IMFVideoMixerControlVtbl;

    interface IMFVideoMixerControl
    {
        CONST_VTBL struct IMFVideoMixerControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMFVideoMixerControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMFVideoMixerControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMFVideoMixerControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMFVideoMixerControl_SetStreamZOrder(This,dwStreamID,dwZ)	\
    ( (This)->lpVtbl -> SetStreamZOrder(This,dwStreamID,dwZ) ) 

#define IMFVideoMixerControl_GetStreamZOrder(This,dwStreamID,pdwZ)	\
    ( (This)->lpVtbl -> GetStreamZOrder(This,dwStreamID,pdwZ) ) 

#define IMFVideoMixerControl_SetStreamOutputRect(This,dwStreamID,pnrcOutput)	\
    ( (This)->lpVtbl -> SetStreamOutputRect(This,dwStreamID,pnrcOutput) ) 

#define IMFVideoMixerControl_GetStreamOutputRect(This,dwStreamID,pnrcOutput)	\
    ( (This)->lpVtbl -> GetStreamOutputRect(This,dwStreamID,pnrcOutput) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMFVideoMixerControl_INTERFACE_DEFINED__ */


#ifndef __IMFVideoRenderer_INTERFACE_DEFINED__
#define __IMFVideoRenderer_INTERFACE_DEFINED__

/* interface IMFVideoRenderer */
/* [local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMFVideoRenderer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DFDFD197-A9CA-43d8-B341-6AF3503792CD")
    IMFVideoRenderer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeRenderer( 
            /* [unique][in] */ 
            __in_opt  IMFTransform *pVideoMixer,
            /* [unique][in] */ 
            __in_opt  IMFVideoPresenter *pVideoPresenter) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMFVideoRendererVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMFVideoRenderer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMFVideoRenderer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMFVideoRenderer * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeRenderer )( 
            IMFVideoRenderer * This,
            /* [unique][in] */ 
            __in_opt  IMFTransform *pVideoMixer,
            /* [unique][in] */ 
            __in_opt  IMFVideoPresenter *pVideoPresenter);
        
        END_INTERFACE
    } IMFVideoRendererVtbl;

    interface IMFVideoRenderer
    {
        CONST_VTBL struct IMFVideoRendererVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMFVideoRenderer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMFVideoRenderer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMFVideoRenderer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMFVideoRenderer_InitializeRenderer(This,pVideoMixer,pVideoPresenter)	\
    ( (This)->lpVtbl -> InitializeRenderer(This,pVideoMixer,pVideoPresenter) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMFVideoRenderer_INTERFACE_DEFINED__ */


#ifndef __IEVRFilterConfig_INTERFACE_DEFINED__
#define __IEVRFilterConfig_INTERFACE_DEFINED__

/* interface IEVRFilterConfig */
/* [local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IEVRFilterConfig;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83E91E85-82C1-4ea7-801D-85DC50B75086")
    IEVRFilterConfig : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetNumberOfStreams( 
            /* [in] */ DWORD dwMaxStreams) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumberOfStreams( 
            /* [out] */ 
            __out  DWORD *pdwMaxStreams) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEVRFilterConfigVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEVRFilterConfig * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEVRFilterConfig * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEVRFilterConfig * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetNumberOfStreams )( 
            IEVRFilterConfig * This,
            /* [in] */ DWORD dwMaxStreams);
        
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfStreams )( 
            IEVRFilterConfig * This,
            /* [out] */ 
            __out  DWORD *pdwMaxStreams);
        
        END_INTERFACE
    } IEVRFilterConfigVtbl;

    interface IEVRFilterConfig
    {
        CONST_VTBL struct IEVRFilterConfigVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEVRFilterConfig_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEVRFilterConfig_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEVRFilterConfig_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEVRFilterConfig_SetNumberOfStreams(This,dwMaxStreams)	\
    ( (This)->lpVtbl -> SetNumberOfStreams(This,dwMaxStreams) ) 

#define IEVRFilterConfig_GetNumberOfStreams(This,pdwMaxStreams)	\
    ( (This)->lpVtbl -> GetNumberOfStreams(This,pdwMaxStreams) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEVRFilterConfig_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_evr_0000_0009 */
/* [local] */ 

typedef 
enum _MF_SERVICE_LOOKUP_TYPE
    {	MF_SERVICE_LOOKUP_UPSTREAM	= 0,
	MF_SERVICE_LOOKUP_UPSTREAM_DIRECT	= ( MF_SERVICE_LOOKUP_UPSTREAM + 1 ) ,
	MF_SERVICE_LOOKUP_DOWNSTREAM	= ( MF_SERVICE_LOOKUP_UPSTREAM_DIRECT + 1 ) ,
	MF_SERVICE_LOOKUP_DOWNSTREAM_DIRECT	= ( MF_SERVICE_LOOKUP_DOWNSTREAM + 1 ) ,
	MF_SERVICE_LOOKUP_ALL	= ( MF_SERVICE_LOOKUP_DOWNSTREAM_DIRECT + 1 ) ,
	MF_SERVICE_LOOKUP_GLOBAL	= ( MF_SERVICE_LOOKUP_ALL + 1 ) 
    } 	MF_SERVICE_LOOKUP_TYPE;



extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0009_v0_0_s_ifspec;

#ifndef __IMFTopologyServiceLookup_INTERFACE_DEFINED__
#define __IMFTopologyServiceLookup_INTERFACE_DEFINED__

/* interface IMFTopologyServiceLookup */
/* [local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMFTopologyServiceLookup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fa993889-4383-415a-a930-dd472a8cf6f7")
    IMFTopologyServiceLookup : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LookupService( 
            /* [in] */ MF_SERVICE_LOOKUP_TYPE Type,
            /* [in] */ DWORD dwIndex,
            /* [in] */ REFGUID guidService,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __out_ecount_full(*pnObjects)  LPVOID *ppvObjects,
            /* [out][in] */ 
            __inout  DWORD *pnObjects) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMFTopologyServiceLookupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMFTopologyServiceLookup * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMFTopologyServiceLookup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMFTopologyServiceLookup * This);
        
        HRESULT ( STDMETHODCALLTYPE *LookupService )( 
            IMFTopologyServiceLookup * This,
            /* [in] */ MF_SERVICE_LOOKUP_TYPE Type,
            /* [in] */ DWORD dwIndex,
            /* [in] */ REFGUID guidService,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __out_ecount_full(*pnObjects)  LPVOID *ppvObjects,
            /* [out][in] */ 
            __inout  DWORD *pnObjects);
        
        END_INTERFACE
    } IMFTopologyServiceLookupVtbl;

    interface IMFTopologyServiceLookup
    {
        CONST_VTBL struct IMFTopologyServiceLookupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMFTopologyServiceLookup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMFTopologyServiceLookup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMFTopologyServiceLookup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMFTopologyServiceLookup_LookupService(This,Type,dwIndex,guidService,riid,ppvObjects,pnObjects)	\
    ( (This)->lpVtbl -> LookupService(This,Type,dwIndex,guidService,riid,ppvObjects,pnObjects) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMFTopologyServiceLookup_INTERFACE_DEFINED__ */


#ifndef __IMFTopologyServiceLookupClient_INTERFACE_DEFINED__
#define __IMFTopologyServiceLookupClient_INTERFACE_DEFINED__

/* interface IMFTopologyServiceLookupClient */
/* [uuid][object][local] */ 


EXTERN_C const IID IID_IMFTopologyServiceLookupClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fa99388a-4383-415a-a930-dd472a8cf6f7")
    IMFTopologyServiceLookupClient : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitServicePointers( 
            /* [in] */ 
            __in  IMFTopologyServiceLookup *pLookup) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReleaseServicePointers( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMFTopologyServiceLookupClientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMFTopologyServiceLookupClient * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMFTopologyServiceLookupClient * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMFTopologyServiceLookupClient * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitServicePointers )( 
            IMFTopologyServiceLookupClient * This,
            /* [in] */ 
            __in  IMFTopologyServiceLookup *pLookup);
        
        HRESULT ( STDMETHODCALLTYPE *ReleaseServicePointers )( 
            IMFTopologyServiceLookupClient * This);
        
        END_INTERFACE
    } IMFTopologyServiceLookupClientVtbl;

    interface IMFTopologyServiceLookupClient
    {
        CONST_VTBL struct IMFTopologyServiceLookupClientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMFTopologyServiceLookupClient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMFTopologyServiceLookupClient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMFTopologyServiceLookupClient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMFTopologyServiceLookupClient_InitServicePointers(This,pLookup)	\
    ( (This)->lpVtbl -> InitServicePointers(This,pLookup) ) 

#define IMFTopologyServiceLookupClient_ReleaseServicePointers(This)	\
    ( (This)->lpVtbl -> ReleaseServicePointers(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMFTopologyServiceLookupClient_INTERFACE_DEFINED__ */


#ifndef __IEVRTrustedVideoPlugin_INTERFACE_DEFINED__
#define __IEVRTrustedVideoPlugin_INTERFACE_DEFINED__

/* interface IEVRTrustedVideoPlugin */
/* [local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IEVRTrustedVideoPlugin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83A4CE40-7710-494b-A893-A472049AF630")
    IEVRTrustedVideoPlugin : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsInTrustedVideoMode( 
            /* [out] */ BOOL *pYes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CanConstrict( 
            /* [out] */ BOOL *pYes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetConstriction( 
            DWORD dwKPix) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DisableImageExport( 
            BOOL bDisable) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEVRTrustedVideoPluginVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEVRTrustedVideoPlugin * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEVRTrustedVideoPlugin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEVRTrustedVideoPlugin * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsInTrustedVideoMode )( 
            IEVRTrustedVideoPlugin * This,
            /* [out] */ BOOL *pYes);
        
        HRESULT ( STDMETHODCALLTYPE *CanConstrict )( 
            IEVRTrustedVideoPlugin * This,
            /* [out] */ BOOL *pYes);
        
        HRESULT ( STDMETHODCALLTYPE *SetConstriction )( 
            IEVRTrustedVideoPlugin * This,
            DWORD dwKPix);
        
        HRESULT ( STDMETHODCALLTYPE *DisableImageExport )( 
            IEVRTrustedVideoPlugin * This,
            BOOL bDisable);
        
        END_INTERFACE
    } IEVRTrustedVideoPluginVtbl;

    interface IEVRTrustedVideoPlugin
    {
        CONST_VTBL struct IEVRTrustedVideoPluginVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEVRTrustedVideoPlugin_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEVRTrustedVideoPlugin_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEVRTrustedVideoPlugin_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEVRTrustedVideoPlugin_IsInTrustedVideoMode(This,pYes)	\
    ( (This)->lpVtbl -> IsInTrustedVideoMode(This,pYes) ) 

#define IEVRTrustedVideoPlugin_CanConstrict(This,pYes)	\
    ( (This)->lpVtbl -> CanConstrict(This,pYes) ) 

#define IEVRTrustedVideoPlugin_SetConstriction(This,dwKPix)	\
    ( (This)->lpVtbl -> SetConstriction(This,dwKPix) ) 

#define IEVRTrustedVideoPlugin_DisableImageExport(This,bDisable)	\
    ( (This)->lpVtbl -> DisableImageExport(This,bDisable) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEVRTrustedVideoPlugin_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_evr_0000_0012 */
/* [local] */ 

#if MFEVRDLL
#define EVRPUBLIC(func) STDAPI _##func
#else
#define EVRPUBLIC(func) STDAPI func
#endif
EVRPUBLIC(MFCreateVideoPresenter)(
    __in_opt IUnknown * pOwner,
    REFIID riidDevice,
    REFIID riid,
    __deref_out_opt void ** ppVideoPresenter
    );
EVRPUBLIC(MFCreateVideoMixer)(
    __in_opt IUnknown * pOwner,
    REFIID riidDevice,
    REFIID riid,
    __deref_out_opt void ** ppVideoMixer
    );
EVRPUBLIC(MFCreateVideoMixerAndPresenter)(
    __in_opt IUnknown * pMixerOwner,
    __in_opt IUnknown * pPresenterOwner,
    REFIID riidMixer,
    __deref_out void ** ppvVideoMixer, 
    REFIID riidPresenter,
    __deref_out void ** ppvVideoPresenter
    );
EVRPUBLIC(MFCreateVideoRenderer)(
    REFIID riidRenderer,
    __deref_out_opt void ** ppVideoRenderer
    );
EVRPUBLIC(MFCreateVideoSampleFromSurface)(
    __in_opt IUnknown* pUnkSurface,
    __deref_out_opt IMFSample** ppSample
    );


extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_evr_0000_0012_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long *, HWND * ); 

unsigned long             __RPC_USER  HWND_UserSize64(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal64(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree64(     unsigned long *, HWND * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


