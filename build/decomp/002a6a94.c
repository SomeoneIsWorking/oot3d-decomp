// OoT3D decomp @ 002a6a94  name=FUN_002a6a94  size=708

void FUN_002a6a94(int param_1,undefined4 param_2)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;

  uVar4 = DAT_002a6d80;
  fVar3 = DAT_002a6d78;
  FUN_0036e168(DAT_002a6d78,DAT_002a6d80,DAT_002a6d7c,DAT_002a6d78,param_1 + 0x6c);
  uVar2 = *(ushort *)(param_1 + 0x90);
  if ((((uVar2 & 3) != 0) || ((*(short *)(param_1 + 0x1c) == -2 && ((uVar2 & 0x20) != 0)))) &&
     (*(float *)(param_1 + 100) <= fVar3)) {
    if ((*(short *)(param_1 + 0x1c) == -2) && ((uVar2 & 0x20) != 0)) {
      *(float *)(param_1 + 100) = fVar3;
      *(float *)(param_1 + 0x70) = fVar3;
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x88);
    }
    else if (*(uint *)(param_1 + 0x84) < DAT_002a6d84) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x84);
    }
  }
  if ((uVar2 & 0x42) != 0) {
    if ((uVar2 & 0x40) == 0) {
      FUN_0037378c(uVar4,param_2,param_1 + 0x6d0,2,0x50,0xf,1);
      FUN_0037378c(uVar4,param_2,param_1 + 0x6dc,2,0x50,0xf,1);
      FUN_0037378c(uVar4,param_2,param_1 + 0x6e8,2,0x50,0xf,1);
      FUN_0037378c(uVar4,param_2,param_1 + 0x6f4,2,0x50,0xf,1);
      FUN_00375bcc(param_1,DAT_002a6d88);
    }
    else {
      *(ushort *)(param_1 + 0x90) = uVar2 & 0xffbf;
      FUN_00375bcc(param_1,DAT_002a6d8c);
    }
  }
  if ((*(float *)(param_1 + 0x6c) == fVar3) &&
     ((uVar2 = *(ushort *)(param_1 + 0x90), (uVar2 & 1) != 0 ||
      ((*(short *)(param_1 + 0x1c) == -2 && ((uVar2 & 0x20) != 0)))))) {
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe);
    iVar10 = DAT_002a6d90;
    *(byte *)(param_1 + 0x670) = *(byte *)(param_1 + 0x670) & 0xfd;
    iVar9 = *(int *)(param_1 + 0x98);
    iVar5 = iVar10 + -0xf60000;
    bVar8 = SBORROW4(iVar9,iVar10);
    iVar1 = iVar9 - iVar10;
    bVar7 = iVar9 == iVar10;
    if (iVar10 < iVar9) {
      iVar10 = *(int *)(param_1 + 0x9c);
      bVar8 = SBORROW4(iVar10,iVar5);
      iVar1 = iVar10 - iVar5;
      bVar7 = iVar10 == iVar5;
    }
    if (!bVar7 && iVar1 < 0 == bVar8) {
      uVar6 = (int)*(short *)(param_1 + 0xbc) + ((int)DAT_002a6d94 >> 1);
      bVar8 = DAT_002a6d94 <= uVar6;
      bVar7 = uVar6 == DAT_002a6d94;
      if (!bVar8 || bVar7) {
        uVar6 = (int)*(short *)(param_1 + 0xc0) + ((int)DAT_002a6d94 >> 1);
        bVar8 = DAT_002a6d94 <= uVar6;
        bVar7 = uVar6 == DAT_002a6d94;
      }
      if ((!bVar8 || bVar7) &&
         (((uVar2 & 1) != 0 || ((*(short *)(param_1 + 0x1c) == -2 && ((uVar2 & 0x20) != 0)))))) {
        FUN_00326470(param_1);
        goto LAB_002a6d64;
      }
    }
    if (((iVar9 < DAT_002a6d98) && (*(int *)(param_1 + 0x9c) <= iVar5)) &&
       ((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 6000U <=
        DAT_002a6d9c)) {
      FUN_00373d40(param_1 + 0x1a4,4);
      iVar1 = DAT_002a6da0;
      *(undefined1 *)(param_1 + 0x638) = 9;
      *(undefined2 *)(iVar1 + param_1) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_003702c8(1,3);
    }
    FUN_00392f1c(param_1);
  }
LAB_002a6d64:
  FUN_00370734(param_1 + 0x1a4);
  return;
}
