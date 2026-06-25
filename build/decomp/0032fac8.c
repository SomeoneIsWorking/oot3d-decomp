// OoT3D decomp @ 0032fac8  name=FUN_0032fac8  size=112

void FUN_0032fac8(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 0x1710);
  bVar2 = (*(ushort *)(param_1 + 0x90) & 1) == 0;
  if (bVar2) {
    bVar2 = (uVar1 & 0x8a00000) == 0;
  }
  if ((bVar2) &&
     (((uVar1 & 0xc0000) != 0 ||
      (DAT_0032fb38 <= (int)(*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x84)))))) {
    if ((uVar1 & 0x2c0000) != 0) goto LAB_0032fb20;
    uVar1 = uVar1 | 0x80000;
  }
  else {
    uVar1 = uVar1 & 0xbff07fff;
  }
  *(uint *)(param_1 + 0x1710) = uVar1;
LAB_0032fb20:
  *(undefined4 *)(param_1 + 0x16f8) = 0;
  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) & 0xffffdfff;
  return;
}

