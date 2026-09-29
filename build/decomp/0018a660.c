// OoT3D decomp @ 0018a660  name=FUN_0018a660  size=544

void FUN_0018a660(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;

  uVar2 = DAT_0018a888;
  FUN_00372d4c(DAT_0018a888,DAT_0018a880,param_1 + 0xbc,DAT_0018a884);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0018a88c + iVar3) != 0)
     ) {
    iVar3 = iVar3 + 0x3a5c;
  }
  else {
    iVar3 = 0;
  }
  uVar4 = ObjectBankArchive_00358ef8(iVar3 + 0x10,0);
  FUN_00353e78(iVar3 + 0x10,param_2,param_1 + 0x1a4,uVar4,*(undefined4 *)(param_1 + 0x178),
               0xffffffff,param_1 + 0x228,param_1 + 0x3fc,9);
  FUN_003717ac(param_1 + 0x1a4,DAT_0018a890,0);
  *(undefined1 *)(param_1 + 0x5d0) = 1;
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if (((int)(short)uVar1 & 0x8000U) == 0) {
    *(ushort *)(param_1 + 0x1c) = (uVar1 & 0xf00) + 0x100 | uVar1 & 0xf0ff;
  }
  if ((*(ushort *)(DAT_0018a894 + 0x4e) & 0xf00) >> 8 ==
      ((int)*(short *)(param_1 + 0x1c) & 0xf00U) >> 8 &&
      ((int)*(short *)(param_1 + 0x1c) & 0x8000U) == 0) {
LAB_0018a810:
    FUN_00374428(param_1);
    return;
  }
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x5d8,param_1,DAT_0018a898);
  FUN_00350318(param_1 + 0xa0,0,DAT_0018a89c);
  FUN_0037572c(DAT_0018a8a0,param_1);
  *(undefined4 *)(param_1 + 0x70) = DAT_0018a8a4;
  *(undefined2 *)(param_1 + 0x636) = 0;
  uVar4 = FUN_00348ff0(param_2,(*(ushort *)(param_1 + 0x1c) & 0xf0) >> 4,0xf);
  *(undefined4 *)(param_1 + 0x630) = uVar4;
  uVar4 = DAT_0018a8ac;
  if (*(short *)(param_2 + 0x104) == 0x21) {
    if ((*(char *)(DAT_0018a8a8 + 0x5aa) == '\0') &&
       ((*(ushort *)(param_1 + 0x1c) & 0xf00) == 0x100)) {
      FUN_00374428(param_1);
    }
  }
  else if (*(short *)(param_2 + 0x104) == 0x35) {
    if ((*(ushort *)(param_1 + 0x1c) & 0x8000) != 0) goto LAB_0018a850;
    if (*(char *)(DAT_0018a8a8 + 0x5aa) != '\0') goto LAB_0018a810;
    *(undefined2 *)(param_1 + 0x640) = 3;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    goto LAB_0018a870;
  }
  uVar4 = DAT_0018a8b4;
  if ((*(ushort *)(param_1 + 0x1c) & 0x8000) != 0) {
LAB_0018a850:
    uVar2 = DAT_0018a8b0;
    *(undefined2 *)(param_1 + 0x640) = 0;
    *(undefined4 *)(param_1 + 0x5d4) = uVar2;
    return;
  }
  *(undefined2 *)(param_1 + 0x640) = 3;
LAB_0018a870:
  *(undefined4 *)(param_1 + 0x5d4) = uVar4;
  return;
}
