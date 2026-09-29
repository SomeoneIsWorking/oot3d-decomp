// OoT3D decomp @ 00406704  name=FUN_00406704  size=156

void FUN_00406704(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  FUN_00309cf4();
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xe10) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  uVar2 = DAT_004067a4;
  uVar1 = DAT_004067a0;
  uVar5 = 0;
  do {
    iVar3 = param_1 + uVar5 * 0x20;
    uVar5 = uVar5 + 1;
    *(undefined1 *)(iVar3 + 0x1f1c) = 0;
    *(undefined4 *)(iVar3 + 0x1f30) = uVar1;
    *(undefined4 *)(iVar3 + 0x1f34) = uVar2;
    *(undefined4 *)(iVar3 + 0x1f38) = uVar2;
  } while (uVar5 < 4);
  uVar5 = 0;
  do {
    uVar4 = uVar5 + 1;
    iVar3 = param_1 + uVar5 * 0x220;
    *(undefined4 *)(iVar3 + 0xe1c) = 0;
    *(undefined4 *)(iVar3 + 0xe4c) = 0;
    uVar5 = uVar4;
  } while (uVar4 < 8);
  return;
}
