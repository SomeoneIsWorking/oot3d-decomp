// OoT3D decomp @ 003b9cf0  name=FUN_003b9cf0  size=284

void FUN_003b9cf0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;

  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = uRam003b9e10;
  FUN_003705a0(uRam003b9e10,uRam003b9e0c,param_1 + 0x54);
  fVar2 = fRam003b9e14;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  iVar3 = FUN_003705a0(*(float *)(param_1 + 0xc) + fVar2,uRam003b9e18,param_1 + 0x2c);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x228) != iRam003b9e1c) {
      FUN_0037572c(uVar1,param_1);
      *(undefined1 *)(param_1 + 0x3d4) = 6;
      uVar1 = uRam003b9e2c;
      *(byte *)(param_1 + 0x3d1) = *(byte *)(param_1 + 0x3d1) & 0xfb;
      uVar4 = uRam003b9e24;
      if (*(int *)(iRam003b9e20 + 4) != 0) {
        uVar4 = uRam003b9e28;
      }
      *(undefined4 *)(param_1 + 0x3e0) = uVar4;
      *(undefined4 *)(param_1 + 0x400) = uVar1;
      uVar1 = uRam003b9e30;
      *(undefined4 *)(param_1 + 0x404) = uRam003b9e30;
      *(undefined4 *)(param_1 + 0x3ac) = uVar1;
    }
    *(undefined2 *)(param_1 + 0x1c) = 0x28;
    *(undefined4 *)(param_1 + 0x228) = uRam003b9e34;
  }
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x1999;
  FUN_0036f9d0(uRam003b9e38,param_2,param_1 + 8,0,0xc,5,1,0xffffffff,10,0);
  return;
}
