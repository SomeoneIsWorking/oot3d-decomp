// OoT3D decomp @ 00406080  name=FUN_00406080  size=320

void FUN_00406080(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;

  uVar1 = DAT_004061c0;
  *(undefined4 *)(param_1 + 8) = DAT_004061c0;
  uVar2 = DAT_004061c4;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_00309e78(param_1 + 0x54);
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined1 *)(param_1 + 0x6c) = 0x7f;
  *(undefined1 *)(param_1 + 0x6d) = 0x7f;
  *(undefined2 *)(param_1 + 0x6e) = 0;
  *(undefined2 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  *(undefined2 *)(param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0x76) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0;
  *(undefined2 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0x7f;
  *(undefined1 *)(param_1 + 0x85) = 0x7f;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined2 *)(param_1 + 0x80) = 0;
  *(undefined2 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x86) = 2;
  *(undefined1 *)(param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x89) = 0x40;
  *(undefined1 *)(param_1 + 0x8a) = 0x3c;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0xff;
  *(undefined1 *)(param_1 + 0x8d) = 0xff;
  *(undefined1 *)(param_1 + 0x8e) = 0xff;
  *(undefined1 *)(param_1 + 0x8f) = 0xff;
  *(undefined2 *)(param_1 + 0x90) = 0xff;
  *(undefined1 *)(param_1 + 0x92) = 0x7f;
  *(undefined1 *)(param_1 + 0x93) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  puVar3 = (undefined2 *)(param_1 + 0x9e);
  iVar4 = 8;
  do {
    puVar3[1] = 0xffff;
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + 2;
    *puVar3 = 0xffff;
  } while (iVar4 != 0);
  return;
}
