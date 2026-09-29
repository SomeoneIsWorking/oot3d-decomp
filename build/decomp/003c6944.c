// OoT3D decomp @ 003c6944  name=FUN_003c6944  size=336

void FUN_003c6944(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined4 uVar4;

  uVar4 = DAT_003c6a94;
  FUN_0036e168(DAT_003c6a94,DAT_003c6a98,DAT_003c6a98,DAT_003c6a94,param_1 + 0x6c);
  iVar1 = FUN_00232fac(param_1,param_1 + 0xe20,param_2,(int)(short)(*(short *)(param_1 + 0x1c) + 4),
                       0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xe2c) = 0;
  }
  iVar1 = FUN_00370734(param_1 + 0x1a4);
  if (iVar1 != 0) {
    if ((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x4000U < 0x8001) {
      uVar2 = FUN_0036ae14(param_1 + 0x1a4,0xc);
      uVar3 = DAT_003c6a9c;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 5;
      uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
      *(undefined1 *)(param_1 + 0xe0c) = 4;
      FUN_00375c08(uVar4,uVar4,uVar2,uVar3,param_1 + 0x1a4,0xc,0);
      *(undefined4 *)(param_1 + 0xe1c) = DAT_003c6aa0;
      FUN_0036d188(param_1,param_2);
      return;
    }
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,3);
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    *(undefined1 *)(param_1 + 0xe0c) = 1;
    uVar4 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined1 *)(param_1 + 0xe13) = 3;
    FUN_00375c08(DAT_003c6aac,DAT_003c6aa8,uVar4,DAT_003c6aa4,param_1 + 0x1a4,3,3);
    *(undefined4 *)(param_1 + 0xe1c) = DAT_003c6ab0;
  }
  return;
}
