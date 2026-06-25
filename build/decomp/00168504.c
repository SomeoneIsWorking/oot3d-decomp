// OoT3D decomp @ 00168504  name=FUN_00168504  size=860

void FUN_00168504(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  
  *(undefined *)(param_1 + 0x19a) = 1;
  *(undefined *)(param_1 + 0xc48) = 0;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00168868 + iVar3) != 0)
     ) {
    iVar3 = iVar3 + 0x3a5c;
  }
  else {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0xc44) = iVar3 + 0x10;
  FUN_00372d4c(DAT_00168874,DAT_0016886c,param_1 + 0xbc,DAT_00168870);
  uVar4 = FUN_00358ef8(*(undefined4 *)(param_1 + 0xc44),0);
  FUN_00353e78(*(undefined4 *)(param_1 + 0xc44),param_2,param_1 + 0x1a4,uVar4,
               *(undefined4 *)(param_1 + 0x178),0xffffffff,param_1 + 0x48c,param_1 + 0x868,0x13);
  *(undefined *)(*(int *)(param_1 + 0x1cc) + 0xad) = 0;
  FUN_0035c358(param_1 + 0x228,param_1 + 0x1a4,0,1,0xffffffff);
  FUN_00353dd0(param_2,param_1 + 0x3f8);
  FUN_00353d24(param_2,param_1 + 0x3f8,param_1,DAT_00168878);
  FUN_00350318(param_1 + 0xa0,0,DAT_0016887c);
  uVar2 = DAT_001688a4;
  uVar4 = DAT_0016889c;
  if ((*(int *)(DAT_00168880 + 8) < DAT_00168884) || (*(int *)(DAT_00168880 + 8) == 0xfffd)) {
LAB_00168640:
    sVar1 = *(short *)(param_2 + 0x104);
    if (sVar1 == 0x29) {
      if (*(int *)(DAT_00168880 + 4) != 0) {
        bVar6 = *(char *)((uint)*(byte *)(DAT_0016888c + 7) + DAT_00168890) == '\a';
        if (bVar6) {
          bVar6 = (*(ushort *)(DAT_00168888 + 0xf4) & 1) == 0;
        }
        if (bVar6) {
LAB_001686dc:
          uVar5 = 1;
          goto LAB_001686f0;
        }
      }
    }
    else if (sVar1 == 0x56) {
      if ((*(ushort *)(DAT_00168888 + 0xf4) & 1) != 0) {
        if ((*(uint *)(DAT_00168880 + 0xbc) & *(uint *)(DAT_00168894 + 0x38)) != 0) {
          uVar5 = 2;
          goto LAB_001686f0;
        }
        goto LAB_001686ac;
      }
    }
    else if ((sVar1 == 0x55) &&
            ((*(uint *)(DAT_00168880 + 0xbc) & *(uint *)(DAT_00168894 + 0x48)) == 0)) {
      if ((*(ushort *)(DAT_00168898 + 0x10) & 1) == 0) goto LAB_001686e4;
      goto LAB_001686dc;
    }
    uVar5 = 0;
  }
  else {
    if (*(short *)(param_2 + 0x104) == 0x55) {
LAB_001686e4:
      uVar5 = 4;
      goto LAB_001686f0;
    }
    if (*(short *)(param_2 + 0x104) != 0x56) goto LAB_00168640;
LAB_001686ac:
    uVar5 = 5;
  }
LAB_001686f0:
  switch(uVar5) {
  case 0:
    FUN_00374428(param_1);
    return;
  case 1:
    *(undefined4 *)(param_1 + 0x70) = DAT_001688a0;
    FUN_0035fbb0(param_1,0);
    *(undefined4 *)(param_1 + 0x3f4) = uVar4;
    break;
  case 2:
    FUN_0035fbb0(param_1,0xb);
    *(undefined4 *)(param_1 + 0x3f4) = uVar4;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x70) = DAT_001688a0;
    *(undefined2 *)(param_1 + 0x47e) = 0;
    FUN_0035fbb0(param_1,0);
    *(undefined4 *)(param_1 + 0x3f4) = uVar2;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x70) = DAT_001688a0;
    *(undefined2 *)(param_1 + 0x47e) = 0;
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_00168868 + iVar3) != 0)) {
      iVar3 = iVar3 + 0x3a5c;
    }
    else {
      iVar3 = 0;
    }
    uVar4 = FUN_00375750(iVar3 + 0x10,1);
    FUN_0037573c(param_2,uVar4);
    iVar3 = DAT_001688ac;
    *(undefined *)(param_1 + 0xc49) = 1;
    *(undefined *)(iVar3 + 0x5a2) = 1;
    FUN_0035fbb0(param_1,4);
    *(undefined4 *)(param_1 + 0x3f4) = uVar2;
    break;
  case 5:
    FUN_0035fbb0(param_1,0xb);
    *(undefined4 *)(param_1 + 0x3f4) = DAT_001688a8;
  }
  FUN_0037572c(DAT_001688b0,param_1);
  *(undefined *)(param_1 + 0x1f) = 6;
  *(undefined2 *)(param_1 + 0x450) = 0;
  *(undefined2 *)(param_1 + 0x484) = 0xff;
  FUN_0035fb94(param_1 + 0x486,param_1 + 0xbc);
  FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x18,0,0,0,3);
  return;
}

