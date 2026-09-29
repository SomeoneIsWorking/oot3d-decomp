// OoT3D decomp @ 0035239c  name=FUN_0035239c  size=56

void FUN_0035239c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;

  iVar2 = DAT_003523d8;
  iVar1 = DAT_003523d4;
  *(undefined2 *)(DAT_003523d4 + 0x66) = 0x8c;
  *(undefined2 *)(iVar1 + 0x6a) = 0x50;
  *(undefined2 *)(iVar2 + 0x10) = 0;
  *(short *)(iVar1 + 0x60) = (short)param_1;
  if (param_1 == 0) {
    uVar3 = 0xb;
  }
  else {
    uVar3 = 5;
  }
  *(undefined2 *)(iVar1 + 0x5e) = uVar3;
  return;
}
