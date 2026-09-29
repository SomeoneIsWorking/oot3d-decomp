// OoT3D decomp @ 00371e6c  name=FUN_00371e6c  size=56

void FUN_00371e6c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;

  iVar2 = DAT_00371ea8;
  iVar1 = DAT_00371ea4;
  *(undefined2 *)(DAT_00371ea4 + 0x68) = 0x8c;
  *(undefined2 *)(iVar1 + 0x6c) = 0x50;
  *(undefined2 *)(iVar2 + 0x10) = 0;
  *(short *)(iVar1 + 100) = (short)param_1;
  if (param_1 == 0) {
    uVar3 = 7;
  }
  else {
    uVar3 = 1;
  }
  *(undefined2 *)(iVar1 + 0x62) = uVar3;
  return;
}
