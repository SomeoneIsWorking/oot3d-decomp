// OoT3D decomp @ 0039ae7c  name=FUN_0039ae7c  size=196

void FUN_0039ae7c(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;

  FUN_0031a3dc();
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  uVar3 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_0039af40;
  FUN_00376340(DAT_0039af4c,DAT_0039af48,DAT_0039af44,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar3;
  FUN_003264c8(param_1);
  uVar1 = *(undefined1 *)(DAT_0039af50 + param_2);
  iVar2 = FUN_0037571c(param_2);
  if (iVar2 == 0) {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,3);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(DAT_0039af5c,DAT_0039af58,uVar3,DAT_0039af54,param_1 + 0x1a4,DAT_0039af60,0);
    *(ushort *)(DAT_0039af64 + 0x38) = *(ushort *)(DAT_0039af64 + 0x38) | 0x10;
    *(undefined4 *)(param_1 + 0xbbc) = 0x1f;
  }
  *(undefined1 *)(param_1 + 0xbde) = uVar1;
  return;
}
