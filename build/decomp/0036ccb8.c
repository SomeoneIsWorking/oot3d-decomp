// OoT3D decomp @ 0036ccb8  name=FUN_0036ccb8  size=180

void FUN_0036ccb8(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;

  uVar1 = FUN_0036ae14(param_1 + 0x1e4,5);
  fVar3 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00374a58(DAT_0036cd6c,param_1 + 0x1e4,5);
  *(undefined4 *)(param_1 + 0x6c) = DAT_0036cd70;
  *(undefined4 *)(param_1 + 0x8ec) = 10;
  fVar2 = (float)VectorSignedToFloat((short)(int)fVar3 + 6,(byte)(in_fpscr >> 0x15) & 3);
  if ((short)(int)fVar3 + 6 < 1) {
    fVar2 = fVar2 * DAT_0036cd74 * DAT_0036cd78 - DAT_0036cd78;
  }
  else {
    fVar2 = DAT_0036cd78 + fVar2 * DAT_0036cd74 * DAT_0036cd78;
  }
  *(short *)(DAT_0036cd7c + param_1) = (short)(int)fVar2;
  FUN_00375bcc(param_1,DAT_0036cd80);
  uVar1 = DAT_0036cd84;
  if (*(short *)(param_1 + 0x1c) == -1) {
    uVar1 = DAT_0036cd88;
  }
  *(undefined4 *)(param_1 + 0x8f0) = uVar1;
  return;
}
