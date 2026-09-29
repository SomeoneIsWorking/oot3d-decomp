// OoT3D decomp @ 002b4410  name=FUN_002b4410  size=1452

void FUN_002b4410(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined4 local_3c;
  float local_38;
  undefined4 uStack_34;

  iVar7 = FUN_00370734(param_1 + 0x1a4);
  uVar8 = DAT_002b47c8;
  fVar3 = DAT_002b47c4;
  uVar2 = DAT_002b47c0;
  if (iVar7 == 0) goto LAB_002b4644;
  iVar7 = (int)*(short *)(param_1 + 0x658);
  if (iVar7 == 0) {
    *(undefined2 *)(param_1 + 0x658) = 1;
    uVar5 = DAT_002b47d0;
    uVar4 = DAT_002b47cc;
    if ((*(short *)(param_1 + 0x1c) == -2) && ((*(ushort *)(param_1 + 0x90) & 0x20) != 0)) {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x88);
      FUN_00375bcc(param_1,uVar5);
    }
    else {
      if (*(uint *)(param_1 + 0x84) < uVar8) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x84);
      }
      FUN_00375bcc(param_1,uVar4);
    }
    *(undefined4 *)(param_1 + 100) = DAT_002b47d4;
    *(undefined4 *)(param_1 + 0x70) = DAT_002b47d8;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
  }
  else if (iVar7 == 1) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
    uVar1 = *(ushort *)(param_1 + 0x90);
    if ((((uVar1 & 3) != 0) || ((*(short *)(param_1 + 0x1c) == -2 && ((uVar1 & 0x20) != 0)))) &&
       (*(float *)(param_1 + 100) <= fVar3)) {
      *(undefined2 *)(param_1 + 0x658) = 2;
      if ((*(short *)(param_1 + 0x1c) == -2) && ((uVar1 & 0x20) != 0)) {
        *(float *)(param_1 + 0x70) = fVar3;
        if ((uint)*(float *)(param_1 + 100) < 0xc1000001) goto LAB_002b45dc;
        local_3c = *(undefined4 *)(param_1 + 0x28);
        uStack_34 = *(undefined4 *)(param_1 + 0x30);
        local_38 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x88);
        *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * DAT_002b47dc;
        sVar6 = *(short *)(param_1 + 0x658) + 1;
        iVar7 = (int)sVar6;
        *(short *)(param_1 + 0x658) = sVar6;
        FUN_00362068(param_2,&local_3c,0,500,0);
      }
      else {
        if (*(uint *)(param_1 + 0x84) < uVar8) {
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x84);
        }
LAB_002b45dc:
        *(float *)(param_1 + 100) = fVar3;
        *(float *)(param_1 + 0x6c) = fVar3;
      }
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    }
  }
  else if (iVar7 == 2) {
    if (*(char *)(param_1 + 0x65a) == '\0') {
      FUN_00326404(param_1);
    }
    else {
      *(char *)(param_1 + 0x65a) = *(char *)(param_1 + 0x65a) + -1;
      *(undefined2 *)(param_1 + 0x658) = 0;
      *(byte *)(param_1 + 0x670) = *(byte *)(param_1 + 0x670) & 0xfd;
    }
  }
  else {
    bVar10 = false;
    if (iVar7 == 3) {
      bVar10 = *(float *)(param_1 + 0x88) == DAT_002b47c4;
    }
    if (bVar10) {
      *(undefined2 *)(param_1 + 0x658) = 2;
      goto LAB_002b4644;
    }
  }
  if (*(short *)(param_1 + 0x658) != iVar7) {
    FUN_00373d40(param_1 + 0x1a4,*(undefined4 *)(DAT_002b47e0 + *(short *)(param_1 + 0x658) * 4));
  }
