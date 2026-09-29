// OoT3D decomp @ 0018d75c  name=FUN_0018d75c  size=820

void FUN_0018d75c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint in_fpscr;

  FUN_00372d4c(DAT_0018da54,DAT_0018da4c,param_1 + 0xbc,DAT_0018da50);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar1 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0018da58 + iVar1) != 0)
     ) {
    iVar1 = iVar1 + 0x3a5c;
  }
  else {
    iVar1 = 0;
  }
  uVar2 = ObjectBankArchive_00358ef8(iVar1 + 0x10,0);
  FUN_00353e78(iVar1 + 0x10,param_2,param_1 + 0x1a4,uVar2,*(undefined4 *)(param_1 + 0x178),0,
               param_1 + 0x228,param_1 + 0x604,0x13);
  *(undefined1 *)(param_1 + 0x219) = 0;
  FUN_0035c358(param_1 + 0x9e0,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),6);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),7);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),4);
  FUN_00372f38(param_1,param_2,param_1 + 0xbac,1,0);
  FUN_00353dd0(param_2);
  FUN_0034fb3c(param_2,param_1 + 0xc18,param_1,DAT_0018da5c);
  uVar2 = DAT_0018da54;
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  default:
    return;
  case 1:
    uVar2 = 0x14;
    break;
  case 3:
    uVar2 = 0x2d;
    break;
  case 4:
    *(undefined4 *)(param_1 + 3000) = 0x35;
    *(short *)(DAT_0018da64 + param_1) = *(short *)(*DAT_0018da60 + 0x1484) + 0x53fc;
    return;
  case 5:
    *(undefined4 *)(param_1 + 3000) = 0x39;
    *(undefined4 *)(param_1 + 0xbbc) = 5;
    return;
  case 6:
    uVar3 = (uint)*(ushort *)(DAT_0018da68 + 0xf6);
    bVar5 = (*(ushort *)(DAT_0018da68 + 0xf6) & 1) != 0;
    if (!bVar5) {
      uVar3 = *(uint *)(DAT_0018da6c + 4);
    }
    if (bVar5 || uVar3 != 0) {
LAB_0018dad0:
      FUN_00374428(param_1);
      return;
    }
    goto LAB_0018d964;
  case 7:
    uVar3 = (uint)*(ushort *)(DAT_0018da68 + 0xf6);
    bVar5 = (*(ushort *)(DAT_0018da68 + 0xf6) & 2) != 0;
    if (!bVar5) {
      uVar3 = *(uint *)(DAT_0018da6c + 4);
    }
    if (bVar5 || uVar3 != 0) goto LAB_0018dad0;
LAB_0018d964:
    uVar2 = 0;
    break;
  case 8:
    uVar3 = (uint)*(ushort *)(DAT_0018da68 + 0xf6);
    bVar5 = (*(ushort *)(DAT_0018da68 + 0xf6) & 4) != 0;
    if (!bVar5) {
      uVar3 = *(uint *)(DAT_0018da6c + 4);
    }
    if (bVar5 || uVar3 != 0) goto LAB_0018dad0;
  case 2:
    uVar2 = 0x1d;
    break;
  case 9:
    if (*(int *)(DAT_0018da6c + 4) != 0) goto LAB_0018dad0;
    if ((*(ushort *)(DAT_0018da70 + 4) & 0x20) == 0) {
      *(ushort *)(DAT_0018da70 + 4) = *(ushort *)(DAT_0018da70 + 4) | 0x20;
      uVar2 = FUN_00375750(param_2 + 0x118,1);
      FUN_0037573c(param_2,uVar2);
      *(undefined1 *)(DAT_0018da74 + 0x5a2) = 1;
      uVar2 = 0x14;
    }
    else {
      if ((*(ushort *)(DAT_0018da68 + 0xf6) & 0x20) != 0) goto LAB_0018dad0;
      if ((*(ushort *)(DAT_0018da68 + 0xf4) & 0x100) == 0) {
        uVar4 = FUN_0036ae14(param_1 + 0x1a4,0x12);
        uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(DAT_0018dae4,uVar2,uVar4,uVar2,param_1 + 0x1a4,0x12,0);
        *(undefined4 *)(param_1 + 3000) = 0x4f;
        *(undefined4 *)(param_1 + 0xbbc) = 1;
        *(undefined4 *)(param_1 + 0xc70) = 1;
        return;
      }
      *(ushort *)(DAT_0018da68 + 0xf6) = *(ushort *)(DAT_0018da68 + 0xf6) | 0x20;
      FUN_00376a78(param_2,0x5f);
      uVar2 = FUN_00375750(param_2 + 0x118,2);
      FUN_0037573c(param_2,uVar2);
      *(undefined1 *)(DAT_0018da74 + 0x5a2) = 1;
      uVar2 = 0x1e;
    }
  }
  *(undefined4 *)(param_1 + 3000) = uVar2;
  return;
}
