/*** Autogenerated by WIDL 0.1 from ddstream.idl - Do not edit ***/
#include <rpc.h>
#include <rpcndr.h>

#ifndef __WIDL_DDSTREAM_H
#define __WIDL_DDSTREAM_H
#ifdef __cplusplus
extern "C" {
#endif
#include <unknwn.h>
#include <mmstream.h>
#ifndef __WINE_DDRAW_H
typedef void *LPDDSURFACEDESC;

typedef struct tDDSURFACEDESC DDSURFACEDESC;

#ifndef __IDirectDraw_FWD_DEFINED__
#define __IDirectDraw_FWD_DEFINED__
typedef struct IDirectDraw IDirectDraw;
#endif

#ifndef __IDirectDrawSurface_FWD_DEFINED__
#define __IDirectDrawSurface_FWD_DEFINED__
typedef struct IDirectDrawSurface IDirectDrawSurface;
#endif

#ifndef __IDirectDrawPalette_FWD_DEFINED__
#define __IDirectDrawPalette_FWD_DEFINED__
typedef struct IDirectDrawPalette IDirectDrawPalette;
#endif

#endif
#include <ddraw.h>
enum {
    DDSFF_PROGRESSIVERENDER = 0x1
};

#ifndef __IDirectDrawMediaStream_FWD_DEFINED__
#define __IDirectDrawMediaStream_FWD_DEFINED__
typedef struct IDirectDrawMediaStream IDirectDrawMediaStream;
#endif

#ifndef __IDirectDrawStreamSample_FWD_DEFINED__
#define __IDirectDrawStreamSample_FWD_DEFINED__
typedef struct IDirectDrawStreamSample IDirectDrawStreamSample;
#endif

/*****************************************************************************
 * IDirectDrawMediaStream interface
 */
#ifndef __IDirectDrawMediaStream_INTERFACE_DEFINED__
#define __IDirectDrawMediaStream_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDirectDrawMediaStream, 0xf4104fce, 0x9a70, 0x11d0, 0x8f,0xde, 0x00,0xc0,0x4f,0xd9,0x18,0x9d);
#if defined(__cplusplus) && !defined(CINTERFACE)
struct IDirectDrawMediaStream : public IMediaStream
{
    virtual HRESULT STDMETHODCALLTYPE GetFormat(
        DDSURFACEDESC* pDDSDCurrent,
        IDirectDrawPalette** ppDirectDrawPalette,
        DDSURFACEDESC* pDDSDDesired,
        DWORD* pdwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetFormat(
        const DDSURFACEDESC* pDDSurfaceDesc,
        IDirectDrawPalette* pDirectDrawPalette) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDirectDraw(
        IDirectDraw** ppDirectDraw) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetDirectDraw(
        IDirectDraw* pDirectDraw) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateSample(
        IDirectDrawSurface* pSurface,
        const RECT* pRect,
        DWORD dwFlags,
        IDirectDrawStreamSample** ppSample) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetTimePerFrame(
        STREAM_TIME* pFrameTime) = 0;

};
#else
typedef struct IDirectDrawMediaStreamVtbl IDirectDrawMediaStreamVtbl;
struct IDirectDrawMediaStream {
    const IDirectDrawMediaStreamVtbl* lpVtbl;
};
struct IDirectDrawMediaStreamVtbl {
    ICOM_MSVTABLE_COMPAT_FIELDS

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDirectDrawMediaStream* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDirectDrawMediaStream* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDirectDrawMediaStream* This);

    /*** IMediaStream methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMultiMediaStream)(
        IDirectDrawMediaStream* This,
        IMultiMediaStream** ppMultiMediaStream);

    HRESULT (STDMETHODCALLTYPE *GetInformation)(
        IDirectDrawMediaStream* This,
        MSPID* pPurposeId,
        STREAM_TYPE* pType);

    HRESULT (STDMETHODCALLTYPE *SetSameFormat)(
        IDirectDrawMediaStream* This,
        IMediaStream* pStreamThatHasDesiredFormat,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *AllocateSample)(
        IDirectDrawMediaStream* This,
        DWORD dwFlags,
        IStreamSample** ppSample);

    HRESULT (STDMETHODCALLTYPE *CreateSharedSample)(
        IDirectDrawMediaStream* This,
        IStreamSample* pExistingSample,
        DWORD dwFlags,
        IStreamSample** ppNewSample);

    HRESULT (STDMETHODCALLTYPE *SendEndOfStream)(
        IDirectDrawMediaStream* This,
        DWORD dwFlags);

    /*** IDirectDrawMediaStream methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFormat)(
        IDirectDrawMediaStream* This,
        DDSURFACEDESC* pDDSDCurrent,
        IDirectDrawPalette** ppDirectDrawPalette,
        DDSURFACEDESC* pDDSDDesired,
        DWORD* pdwFlags);

    HRESULT (STDMETHODCALLTYPE *SetFormat)(
        IDirectDrawMediaStream* This,
        const DDSURFACEDESC* pDDSurfaceDesc,
        IDirectDrawPalette* pDirectDrawPalette);

    HRESULT (STDMETHODCALLTYPE *GetDirectDraw)(
        IDirectDrawMediaStream* This,
        IDirectDraw** ppDirectDraw);

    HRESULT (STDMETHODCALLTYPE *SetDirectDraw)(
        IDirectDrawMediaStream* This,
        IDirectDraw* pDirectDraw);

    HRESULT (STDMETHODCALLTYPE *CreateSample)(
        IDirectDrawMediaStream* This,
        IDirectDrawSurface* pSurface,
        const RECT* pRect,
        DWORD dwFlags,
        IDirectDrawStreamSample** ppSample);

    HRESULT (STDMETHODCALLTYPE *GetTimePerFrame)(
        IDirectDrawMediaStream* This,
        STREAM_TIME* pFrameTime);

};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDirectDrawMediaStream_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirectDrawMediaStream_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IDirectDrawMediaStream_Release(p) (p)->lpVtbl->Release(p)
/*** IMediaStream methods ***/
#define IDirectDrawMediaStream_GetMultiMediaStream(p,a) (p)->lpVtbl->GetMultiMediaStream(p,a)
#define IDirectDrawMediaStream_GetInformation(p,a,b) (p)->lpVtbl->GetInformation(p,a,b)
#define IDirectDrawMediaStream_SetSameFormat(p,a,b) (p)->lpVtbl->SetSameFormat(p,a,b)
#define IDirectDrawMediaStream_AllocateSample(p,a,b) (p)->lpVtbl->AllocateSample(p,a,b)
#define IDirectDrawMediaStream_CreateSharedSample(p,a,b,c) (p)->lpVtbl->CreateSharedSample(p,a,b,c)
#define IDirectDrawMediaStream_SendEndOfStream(p,a) (p)->lpVtbl->SendEndOfStream(p,a)
/*** IDirectDrawMediaStream methods ***/
#define IDirectDrawMediaStream_GetFormat(p,a,b,c,d) (p)->lpVtbl->GetFormat(p,a,b,c,d)
#define IDirectDrawMediaStream_SetFormat(p,a,b) (p)->lpVtbl->SetFormat(p,a,b)
#define IDirectDrawMediaStream_GetDirectDraw(p,a) (p)->lpVtbl->GetDirectDraw(p,a)
#define IDirectDrawMediaStream_SetDirectDraw(p,a) (p)->lpVtbl->SetDirectDraw(p,a)
#define IDirectDrawMediaStream_CreateSample(p,a,b,c,d) (p)->lpVtbl->CreateSample(p,a,b,c,d)
#define IDirectDrawMediaStream_GetTimePerFrame(p,a) (p)->lpVtbl->GetTimePerFrame(p,a)
#endif

#endif

#define IDirectDrawMediaStream_METHODS \
    ICOM_MSVTABLE_COMPAT_FIELDS \
    /*** IUnknown methods ***/ \
    STDMETHOD_(HRESULT,QueryInterface)(THIS_ REFIID riid, void** ppvObject) PURE; \
    STDMETHOD_(ULONG,AddRef)(THIS) PURE; \
    STDMETHOD_(ULONG,Release)(THIS) PURE; \
    /*** IMediaStream methods ***/ \
    STDMETHOD_(HRESULT,GetMultiMediaStream)(THIS_ IMultiMediaStream** ppMultiMediaStream) PURE; \
    STDMETHOD_(HRESULT,GetInformation)(THIS_ MSPID* pPurposeId, STREAM_TYPE* pType) PURE; \
    STDMETHOD_(HRESULT,SetSameFormat)(THIS_ IMediaStream* pStreamThatHasDesiredFormat, DWORD dwFlags) PURE; \
    STDMETHOD_(HRESULT,AllocateSample)(THIS_ DWORD dwFlags, IStreamSample** ppSample) PURE; \
    STDMETHOD_(HRESULT,CreateSharedSample)(THIS_ IStreamSample* pExistingSample, DWORD dwFlags, IStreamSample** ppNewSample) PURE; \
    STDMETHOD_(HRESULT,SendEndOfStream)(THIS_ DWORD dwFlags) PURE; \
    /*** IDirectDrawMediaStream methods ***/ \
    STDMETHOD_(HRESULT,GetFormat)(THIS_ DDSURFACEDESC* pDDSDCurrent, IDirectDrawPalette** ppDirectDrawPalette, DDSURFACEDESC* pDDSDDesired, DWORD* pdwFlags) PURE; \
    STDMETHOD_(HRESULT,SetFormat)(THIS_ const DDSURFACEDESC* pDDSurfaceDesc, IDirectDrawPalette* pDirectDrawPalette) PURE; \
    STDMETHOD_(HRESULT,GetDirectDraw)(THIS_ IDirectDraw** ppDirectDraw) PURE; \
    STDMETHOD_(HRESULT,SetDirectDraw)(THIS_ IDirectDraw* pDirectDraw) PURE; \
    STDMETHOD_(HRESULT,CreateSample)(THIS_ IDirectDrawSurface* pSurface, const RECT* pRect, DWORD dwFlags, IDirectDrawStreamSample** ppSample) PURE; \
    STDMETHOD_(HRESULT,GetTimePerFrame)(THIS_ STREAM_TIME* pFrameTime) PURE;

HRESULT CALLBACK IDirectDrawMediaStream_GetFormat_Proxy(
    IDirectDrawMediaStream* This,
    DDSURFACEDESC* pDDSDCurrent,
    IDirectDrawPalette** ppDirectDrawPalette,
    DDSURFACEDESC* pDDSDDesired,
    DWORD* pdwFlags);
void __RPC_STUB IDirectDrawMediaStream_GetFormat_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDirectDrawMediaStream_SetFormat_Proxy(
    IDirectDrawMediaStream* This,
    const DDSURFACEDESC* pDDSurfaceDesc,
    IDirectDrawPalette* pDirectDrawPalette);
void __RPC_STUB IDirectDrawMediaStream_SetFormat_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDirectDrawMediaStream_GetDirectDraw_Proxy(
    IDirectDrawMediaStream* This,
    IDirectDraw** ppDirectDraw);
void __RPC_STUB IDirectDrawMediaStream_GetDirectDraw_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDirectDrawMediaStream_SetDirectDraw_Proxy(
    IDirectDrawMediaStream* This,
    IDirectDraw* pDirectDraw);
void __RPC_STUB IDirectDrawMediaStream_SetDirectDraw_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDirectDrawMediaStream_CreateSample_Proxy(
    IDirectDrawMediaStream* This,
    IDirectDrawSurface* pSurface,
    const RECT* pRect,
    DWORD dwFlags,
    IDirectDrawStreamSample** ppSample);
void __RPC_STUB IDirectDrawMediaStream_CreateSample_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDirectDrawMediaStream_GetTimePerFrame_Proxy(
    IDirectDrawMediaStream* This,
    STREAM_TIME* pFrameTime);
void __RPC_STUB IDirectDrawMediaStream_GetTimePerFrame_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IDirectDrawMediaStream_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDirectDrawStreamSample interface
 */
#ifndef __IDirectDrawStreamSample_INTERFACE_DEFINED__
#define __IDirectDrawStreamSample_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDirectDrawStreamSample, 0xf4104fcf, 0x9a70, 0x11d0, 0x8f,0xde, 0x00,0xc0,0x4f,0xd9,0x18,0x9d);
#if defined(__cplusplus) && !defined(CINTERFACE)
struct IDirectDrawStreamSample : public IStreamSample
{
    virtual HRESULT STDMETHODCALLTYPE GetSurface(
        IDirectDrawSurface** ppDirectDrawSurface,
        RECT* pRect) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetRect(
        const RECT* pRect) = 0;

};
#else
typedef struct IDirectDrawStreamSampleVtbl IDirectDrawStreamSampleVtbl;
struct IDirectDrawStreamSample {
    const IDirectDrawStreamSampleVtbl* lpVtbl;
};
struct IDirectDrawStreamSampleVtbl {
    ICOM_MSVTABLE_COMPAT_FIELDS

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDirectDrawStreamSample* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDirectDrawStreamSample* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDirectDrawStreamSample* This);

    /*** IStreamSample methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMediaStream)(
        IDirectDrawStreamSample* This,
        IMediaStream** ppMediaStream);

    HRESULT (STDMETHODCALLTYPE *GetSampleTimes)(
        IDirectDrawStreamSample* This,
        STREAM_TIME* pStartTime,
        STREAM_TIME* pEndTime,
        STREAM_TIME* pCurrentTime);

    HRESULT (STDMETHODCALLTYPE *SetSampleTimes)(
        IDirectDrawStreamSample* This,
        const STREAM_TIME* pStartTime,
        const STREAM_TIME* pEndTime);

    HRESULT (STDMETHODCALLTYPE *Update)(
        IDirectDrawStreamSample* This,
        DWORD dwFlags,
        HANDLE hEvent,
        PAPCFUNC pfnAPC,
        DWORD dwAPCData);

    HRESULT (STDMETHODCALLTYPE *CompletionStatus)(
        IDirectDrawStreamSample* This,
        DWORD dwFlags,
        DWORD dwMilliseconds);

    /*** IDirectDrawStreamSample methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSurface)(
        IDirectDrawStreamSample* This,
        IDirectDrawSurface** ppDirectDrawSurface,
        RECT* pRect);

    HRESULT (STDMETHODCALLTYPE *SetRect)(
        IDirectDrawStreamSample* This,
        const RECT* pRect);

};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDirectDrawStreamSample_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirectDrawStreamSample_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IDirectDrawStreamSample_Release(p) (p)->lpVtbl->Release(p)
/*** IStreamSample methods ***/
#define IDirectDrawStreamSample_GetMediaStream(p,a) (p)->lpVtbl->GetMediaStream(p,a)
#define IDirectDrawStreamSample_GetSampleTimes(p,a,b,c) (p)->lpVtbl->GetSampleTimes(p,a,b,c)
#define IDirectDrawStreamSample_SetSampleTimes(p,a,b) (p)->lpVtbl->SetSampleTimes(p,a,b)
#define IDirectDrawStreamSample_Update(p,a,b,c,d) (p)->lpVtbl->Update(p,a,b,c,d)
#define IDirectDrawStreamSample_CompletionStatus(p,a,b) (p)->lpVtbl->CompletionStatus(p,a,b)
/*** IDirectDrawStreamSample methods ***/
#define IDirectDrawStreamSample_GetSurface(p,a,b) (p)->lpVtbl->GetSurface(p,a,b)
#define IDirectDrawStreamSample_SetRect(p,a) (p)->lpVtbl->SetRect(p,a)
#endif

#endif

#define IDirectDrawStreamSample_METHODS \
    ICOM_MSVTABLE_COMPAT_FIELDS \
    /*** IUnknown methods ***/ \
    STDMETHOD_(HRESULT,QueryInterface)(THIS_ REFIID riid, void** ppvObject) PURE; \
    STDMETHOD_(ULONG,AddRef)(THIS) PURE; \
    STDMETHOD_(ULONG,Release)(THIS) PURE; \
    /*** IStreamSample methods ***/ \
    STDMETHOD_(HRESULT,GetMediaStream)(THIS_ IMediaStream** ppMediaStream) PURE; \
    STDMETHOD_(HRESULT,GetSampleTimes)(THIS_ STREAM_TIME* pStartTime, STREAM_TIME* pEndTime, STREAM_TIME* pCurrentTime) PURE; \
    STDMETHOD_(HRESULT,SetSampleTimes)(THIS_ const STREAM_TIME* pStartTime, const STREAM_TIME* pEndTime) PURE; \
    STDMETHOD_(HRESULT,Update)(THIS_ DWORD dwFlags, HANDLE hEvent, PAPCFUNC pfnAPC, DWORD dwAPCData) PURE; \
    STDMETHOD_(HRESULT,CompletionStatus)(THIS_ DWORD dwFlags, DWORD dwMilliseconds) PURE; \
    /*** IDirectDrawStreamSample methods ***/ \
    STDMETHOD_(HRESULT,GetSurface)(THIS_ IDirectDrawSurface** ppDirectDrawSurface, RECT* pRect) PURE; \
    STDMETHOD_(HRESULT,SetRect)(THIS_ const RECT* pRect) PURE;

HRESULT CALLBACK IDirectDrawStreamSample_GetSurface_Proxy(
    IDirectDrawStreamSample* This,
    IDirectDrawSurface** ppDirectDrawSurface,
    RECT* pRect);
void __RPC_STUB IDirectDrawStreamSample_GetSurface_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IDirectDrawStreamSample_SetRect_Proxy(
    IDirectDrawStreamSample* This,
    const RECT* pRect);
void __RPC_STUB IDirectDrawStreamSample_SetRect_Stub(
    struct IRpcStubBuffer* This,
    struct IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IDirectDrawStreamSample_INTERFACE_DEFINED__ */

#ifdef __cplusplus
}
#endif
#endif /* __WIDL_DDSTREAM_H */
