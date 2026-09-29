// OoT3D decomp @ 001f8160  name=FUN_001f8160  size=208

void FUN_001f8160(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  FUN_003510b0(param_1,DAT_001f83dc);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar1 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_001f83e0 + iVar1) != 0)
     ) {
    iVar1 = iVar1 + 0x3a5c;
  }
  else {
    iVar1 = 0;
  }
  uVar2 = ObjectBankArchive_00358ef8(iVar1 + 0x10,0xf);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  FUN_00353e78(iVar1 + 0x10,param_2,param_1 + 0x214,uVar2,*(undefined4 *)(param_1 + 0x178),5,
               param_1 + 0x298,param_1 + 0x438,8);
  FUN_00350eb8(param_2,param_1 + 0x1a4);
  FUN_00350d48(param_2,param_1 + 0x1a4,param_1,DAT_001f83e4,param_1 + 0x1c4);
  *(undefined1 *)(param_1 + 0xb6) = 0x32;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
