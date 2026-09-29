// OoT3D decomp @ 0027433c  name=FUN_0027433c  size=108

void FUN_0027433c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined4 uVar4;

  uVar3 = FUN_0036ae14(param_1 + 0x2fc,6);
  uVar2 = DAT_002743b0;
  uVar1 = DAT_002743ac;
  uVar4 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(DAT_002743a8 + param_1) = (short)uVar3;
  FUN_00375c08(DAT_002743b4,uVar2,uVar4,uVar1,param_1 + 0x2fc,6,0);
  *(undefined4 *)(param_1 + 0x6c) = DAT_002743b8;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  uVar1 = DAT_002743bc;
  *(undefined4 *)(param_1 + 0x2e8) = uVar2;
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  return;
}
