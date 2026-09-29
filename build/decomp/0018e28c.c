// OoT3D decomp @ 0018e28c  name=FUN_0018e28c  size=1160

void FUN_0018e28c(short *param_1,int param_2)

{
  undefined1 uVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  bool bVar8;

  uVar4 = DAT_0018e5e4;
  FUN_00372d4c(DAT_0018e5e4,DAT_0018e5dc,param_1 + 0x5e,DAT_0018e5e0);
  if ((*(byte *)(param_1 + 0xf) < 0x13) &&
     (iVar5 = param_2 + (uint)*(byte *)(param_1 + 0xf) * 0x80, *(int *)(DAT_0018e5e8 + iVar5) != 0))
  {
    iVar5 = iVar5 + 0x3a5c;
  }
  else {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0x4f0) = iVar5 + 0x10;
  uVar6 = ObjectBankArchive_00358ef8(iVar5 + 0x10,0);
  FUN_00353e78(*(undefined4 *)(param_1 + 0x4f0),param_2,param_1 + 0xd2,uVar6,
               *(undefined4 *)(param_1 + 0xbc),0xffffffff,param_1 + 0x114,param_1 + 0x302,0x13);
  FUN_0035c358(param_1 + 0x4f2,param_1 + 0xd2,1,0,0xffffffff);
  FUN_00353dd0(param_2);
  FUN_0034fb3c(param_2,param_1 + 0x606,param_1,DAT_0018e5ec);
  FUN_00353dd0(param_2);
  FUN_0034fb3c(param_2,param_1 + 0x632,param_1,DAT_0018e5f0);
  psVar7 = param_1 + 0x5dc;
  switch(param_1[0xe] & 0xff) {
  case 0:
    FUN_00347f48(uVar4,param_1,DAT_0018e5f8,0);
    uVar4 = DAT_0018e5fc;
    param_1[0x5de] = 0xf;
    param_1[0x5df] = 0;
    *(undefined4 *)(param_1 + 0x62) = uVar4;
    param_1[0x5da] = 5;
    *psVar7 = 2;
    return;
  case 1:
    FUN_00347f48(uVar4,param_1,DAT_0018e600,0);
    param_1[0x5de] = 0;
    param_1[0x5df] = 0;
    param_1[0x5e0] = 1;
    param_1[0x5e1] = 0;
    param_1[0x5da] = 4;
    *psVar7 = 0;
    return;
  case 2:
    uVar3 = *(ushort *)(DAT_0018e5f4 + 0x38);
    if ((uVar3 & 2) == 0) {
      FUN_00347f48(uVar4,param_1,DAT_0018e604,0);
      param_1[0x5de] = 7;
      param_1[0x5df] = 0;
      *psVar7 = 1;
      return;
    }
    if (((uVar3 & 0x80) != 0) && ((uVar3 & 1) == 0 && (uVar3 & 0x20) == 0)) {
      for (psVar7 = *(short **)(param_2 + 0x20bc); psVar7 != (short *)0x0;
          psVar7 = *(short **)(psVar7 + 0x98)) {
        if (((*psVar7 == 0xa1) && (psVar7 != param_1)) &&
           (iVar5 = *(int *)(psVar7 + 0x5de), (iVar5 == 0x1f || iVar5 == 0x20) || iVar5 == 0x18))
        goto switchD_0018e3d0_default;
      }
LAB_0018e504:
      FUN_00347f48(uVar4,param_1,DAT_0018e604,0);
      param_1[0x5de] = 0x16;
      param_1[0x5df] = 0;
      uVar1 = *(undefined1 *)((int)param_1 + 3);
      *(undefined1 *)(param_1 + 0x5ee) = uVar1;
      *(undefined1 *)(param_1 + 0x5ef) = uVar1;
      *(undefined1 *)((int)param_1 + 0xbdd) = uVar1;
      *(undefined1 *)((int)param_1 + 3) = 0xff;
      param_1[0x5e0] = 0;
      param_1[0x5e1] = 0;
      return;
    }
    break;
  case 3:
    uVar3 = *(ushort *)(DAT_0018e5f4 + 0x38);
    if (((uVar3 & 2) != 0) && (((uVar3 & 0x20) == 0 && (uVar3 & 1) == 0) && (uVar3 & 0x80) == 0)) {
      psVar7 = *(short **)(param_2 + 0x20bc);
      while( true ) {
        if (psVar7 == (short *)0x0) {
          FUN_00347f48(uVar4,param_1,DAT_0018e604,0);
          param_1[0x5de] = 0x16;
          param_1[0x5df] = 0;
          uVar1 = *(undefined1 *)((int)param_1 + 3);
          *(undefined1 *)(param_1 + 0x5ee) = uVar1;
          *(undefined1 *)(param_1 + 0x5ef) = uVar1;
          *(undefined1 *)((int)param_1 + 0xbdd) = uVar1;
          *(undefined1 *)((int)param_1 + 3) = 0xff;
          return;
        }
        if (((*psVar7 == 0xa1) && (psVar7 != param_1)) &&
           (iVar5 = *(int *)(psVar7 + 0x5de), (iVar5 == 0x1f || iVar5 == 0x20) || iVar5 == 0x18))
        break;
        psVar7 = *(short **)(psVar7 + 0x98);
      }
    }
    break;
  case 4:
    if (((*(ushort *)(DAT_0018e5f4 + 0x38) & 0x20) != 0) &&
       ((*(ushort *)(DAT_0018e5f4 + 0x38) & 0x40) == 0)) {
      FUN_00347f48(uVar4,param_1,DAT_0018e604,0);
      param_1[0x5de] = 0x29;
      param_1[0x5df] = 0;
      for (psVar7 = *(short **)(param_2 + 0x20a4); psVar7 != (short *)0x0;
          psVar7 = *(short **)(psVar7 + 0x98)) {
        sVar2 = *psVar7;
        bVar8 = sVar2 == 200;
        if (bVar8) {
          sVar2 = psVar7[0xe];
        }
        if (bVar8 && sVar2 == 0) goto LAB_0018e66c;
      }
      psVar7 = (short *)0x0;
LAB_0018e66c:
      *(short **)(param_1 + 0x5f2) = psVar7;
      if (psVar7 != (short *)0x0) {
        psVar7[0x10e] = 1;
        psVar7[0x10f] = 0;
      }
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffffff6;
      return;
    }
    break;
  case 5:
    if (((*(ushort *)(DAT_0018e75c + 0xf2) & 0x80) != 0) && (*(int *)(DAT_0018e760 + 4) == 1)) {
      FUN_00347f48(uVar4,param_1,DAT_0018e604,0);
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xffffffef;
      param_1[0x5de] = 0x2c;
      param_1[0x5df] = 0;
      param_1[0x5e0] = 1;
      param_1[0x5e1] = 0;
      return;
    }
    break;
  case 6:
    uVar3 = *(ushort *)(DAT_0018e5f4 + 0x38);
    if (((uVar3 & 2) != 0 && (uVar3 & 1) != 0) && ((uVar3 & 0x20) == 0)) {
      for (psVar7 = *(short **)(param_2 + 0x20bc); psVar7 != (short *)0x0;
          psVar7 = *(short **)(psVar7 + 0x98)) {
        if (((*psVar7 == 0xa1) && (psVar7 != param_1)) &&
           (iVar5 = *(int *)(psVar7 + 0x5de), (iVar5 == 0x1f || iVar5 == 0x20) || iVar5 == 0x18))
        goto switchD_0018e3d0_default;
      }
      goto LAB_0018e504;
    }
  }
switchD_0018e3d0_default:
  FUN_00374428(param_1);
  return;
}
