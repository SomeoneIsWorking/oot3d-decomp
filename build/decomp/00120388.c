// OoT3D decomp @ 00120388  name=FUN_00120388  size=192

void FUN_00120388(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = uRam0012044c;
  FUN_003705a0(uRam0012044c,uRam00120448,param_1 + 0x6c);
  iVar2 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 0xb7) == '\0') {
      *(undefined2 *)(param_1 + 0x920) = 0;
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      uVar1 = uRam0012045c;
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
      *(undefined1 *)(param_1 + 0x123) = 0xff;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      *(undefined4 *)(param_1 + 0x918) = uVar1;
      return;
    }
    FUN_00370350(uRam00120450,param_1 + 0x1a4,*(undefined4 *)(param_1 + 0x948));
    *(undefined4 *)(param_1 + 0x6c) = uRam00120454;
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + -0x8000;
    *(byte *)(param_1 + 0x985) = *(byte *)(param_1 + 0x985) | 1;
    *(undefined2 *)(param_1 + 0x920) = 300;
    *(undefined4 *)(param_1 + 0x918) = uRam00120458;
  }
  return;
}
