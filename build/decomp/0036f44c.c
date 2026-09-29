// OoT3D decomp @ 0036f44c  name=FUN_0036f44c  size=108

void FUN_0036f44c(int param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  bool bVar3;

  FUN_00375c08(DAT_0036f4c4,DAT_0036f4c0,DAT_0036f4bc,DAT_0036f4b8,param_1 + 0x1a4,2);
  bVar3 = *(float *)(param_1 + 0x6c) == DAT_0036f4c8;
  if (DAT_0036f4c8 <= *(float *)(param_1 + 0x6c)) {
    bVar3 = *(int *)(param_1 + 0x7d8) == DAT_0036f4cc;
  }
  if (bVar3) {
    uVar2 = 0x44;
  }
  else {
    uVar2 = 0x2d;
  }
  *(undefined2 *)(param_1 + 0x7dc) = uVar2;
  uVar1 = DAT_0036f4d4;
  *(undefined4 *)(param_1 + 0x70) = DAT_0036f4d0;
  *(undefined4 *)(param_1 + 0x7d8) = uVar1;
  return;
}
