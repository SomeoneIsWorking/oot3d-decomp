// OoT3D decomp @ 0045699c  name=FUN_0045699c  size=36

void FUN_0045699c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar2 = DAT_004569c4;
  uVar1 = DAT_004569c0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  uVar3 = DAT_004569c8;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  return;
}
