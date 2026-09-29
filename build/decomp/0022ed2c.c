// OoT3D decomp @ 0022ed2c  name=FUN_0022ed2c  size=424

void FUN_0022ed2c(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;

  FUN_003510b0(param_1,DAT_0022ef10);
  uVar3 = DAT_0022ef1c;
  FUN_00372d4c(DAT_0022ef1c,DAT_0022ef14,param_1 + 0xbc,DAT_0022ef18);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar4 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0022ef20 + iVar4) != 0)
     ) {
    iVar4 = iVar4 + 0x3a5c;
  }
  else {
    iVar4 = 0;
  }
  if (((*DAT_0022ef24 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_0022ef24), iVar5 != 0)) {
    FUN_0036788c(DAT_0022ef28);
  }
  uVar6 = ObjectBankArchive_00358ef8(iVar4 + 0x10,0);
  iVar5 = DAT_0022ef34;
  FUN_00353e78(iVar4 + 0x10,param_2,param_1 + 0x204,uVar6,*(undefined4 *)(param_1 + 0x178),
               *(undefined4 *)(DAT_0022ef34 + 0x14),param_1 + 0x288,param_1 + 0x594,0xf);
  FUN_00353dd0(param_2,param_1 + 0x1ac);
  FUN_00353d24(param_2,param_1 + 0x1ac,param_1,iVar5 + 0x20);
  FUN_00350d20(param_1 + 0xa0,0,iVar5 + 0x18);
  FUN_0037632c(param_1,param_1 + 0x1ac);
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 2) {
    uVar2 = *(ushort *)(DAT_0022ef38 + 8) & 0x800;
  }
  else if (sVar1 == 9) {
    uVar2 = *(ushort *)(DAT_0022ef38 + 0x42) & 4;
  }
  else {
    if (sVar1 != 10) goto LAB_0022eeb8;
    uVar2 = *(ushort *)(DAT_0022ef38 + 0x42) & 8;
  }
  if (uVar2 != 0) {
    FUN_00374428(param_1);
    return;
  }
LAB_0022eeb8:
  FUN_0037422c(uVar3,param_1 + 0x204,*(undefined4 *)(iVar5 + 0x10));
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(100,0x32);
}
