// OoT3D decomp @ 00393dd4  name=FUN_00393dd4  size=112

void FUN_00393dd4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;

  uVar3 = FUN_0036ae14(param_1 + 0x1a4,3);
  uVar1 = DAT_00393e50;
  fVar4 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00393e50,DAT_00393e4c,fVar4 - DAT_00393e44,DAT_00393e48,param_1 + 0x1a4,3,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  iVar2 = DAT_00393e58;
  *(undefined1 *)(param_1 + 0x84b) = 3;
  *(short *)(iVar2 + param_1) = (short)DAT_00393e54;
  *(undefined4 *)(param_1 + 0x844) = DAT_00393e5c;
  return;
}
