// OoT3D decomp @ 00399178  name=FUN_00399178  size=368

void FUN_00399178(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  undefined1 auStack_18 [4];
  short sStack_14;

  FUN_0031cb28();
  FUN_00375a18(param_1 + 0xfea,0,1,4000,0);
  FUN_00375a18(param_1 + 0xfe8,0,1,4000,0);
  FUN_00375a18(param_1 + 0xff0,0,1,4000,0);
  FUN_00375a18(param_1 + 0xfee,0,1,4000,0);
  uVar2 = uRam003992e8;
  FUN_00375a18(param_1 + 0xff6,(int)(short)(*(short *)(param_1 + 0xbe) - *(short *)(param_1 + 0xbc))
               ,1,uRam003992e8,0);
  FUN_00334e70(*(int *)(param_1 + 0x21c) + 0x9c,auStack_18,0);
  FUN_00375a18(param_1 + 0xff4,(int)sStack_14,1,uVar2,0);
  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar1 != 0) {
    if (*(byte *)(iRam003992ec + 8) < 0xf) {
      FUN_0031b034(param_1,param_2);
      return;
    }
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,0xd);
    fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(fRam003992f0,fVar3 - fRam003992f0,fVar3,uRam003992f4,param_1 + 0x1a4,0xd,1);
    *(undefined1 *)(param_1 + 0xf95) = 0;
    *(undefined4 *)(param_1 + 0xf90) = uRam003992f8;
  }
  return;
}