LAB_002b4644:
  uVar5 = DAT_002b47e8;
  uVar4 = DAT_002b47e4;
  sVar6 = *(short *)(param_1 + 0x658);
  if (sVar6 == 0) {
    FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),1,1000,0);
    iVar7 = DAT_002b49f4;
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0x36);
    if ((iVar7 < *(int *)(param_1 + 0x98)) && (iVar7 + -0xf60000 < *(int *)(param_1 + 0x9c))) {
      FUN_00326470(param_1);
    }
    else if (DAT_002b49f8 <
             (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0x36)) + 8999U) {
      FUN_00326404(param_1);
    }
  }
  else if (sVar6 == 1) {
    if ((DAT_002b49fc <= *(int *)(param_1 + 100)) && ((*(ushort *)(param_1 + 0x90) & 1) != 0)) {
      FUN_0034c128(param_2,param_1 + 0x6d0);
      FUN_0034c128(param_2,param_1 + 0x6dc);
      FUN_0034c128(param_2,param_1 + 0x6e8);
      FUN_0034c128(param_2,param_1 + 0x6f4);
    }
    if (((*(byte *)(param_1 + 0x670) & 2) == 0) && ((*(uint *)(param_1 + 4) & 0x40) != 0)) {
      FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x660);
    }
    else {
      uVar9 = *(uint *)(DAT_002b4a00 + param_2);
      *(byte *)(param_1 + 0x670) = *(byte *)(param_1 + 0x670) & 0xfd;
      FUN_00370350(uVar2,param_1 + 0x1a4,0);
      *(undefined4 *)(param_1 + 0x6c) = DAT_002b4a04;
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
      uVar8 = *(uint *)(param_1 + 0x664);
      bVar10 = uVar8 == uVar9;
      if (bVar10) {
        uVar8 = (uint)*(byte *)(param_1 + 0x670);
      }
      if (bVar10 && (uVar8 & 4) == 0) {
        FUN_00375bcc(uVar9,DAT_002b4a08);
      }
      *(undefined4 *)(param_1 + 0x63c) = DAT_002b4a0c;
    }
  }
  else if (sVar6 == 2) {
    FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),1,DAT_002b4a10,0);
  }
  else if (sVar6 == 3) {
    FUN_0036e168(fVar3,DAT_002b47e4,DAT_002b47e8,fVar3,param_1 + 100);
    FUN_0036e168(fVar3,uVar4,DAT_002b47ec,fVar3,param_1 + 0x6c);
    FUN_0036e168(*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x88),uVar4,uVar5,fVar3,
                 param_1 + 0x2c);
  }
  if (((*(ushort *)(param_1 + 0x90) & 2) != 0) && ((*(ushort *)(param_1 + 0x90) & 0x20) == 0)) {
    local_3c = 1;
    FUN_0037378c(uVar4,param_2,param_1 + 0x6d0,2,0x50,0xf);
    local_3c = 1;
    FUN_0037378c(uVar4,param_2,param_1 + 0x6dc,2,0x50,0xf);
    local_3c = 1;
    FUN_0037378c(uVar4,param_2,param_1 + 0x6e8,2,0x50,0xf);
    local_3c = 1;
    FUN_0037378c(uVar4,param_2,param_1 + 0x6f4,2,0x50,0xf);
  }
  uVar2 = DAT_002b47f0;
  uVar1 = *(ushort *)(param_1 + 0x90);
  if (*(short *)(param_1 + 0x1c) == -2) {
    if ((uVar1 & 0x40) == 0) {
      if ((uVar1 & 2) != 0) {
        FUN_00375bcc(param_1,DAT_002b47f0);
        return;
      }
    }
    else {
      *(float *)(param_1 + 0x6c) = fVar3;
      if (*(short *)(param_1 + 0x658) == 3) {
        FUN_00375bcc(param_1,DAT_002b47f4);
      }
      else {
        FUN_00375bcc(param_1,DAT_002b4a14);
      }
      *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xffbf;
    }
  }
  else if ((uVar1 & 2) != 0) {
    *(float *)(param_1 + 0x6c) = fVar3;
    FUN_00375bcc(param_1,uVar2);
    return;
  }
  return;
}
