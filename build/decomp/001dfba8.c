// OoT3D decomp @ 001dfba8  name=FUN_001dfba8  size=496

void FUN_001dfba8(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_fpscr;

  sVar1 = *(short *)(param_2 + 0x104);
  iVar5 = *(int *)(DAT_001dfd98 + 4);
  if (sVar1 == 0x2a) {
    if ((iVar5 == 0) || (*(int *)(DAT_001dfd98 + 0x10) != 1)) goto LAB_001dfc2c;
    uVar2 = 4;
  }
  else {
    if (sVar1 != 0x52) {
      if (sVar1 == 0x5a && iVar5 == 0) {
        *(ushort *)(param_1 + 0xb14) = *(ushort *)(param_1 + 0xb14) | 1;
      }
      goto LAB_001dfc2c;
    }
    if ((iVar5 == 0) || (*(int *)(DAT_001dfd98 + 0x10) != 0)) goto LAB_001dfc2c;
    uVar2 = 2;
  }
  *(ushort *)(param_1 + 0xb14) = *(ushort *)(param_1 + 0xb14) | uVar2;
LAB_001dfc2c:
  if ((*(ushort *)(param_1 + 0xb14) & 7) == 0) {
    FUN_00374428(param_1);
  }
  uVar3 = DAT_001dfda4;
  FUN_00372d4c(DAT_001dfda4,DAT_001dfd9c,param_1 + 0xbc,DAT_001dfda0);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar5 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_001dfda8 + iVar5) != 0)
     ) {
    iVar5 = iVar5 + 0x3a5c;
  }
  else {
    iVar5 = 0;
  }
  uVar6 = ObjectBankArchive_00358ef8(iVar5 + 0x10,0);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  FUN_00372f38(param_1,param_2,param_1 + 0xb40,0,0);
  FUN_00353e78(iVar5 + 0x10,param_2,param_1 + 0x1a4,uVar6,*(undefined4 *)(param_1 + 0x178),0,
               param_1 + 0x228,param_1 + 0x66c,0x15);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0xab4,param_1,DAT_001dfdac);
  FUN_00350318(param_1 + 0xa0,DAT_001dfdb4,DAT_001dfdb0);
  FUN_00376340(uVar3,uVar3,uVar3,param_2,param_1,4);
  puVar4 = DAT_001dfdb8;
  uVar6 = FUN_0036ae14(param_1 + 0x1a4,*DAT_001dfdb8);
  uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_001dfdbc,uVar3,uVar6,puVar4[3],param_1 + 0x1a4,*puVar4,
               *(undefined1 *)(puVar4 + 2));
  *(ushort *)(param_1 + 0xb14) = *(ushort *)(param_1 + 0xb14) | 8;
  *(undefined1 *)(param_1 + 0x1f) = 6;
  *(undefined4 *)(param_1 + 0xab0) = DAT_001dfdc0;
  return;
}
