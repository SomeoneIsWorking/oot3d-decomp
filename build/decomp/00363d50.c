// OoT3D decomp @ 00363d50  name=FUN_00363d50  size=244

void FUN_00363d50(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;

  uVar2 = DAT_00363e48;
  uVar1 = DAT_00363e44;
  *(undefined4 *)(param_1 + 0x6c) = DAT_00363e44;
  iVar4 = (int)(short)(*(short *)(param_1 + 0x7de) - *(short *)(param_1 + 0xbe));
  if (iVar4 < 1) {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,3);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_00363e4c,uVar3,uVar1,uVar2,param_1 + 0x1a4,3,2);
  }
  else {
    FUN_00374a58(uVar2,param_1 + 0x1a4,3);
  }
  if (DAT_00363e50 < *(int *)(param_1 + 0x54)) {
    fVar5 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x7de) = (short)(int)(fVar5 * DAT_00363e54);
  }
  else {
    FUN_0036f4e4(*(float *)(param_1 + 0x1e4) * DAT_00363e58,param_1 + 0x1a4);
    fVar5 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x7de) = (short)(int)(fVar5 * DAT_00363e5c);
  }
  *(undefined4 *)(param_1 + 0x7d8) = DAT_00363e60;
  return;
}
