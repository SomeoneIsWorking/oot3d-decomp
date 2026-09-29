// OoT3D decomp @ 00364394  name=FUN_00364394  size=128

void FUN_00364394(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;

  uVar1 = DAT_00364414;
  *(undefined2 *)(param_1 + 0x22e) = *(undefined2 *)(param_1 + 0xbe);
  fVar2 = (float)FUN_00372674(uVar1);
  uVar1 = DAT_0036441c;
  *(float *)(param_1 + 0x7e0) = *(float *)(param_1 + 0x2c) + fVar2 * DAT_00364418;
  FUN_00370350(uVar1,param_1 + 0x1a4,2);
  *(undefined2 *)(param_1 + 0x22c) = 0x2d;
  uVar1 = DAT_00364428;
  iVar3 = *(int *)(param_1 + 0x6c);
  if (DAT_00364420 < *(int *)(param_1 + 0x6c)) {
    iVar3 = DAT_00364424;
  }
  *(int *)(param_1 + 0x6c) = iVar3;
  *(undefined4 *)(param_1 + 0x7e4) = *(undefined4 *)(param_1 + 0x84);
  *(byte *)(param_1 + 0x7f8) = *(byte *)(param_1 + 0x7f8) & 0xfe;
  *(undefined4 *)(param_1 + 0x228) = uVar1;
  return;
}
