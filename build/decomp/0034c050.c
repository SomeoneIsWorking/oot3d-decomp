// OoT3D decomp @ 0034c050  name=FUN_0034c050  size=184

void FUN_0034c050(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;

  uVar3 = FUN_0036ae14(param_1 + 0x1a4,1);
  uVar1 = DAT_0034c10c;
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0034c110,DAT_0034c10c,uVar3,DAT_0034c108,param_1 + 0x1a4,1,2);
  if (*(char *)(param_1 + 0x9e0) == '\0') {
    *(undefined4 *)(param_1 + 0xa50) = DAT_0034c114;
    FUN_00366c24(param_1,param_2);
    *(undefined1 *)(param_1 + 0x9ed) = 0;
    *(undefined4 *)(param_1 + 0x140) = DAT_0034c118;
  }
  else {
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  }
  iVar2 = DAT_0034c11c;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined2 *)(iVar2 + param_1) = 0x17;
  FUN_00375bcc(param_1,DAT_0034c120);
  *(byte *)(param_1 + 0x9e5) = *(byte *)(param_1 + 0x9e5) & 0xfe;
  *(undefined4 *)(param_1 + 0x9dc) = DAT_0034c124;
  return;
}
