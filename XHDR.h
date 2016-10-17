
#pragma once

#include "XDirectX12.h"
#include "d3dx12.h"

bool InitHDR(ID3D12Device* pDevice, UINT uWidth, UINT uHeight);
void CleanHDR();

void HDR_Bind(ID3D12GraphicsCommandList* pCommandList);
void HDR_ToneMapping(ID3D12GraphicsCommandList* pCommandList);

struct HDRConstantBuffer
{
	UINT			uDispatchX, uDispatchY;
	UINT			uScreenX, uScreenY;
	FLOAT			fValue;
	FLOAT			fPadding[59];
};