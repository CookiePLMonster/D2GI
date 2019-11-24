#pragma once

#include "../common/common.h"
#include "../common/d3d7.h"


class DeviceProxy : public D3D7::IDirect3DDevice7, public Unknown
{
public:
	DeviceProxy();
	virtual ~DeviceProxy();

	STDMETHOD(QueryInterface)(REFIID riid, LPVOID* ppvObj) { return Unknown::QueryInterface(riid, ppvObj); };
	STDMETHOD_(ULONG, AddRef)() { return Unknown::AddRef(); };
	STDMETHOD_(ULONG, Release)() { return Unknown::Release(); };

	STDMETHOD(GetCaps)(D3D7::LPD3DDEVICEDESC7);
	STDMETHOD(EnumTextureFormats)(D3D7::LPD3DENUMPIXELFORMATSCALLBACK, LPVOID);
	STDMETHOD(BeginScene)();
	STDMETHOD(EndScene)();
	STDMETHOD(GetDirect3D)(D3D7::LPDIRECT3D7*);
	STDMETHOD(SetRenderTarget)(D3D7::LPDIRECTDRAWSURFACE7, DWORD);
	STDMETHOD(GetRenderTarget)(D3D7::LPDIRECTDRAWSURFACE7*);
	STDMETHOD(Clear)( DWORD, D3D7::LPD3DRECT, DWORD, D3D7::D3DCOLOR, D3D7::D3DVALUE, DWORD);
	STDMETHOD(SetTransform)(D3D7::D3DTRANSFORMSTATETYPE, D3D7::LPD3DMATRIX);
	STDMETHOD(GetTransform)(D3D7::D3DTRANSFORMSTATETYPE, D3D7::LPD3DMATRIX);
	STDMETHOD(SetViewport)(D3D7::LPD3DVIEWPORT7);
	STDMETHOD(MultiplyTransform)(D3D7::D3DTRANSFORMSTATETYPE, D3D7::LPD3DMATRIX);
	STDMETHOD(GetViewport)(D3D7::LPD3DVIEWPORT7);
	STDMETHOD(SetMaterial)(D3D7::LPD3DMATERIAL7);
	STDMETHOD(GetMaterial)(D3D7::LPD3DMATERIAL7);
	STDMETHOD(SetLight)( DWORD, D3D7::LPD3DLIGHT7);
	STDMETHOD(GetLight)( DWORD, D3D7::LPD3DLIGHT7);
	STDMETHOD(SetRenderState)(D3D7::D3DRENDERSTATETYPE, DWORD);
	STDMETHOD(GetRenderState)(D3D7::D3DRENDERSTATETYPE, LPDWORD);
	STDMETHOD(BeginStateBlock)();
	STDMETHOD(EndStateBlock)( LPDWORD);
	STDMETHOD(PreLoad)(D3D7::LPDIRECTDRAWSURFACE7);
	STDMETHOD(DrawPrimitive)(D3D7::D3DPRIMITIVETYPE, DWORD, LPVOID, DWORD, DWORD);
	STDMETHOD(DrawIndexedPrimitive)(D3D7::D3DPRIMITIVETYPE, DWORD, LPVOID, DWORD, LPWORD, DWORD, DWORD);
	STDMETHOD(SetClipStatus)(D3D7::LPD3DCLIPSTATUS);
	STDMETHOD(GetClipStatus)(D3D7::LPD3DCLIPSTATUS);
	STDMETHOD(DrawPrimitiveStrided)(D3D7::D3DPRIMITIVETYPE, DWORD, D3D7::LPD3DDRAWPRIMITIVESTRIDEDDATA, DWORD, DWORD);
	STDMETHOD(DrawIndexedPrimitiveStrided)(D3D7::D3DPRIMITIVETYPE, DWORD, D3D7::LPD3DDRAWPRIMITIVESTRIDEDDATA, DWORD, LPWORD, DWORD, DWORD);
	STDMETHOD(DrawPrimitiveVB)(D3D7::D3DPRIMITIVETYPE, D3D7::LPDIRECT3DVERTEXBUFFER7, DWORD, DWORD, DWORD);
	STDMETHOD(DrawIndexedPrimitiveVB)(D3D7::D3DPRIMITIVETYPE, D3D7::LPDIRECT3DVERTEXBUFFER7, DWORD, DWORD, LPWORD, DWORD, DWORD);
	STDMETHOD(ComputeSphereVisibility)(D3D7::LPD3DVECTOR, D3D7::LPD3DVALUE, DWORD, DWORD, LPDWORD);
	STDMETHOD(GetTexture)( DWORD, D3D7::LPDIRECTDRAWSURFACE7*);
	STDMETHOD(SetTexture)( DWORD, D3D7::LPDIRECTDRAWSURFACE7);
	STDMETHOD(GetTextureStageState)( DWORD, D3D7::D3DTEXTURESTAGESTATETYPE, LPDWORD);
	STDMETHOD(SetTextureStageState)( DWORD, D3D7::D3DTEXTURESTAGESTATETYPE, DWORD);
	STDMETHOD(ValidateDevice)( LPDWORD);
	STDMETHOD(ApplyStateBlock)( DWORD);
	STDMETHOD(CaptureStateBlock)( DWORD);
	STDMETHOD(DeleteStateBlock)( DWORD);
	STDMETHOD(CreateStateBlock)(D3D7::D3DSTATEBLOCKTYPE, LPDWORD);
	STDMETHOD(Load)(D3D7::LPDIRECTDRAWSURFACE7, LPPOINT, D3D7::LPDIRECTDRAWSURFACE7, LPRECT, DWORD);
	STDMETHOD(LightEnable)( DWORD, BOOL);
	STDMETHOD(GetLightEnable)( DWORD, BOOL*);
	STDMETHOD(SetClipPlane)( DWORD, D3D7::D3DVALUE*);
	STDMETHOD(GetClipPlane)( DWORD, D3D7::D3DVALUE*);
	STDMETHOD(GetInfo)( DWORD, LPVOID, DWORD);
};