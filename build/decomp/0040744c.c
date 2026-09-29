// OoT3D decomp @ 0040744c  name=FUN_0040744c  size=196

void FUN_0040744c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  FUN_00309cf4();
  *(undefined1 *)(param_1 + 9) = 0;
  uVar1 = DAT_00407510;
  *(undefined1 *)(param_1 + 10) = 0;
  uVar2 = DAT_00407514;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined2 *)(param_1 + 0x70) = 0x78;
  *(undefined1 *)(param_1 + 0x6e) = 0x30;
  *(undefined1 *)(param_1 + 0x6c) = 0x7f;
  *(undefined1 *)(param_1 + 0x6d) = 0x40;
  puVar3 = (undefined2 *)(param_1 + 0xc2);
  iVar4 = 8;
  *(undefined4 *)(param_1 + 0x74) = 0;
  do {
    puVar3[1] = 0xffff;
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + 2;
    *puVar3 = 0xffff;
  } while (iVar4 != 0);
  iVar5 = 0;
  iVar4 = 0;
  do {
    iVar6 = iVar5 + 1;
    *(undefined4 *)(param_1 + iVar5 * 4 + 0x84) = 0;
    iVar4 = iVar4 + 2;
    iVar5 = iVar5 + 2;
    *(undefined4 *)(param_1 + iVar6 * 4 + 0x84) = 0;
  } while (iVar4 < 0x10);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  return;
}
