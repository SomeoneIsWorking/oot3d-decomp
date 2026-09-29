// OoT3D decomp @ 00249260  name=FUN_00249260  size=244

void FUN_00249260(int param_1,int param_2)

{
  char cVar1;
  short sVar2;

  *(short *)(param_1 + 0x1fa) = *(short *)(param_1 + 0x1c);
  if (*(short *)(param_1 + 0x1c) < 0) {
    *(undefined2 *)(param_1 + 0x1fa) = 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(undefined2 *)(param_1 + 0x1f6) = 0xffff;
  if (*(short *)(param_1 + 0x1fa) == 0) {
    FUN_00350a98(param_2,param_1 + 0x224);
    FUN_00350914(param_2,param_1 + 0x224,param_1,DAT_00249354);
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
    sVar2 = 0x164;
  }
  else {
    FUN_00353dd0(param_2,param_1 + 0x2a4);
    FUN_00353d24(param_2,param_1 + 0x2a4,param_1,DAT_00249358);
    sVar2 = (short)DAT_0024935c;
  }
  *(short *)(param_1 + 0x1f6) = sVar2;
  if (sVar2 < 0) {
    FUN_00374428(param_1);
  }
  else {
    cVar1 = FUN_00363c10(param_2 + 0x3a58);
    *(char *)(param_1 + 0x209) = cVar1;
    if (cVar1 < '\0') {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x1a4) = DAT_00249360;
  return;
}
