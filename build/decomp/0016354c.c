// OoT3D decomp @ 0016354c  name=FUN_0016354c  size=552

void FUN_0016354c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;

  FUN_00372d4c(DAT_0016377c,DAT_00163774,param_1 + 0xbc,DAT_00163778);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00163780 + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  uVar3 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0);
  FUN_00353e78(iVar2 + 0x10,param_2,param_1 + 0x1a4,uVar3,*(undefined4 *)(param_1 + 0x178),
               0xffffffff,0,0,0);
  FUN_0035c358(param_1 + 0x228,param_1 + 0x1a4,0,1,2);
  iVar2 = 0;
  do {
    FUN_00353dd0(param_2,param_1 + iVar2 * 0x58 + 0x3f8);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  FUN_00353d24(param_2,param_1 + 0x3f8,param_1,DAT_00163784);
  FUN_00353d24(param_2,param_1 + 0x450,param_1,DAT_00163788);
  FUN_00353d24(param_2,param_1 + 0x4a8,param_1,DAT_0016378c);
  uVar3 = FUN_0035011c(0x16);
  FUN_00350318(param_1 + 0xa0,uVar3,DAT_00163790);
  iVar2 = DAT_00163794;
  if (*(short *)(param_2 + 0x104) == 0x62) {
    if (*(int *)(DAT_00163794 + 4) == 1) {
LAB_001636dc:
      FUN_003717ac(param_1 + 0x1a4,DAT_0016379c,0);
      FUN_0037572c(DAT_001637a0,param_1);
      iVar1 = DAT_001637a4;
      *(undefined1 *)(param_1 + 0x1f) = 1;
      *(undefined2 *)(iVar1 + param_1) = 0;
      if (*(int *)(iVar2 + 8) < DAT_001637a8) {
        uVar3 = DAT_001637b4;
        if ((*(short *)(param_2 + 0x104) != 4) && (uVar3 = DAT_001637b8, *(int *)(iVar2 + 4) != 0))
        {
          uVar3 = DAT_001637bc;
        }
      }
      else {
        uVar3 = FUN_00375750(param_2 + 0x118,1);
        FUN_0037573c(param_2,uVar3);
        *(undefined1 *)(DAT_001637ac + 0x5a2) = 1;
        uVar3 = DAT_001637b0;
      }
      *(undefined4 *)(param_1 + 0x3f4) = uVar3;
      return;
    }
  }
  else if (*(short *)(param_2 + 0x104) == 4) {
    uVar4 = (uint)*(ushort *)(DAT_00163798 + 0x32);
    bVar5 = (*(ushort *)(DAT_00163798 + 0x32) & 0x400) == 0;
    if (bVar5) {
      uVar4 = *(uint *)(DAT_00163794 + 4);
    }
    if (bVar5 && uVar4 == 0) goto LAB_001636dc;
  }
  FUN_00374428(param_1);
  return;
}
