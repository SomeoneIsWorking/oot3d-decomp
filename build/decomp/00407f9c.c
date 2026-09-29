// OoT3D decomp @ 00407f9c  name=FUN_00407f9c  size=316

void FUN_00407f9c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined1 uVar6;

  *(undefined4 *)(param_1 + 300) = param_2;
  *(undefined4 *)(param_1 + 0x130) = param_3;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  *(undefined1 *)(param_1 + 200) = 1;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(undefined1 *)(param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x126) = 0x3c;
  uVar1 = DAT_004080d8;
  *(undefined1 *)(param_1 + 0x127) = 0x3c;
  uVar2 = DAT_004080dc;
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x104) = uVar2;
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(undefined4 *)(param_1 + 0x10c) = uVar1;
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  *(undefined4 *)(param_1 + 0xf0) = uVar2;
  *(undefined4 *)(param_1 + 0xd0) = uVar1;
  *(undefined4 *)(param_1 + 0xd4) = uVar2;
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  *(undefined1 *)(param_1 + 0xcb) = 0;
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  *(undefined4 *)(param_1 + 0xec) = uVar2;
  *(undefined1 *)(param_1 + 0x110) = 0xff;
  *(undefined1 *)(param_1 + 0x111) = 0xff;
  *(undefined2 *)(param_1 + 0x112) = 0;
  *(undefined2 *)(param_1 + 0x114) = 0;
  puVar3 = DAT_004080e0;
  *(undefined4 *)(param_1 + 0xf4) = uVar2;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_0030b404(*puVar3,param_1 + 0x90);
  FUN_00309e78(param_1 + 0xac);
  puVar4 = DAT_004080e4;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + 0x125) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  if (((*puVar4 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_004080e4), iVar5 != 0)) {
    FUN_0030c5b8(DAT_004080e8);
  }
  uVar6 = 0;
  if (*(char *)(DAT_004080e8 + 2) == '\0') {
    uVar6 = 2;
  }
  else if (*(char *)(DAT_004080e8 + 2) == '\x01') {
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 0x129) = uVar6;
  return;
}
