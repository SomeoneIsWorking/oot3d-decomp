// OoT3D decomp @ 001aaeb0  name=FUN_001aaeb0  size=256

void FUN_001aaeb0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;

  uVar1 = DAT_001aafb8;
  FUN_00372d4c(DAT_001aafb8,DAT_001aafb0,param_1 + 0xbc,DAT_001aafb4);
  iVar4 = param_1 + 0x1a4;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_001aafbc + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  uVar3 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0);
  FUN_00353e78(iVar2 + 0x10,param_2,iVar4,uVar3,*(undefined4 *)(param_1 + 0x178),0xffffffff,0,0,0);
  FUN_0035c358(param_1 + 0x228,iVar4,0,1,0xffffffff);
  uVar3 = FUN_0036ae14(iVar4,10);
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00353020(DAT_001aafc0,uVar1,uVar3,uVar1,iVar4,DAT_001aafc4,2);
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  return;
}
