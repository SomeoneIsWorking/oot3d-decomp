// OoT3D decomp @ 0030c5b8  name=FUN_0030c5b8  size=276

void FUN_0030c5b8(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  *param_1 = 0;
  param_1[1] = 1;
  uVar1 = DAT_0030c6cc;
  param_1[2] = 2;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar2 = FUN_00350820(param_1 + 0x24,DAT_0030c6d0,0x10,2);
  iVar2 = FUN_00350820(iVar2 + 0x20,DAT_0030c6d0,0x10,2);
  iVar2 = FUN_00350820(iVar2 + 0x20,DAT_0030c6d4,0xc,2);
  iVar2 = FUN_00350820(iVar2 + 0x22c,DAT_0030c6d8,8,2);
  uVar1 = DAT_0030c6dc;
  iVar3 = iVar2 + -0x290;
  iVar4 = 0;
  *(undefined4 *)(iVar2 + -0x28c) = DAT_0030c6dc;
  *(undefined4 *)(iVar2 + -0x288) = uVar1;
  *(undefined4 *)(iVar2 + -0x284) = 0;
  *(undefined4 *)(iVar2 + -0x280) = 0;
  *(undefined4 *)(iVar2 + -0x27c) = uVar1;
  *(undefined4 *)(iVar2 + -0x278) = uVar1;
  *(undefined4 *)(iVar2 + -0x274) = 0;
  *(undefined4 *)(iVar2 + -0x270) = 0;
  do {
    iVar5 = iVar3 + iVar4 * 0x10;
    iVar2 = iVar3 + iVar4 * 4;
    *(undefined4 *)(iVar5 + 0x24) = uVar1;
    *(undefined4 *)(iVar5 + 0x28) = uVar1;
    *(undefined4 *)(iVar5 + 0x2c) = 0;
    *(undefined4 *)(iVar5 + 0x30) = 0;
    *(undefined4 *)(iVar5 + 0x44) = uVar1;
    *(undefined4 *)(iVar5 + 0x48) = uVar1;
    *(undefined4 *)(iVar5 + 0x4c) = 0;
    *(undefined4 *)(iVar5 + 0x50) = 0;
    *(undefined4 *)(iVar2 + 0x7c) = 0;
    *(undefined4 *)(iVar2 + 0x284) = 0;
    iVar2 = iVar3 + iVar4 * 8;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar2 + 0x290) = 0;
    *(undefined4 *)(iVar2 + 0x294) = 0;
  } while (iVar4 < 2);
  return;
}
