// OoT3D decomp @ 0018c334  name=FUN_0018c334  size=640

void FUN_0018c334(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  uVar4 = DAT_0018c5bc;
  FUN_00372d4c(DAT_0018c5bc,DAT_0018c5b4,param_1 + 0xbc,DAT_0018c5b8);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar5 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0018c5c0 + iVar5) != 0)
     ) {
    iVar5 = iVar5 + 0x3a5c;
  }
  else {
    iVar5 = 0;
  }
  uVar6 = FUN_00358ef8(iVar5 + 0x10,0);
  FUN_00353e78(iVar5 + 0x10,param_2,param_1 + 0x95c,uVar6,*(undefined4 *)(param_1 + 0x178),
               0xffffffff,param_1 + 0x1a4,param_1 + 0x580,0x13);
  FUN_0035c358(param_1 + 0x9e0,param_1 + 0x95c,0,1,0xffffffff);
  *(undefined2 *)(param_1 + 0xc08) = 1;
  FUN_00353dd0(param_2,param_1 + 0xbb0);
  FUN_00353d24(param_2,param_1 + 0xbb0,param_1,DAT_0018c5c4);
  uVar6 = FUN_0035011c(0x16);
  FUN_00350318(param_1 + 0xa0,uVar6,DAT_0018c5c8);
  iVar5 = DAT_0018c5cc;
  sVar2 = *(short *)(param_1 + 0xc0);
  if ((sVar2 == 3) && (*(int *)(DAT_0018c5cc + 0x14e8) == 5)) {
LAB_0018c51c:
    FUN_00376340(uVar4,uVar4,uVar4,param_2,param_1,4);
    FUN_0037572c(DAT_0018c5d4,param_1);
    *(undefined *)(param_1 + 0x1f) = 6;
    *(undefined2 *)(param_1 + 0xc10) = 0;
    if (((*(ushort *)(iVar5 + 0xeee) & 0x10) != 0) &&
       ((*(uint *)(iVar5 + 0xbc) & *(uint *)(DAT_0018c5d8 + 0x34)) == 0)) {
      *(undefined4 *)(param_1 + 0xbac) = DAT_0018c5e0;
      FUN_00348800(param_1,2);
      return;
    }
    *(undefined4 *)(param_1 + 0xbac) = DAT_0018c5dc;
    FUN_00348800(param_1,2);
    return;
  }
  if (*(int *)(DAT_0018c5cc + 4) == 1) {
    sVar3 = *(short *)(param_2 + 0x104);
    if (sVar3 == 0x21 || sVar3 == 0x20) {
      bVar7 = (*(ushort *)(DAT_0018c5cc + 0xeee) & 0x10) == 0;
      if (bVar7) {
        bVar7 = (*(ushort *)(DAT_0018c5d0 + 0x20) & 0x800) == 0;
      }
      if (bVar7) goto LAB_0018c51c;
    }
    if (sVar3 == 0x5f) {
      if ((*(ushort *)(DAT_0018c5cc + 0xeee) & 0x10) == 0) {
        if ((*(ushort *)(DAT_0018c5d0 + 0x20) & 0x800) != 0) goto LAB_0018c51c;
        *(ushort *)(DAT_0018c5d0 + 0x20) = *(ushort *)(DAT_0018c5d0 + 0x20) | 0x800;
      }
    }
    else {
      if (sVar3 == 0x4c) {
        if (*(int *)(DAT_0018c5cc + 0x10) != 1) goto LAB_0018c508;
        uVar1 = *(ushort *)(DAT_0018c5cc + 0xeee);
      }
      else {
        bVar7 = sVar3 == 99 && sVar2 == 3;
        if (sVar3 == 99 && sVar2 == 3) {
          bVar7 = *(int *)(DAT_0018c5cc + 0x10) == 0;
        }
        if (!bVar7) goto LAB_0018c508;
        uVar1 = *(ushort *)(DAT_0018c5cc + 0xeee);
      }
      if ((uVar1 & 0x10) != 0) goto LAB_0018c51c;
    }
  }
LAB_0018c508:
  FUN_00374428(param_1);
  return;
}

