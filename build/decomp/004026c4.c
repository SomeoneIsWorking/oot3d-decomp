// OoT3D decomp @ 004026c4  name=FUN_004026c4  size=76

void FUN_004026c4(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;

  *param_1 = DAT_00402710;
  param_1[1] = 0;
  iVar2 = FUN_00350820(param_1 + 2,DAT_00402714,0x10,4);
  uVar1 = DAT_00402718;
  *(undefined4 *)(iVar2 + 0x40) = DAT_00402718;
  *(undefined4 *)(iVar2 + 0x44) = uVar1;
  *(undefined4 *)(iVar2 + 0x48) = DAT_0040271c;
  *(undefined1 *)(iVar2 + 0x4c) = 0;
  *(undefined1 *)(iVar2 + 0x4d) = 1;
  return;
}
