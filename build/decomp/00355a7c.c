// OoT3D decomp @ 00355a7c  name=FUN_00355a7c  size=164

void FUN_00355a7c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  iVar5 = DAT_00355b20;
  *(undefined1 *)(param_1 + 0x3e6) = 1;
  uVar1 = DAT_00355b24;
  *(undefined2 *)(iVar5 + param_1) = 0;
  uVar2 = DAT_00355b28;
  *(undefined4 *)(param_1 + 0x268) = uVar1;
  *(undefined4 *)(param_1 + 0x26c) = uVar2;
  *(undefined4 *)(param_1 + 0x270) = uVar1;
  uVar2 = DAT_00355b2c;
  *(undefined4 *)(param_1 + 0x274) = uVar1;
  *(undefined4 *)(param_1 + 0x278) = uVar2;
  uVar2 = DAT_00355b30;
  *(undefined4 *)(param_1 + 0x27c) = uVar1;
  *(undefined4 *)(param_1 + 0x280) = uVar2;
  uVar3 = DAT_00355b34;
  *(undefined4 *)(param_1 + 0x284) = uVar1;
  *(undefined4 *)(param_1 + 0x288) = uVar3;
  uVar3 = DAT_00355b38;
  *(undefined4 *)(param_1 + 0x28c) = uVar1;
  *(undefined4 *)(param_1 + 0x290) = uVar3;
  iVar5 = 0;
  do {
    iVar4 = param_1 + iVar5 * 0x40;
    iVar5 = iVar5 + 1;
    *(undefined4 *)(iVar4 + 0x2b8) = uVar1;
    *(undefined4 *)(iVar4 + 0x2c0) = uVar1;
    *(undefined4 *)(iVar4 + 0x2c4) = uVar1;
    *(undefined4 *)(iVar4 + 0x2c8) = uVar1;
    *(undefined4 *)(iVar4 + 0x2b0) = uVar2;
    *(undefined4 *)(iVar4 + 0x2ac) = uVar2;
    *(undefined4 *)(iVar4 + 0x2a8) = uVar2;
    *(undefined4 *)(iVar4 + 0x2a4) = uVar2;
    *(undefined4 *)(iVar4 + 0x2a0) = uVar2;
    *(undefined4 *)(iVar4 + 0x29c) = uVar2;
  } while (iVar5 < 5);
  *(undefined4 *)(param_1 + 0x1a4) = DAT_00355b3c;
  return;
}
