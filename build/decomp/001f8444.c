// OoT3D decomp @ 001f8444  name=FUN_001f8444  size=140

void FUN_001f8444(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  *(uint *)(param_1 + 0x1a8) = *(ushort *)(param_1 + 0x1c) & 0xff;
  uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x1b0,0,0);
  uVar2 = FUN_00372f0c(uVar2,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0xc),uVar2);
  uVar2 = DAT_001f84d0;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1b0) + 0xc) + 0x10) = 1;
  uVar1 = DAT_001f84d4;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1b0) + 0xc) + 0xc) = uVar2;
  FUN_003510b0(param_1,uVar1);
  uVar2 = DAT_001f84dc;
  if (*(int *)(param_1 + 0x1a8) == 1) {
    *(undefined4 *)(param_1 + 0x58) = DAT_001f84d8;
  }
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  return;
}
