// OoT3D decomp @ 00196ba8  name=FUN_00196ba8  size=128

void FUN_00196ba8(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;

  iVar3 = FUN_00370734(param_1 + 0x1a4);
  if ((iVar3 == 0) &&
     (cVar2 = *(char *)(param_1 + 0xe0d) + -1, *(char *)(param_1 + 0xe0d) = cVar2, cVar2 != '\0')) {
    return;
  }
  if (*(char *)(param_1 + 0xe0c) != '\b') {
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,1);
    *(undefined1 *)(param_1 + 0xe0c) = 8;
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_00196c30,DAT_00196c2c,uVar4,DAT_00196c28,param_1 + 0x1a4,1,3);
    return;
  }
  uVar5 = FUN_0036ae14(param_1 + 0x1a4,0xc);
  uVar1 = DAT_0034695c;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 5;
  uVar4 = DAT_00346958;
  uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x6c) = DAT_00346958;
  *(undefined1 *)(param_1 + 0xe0c) = 4;
  FUN_00375c08(uVar4,uVar4,uVar5,uVar1,param_1 + 0x1a4,0xc,0);
  *(undefined4 *)(param_1 + 0xe1c) = DAT_00346960;
  return;
}
