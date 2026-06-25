// OoT3D decomp @ 00376340  name=FUN_00376340  size=1204

/* WARNING: Type propagation algorithm not settling */

void FUN_00376340(undefined4 param_1,undefined4 param_2,float param_3,int param_4,int param_5,
                 uint param_6)

{
  float fVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  int local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  
  fVar12 = *(float *)(param_5 + 0x2c) - *(float *)(param_5 + 0x10c);
  bVar7 = *(char *)(param_5 + 0x81) == '2';
  if (!bVar7) {
    bVar7 = (*(ushort *)(param_5 + 0x90) & 1) == 0;
  }
  iVar6 = param_4 + 0xa98;
  if (!bVar7) {
    FUN_00330454(iVar6,*(char *)(param_5 + 0x81),param_5);
  }
  if ((param_6 & 1) != 0) {
    local_48 = param_5;
    if ((param_6 & 0x80) == 0) {
      iVar4 = FUN_002bb780();
    }
    else {
      iVar4 = FUN_00496d48(param_2,param_1,iVar6,&local_34,param_5 + 0x28,param_5 + 0x108,
                           param_5 + 0x78,&local_38);
    }
    if (iVar4 == 0) {
      *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) & 0xfff7;
    }
    else {
      iVar4 = *(int *)(param_5 + 0x78);
      FUN_0036df4c(param_5 + 0x28,&local_34);
      uVar11 = VectorSignedToFloat((int)*(short *)(iVar4 + 10),(byte)(in_fpscr >> 0x15) & 3);
      uVar8 = VectorSignedToFloat((int)*(short *)(iVar4 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
      uVar2 = FUN_003758b0(uVar8,uVar11);
      *(undefined2 *)(param_5 + 0x82) = uVar2;
      *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) | 8;
      *(char *)(param_5 + 0x80) = SUB41(local_38,0);
    }
  }
  fVar1 = DAT_003767d4;
  local_34 = *(undefined4 *)(param_5 + 0x28);
  local_2c = *(undefined4 *)(param_5 + 0x30);
  if ((param_6 & 2) != 0) {
    local_30 = *(float *)(param_5 + 0x10c) + DAT_003767d4;
    iVar4 = FUN_002c1ce4((param_3 + fVar12) - DAT_003767d4,iVar6,&local_38,&local_34,
                         DAT_003767d8 + -4,DAT_003767d8,param_5);
    if (iVar4 == 0) {
      *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) & 0xffef;
    }
    else {
      *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) | 0x10;
      *(float *)(param_5 + 0x2c) = (local_38 + fVar12) - fVar1;
    }
  }
  if ((param_6 & 4) == 0) {
    return;
  }
  local_30 = *(float *)(param_5 + 0x10c) + DAT_003767dc;
  fVar9 = (float)FUN_00316c18(param_4,iVar6,param_5 + 0x7c,&local_38,param_5,&local_34);
  *(float *)(param_5 + 0x84) = fVar9;
  uVar8 = DAT_003767e4;
  fVar12 = DAT_003767e0;
  *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) & 0xff79;
  fVar1 = DAT_003767e8;
  if ((uint)fVar9 < (uint)fVar12) {
    *(char *)(param_5 + 0x81) = SUB41(local_38,0);
    fVar12 = DAT_003767f8;
    fVar9 = fVar9 - *(float *)(param_5 + 0x2c);
    fVar10 = fVar9;
    if ((*(byte *)(param_5 + 0x20) & 1) != 0) {
      fVar10 = (float)VectorSignedToFloat((int)fVar9,(byte)(in_fpscr >> 0x15) & 3);
    }
    if (fVar10 < fVar1 == (NAN(fVar10) || NAN(fVar1))) {
      uVar3 = *(ushort *)(param_5 + 0x90);
      *(ushort *)(param_5 + 0x90) = uVar3 | 0x80;
      if ((uVar3 & 0x10) != 0) {
        if (*(float *)(DAT_003767ec + 0x8c) == local_38) {
          *(undefined4 *)(param_5 + 0x28) = *(undefined4 *)(param_5 + 0x108);
          *(undefined4 *)(param_5 + 0x30) = *(undefined4 *)(param_5 + 0x110);
        }
        else {
          psVar5 = (short *)FUN_00359690(iVar6);
          if ((DAT_003767f0 < (int)fVar9) && ((psVar5 == (short *)0x0 || (*psVar5 != 10)))) {
            *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) | 0x100;
          }
        }
      }
      *(undefined4 *)(param_5 + 0x2c) = *(undefined4 *)(param_5 + 0x84);
      if (*(float *)(param_5 + 100) <= fVar1) {
        if ((*(ushort *)(param_5 + 0x90) & 1) == 0) {
          *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) | 2;
        }
        else {
          bVar7 = true;
          if ((param_6 & 8) != 0) {
            bVar7 = fVar1 <= *(float *)(param_5 + 0x70);
          }
          if (bVar7) {
            *(float *)(param_5 + 100) = fVar1;
          }
          else {
            *(undefined4 *)(param_5 + 100) = DAT_003767f4;
          }
        }
        *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) | 1;
        FUN_002bb728(iVar6,param_5,*(undefined *)(param_5 + 0x81));
      }
      goto LAB_003766ec;
    }
    if (((*(ushort *)(param_5 + 0x90) & 1) != 0) && ((uint)fVar9 <= (uint)DAT_003767f8)) {
      FUN_002bb728(iVar6,param_5);
    }
    uVar3 = *(ushort *)(param_5 + 0x90);
    bVar7 = (uVar3 & 1) != 0;
    fVar10 = (float)(uVar3 & 1);
    if (bVar7) {
      fVar10 = fVar9;
    }
    if (bVar7 && (uint)fVar10 < (uint)fVar12 || (!bVar7 || fVar10 == fVar12)) goto LAB_003766ec;
    *(ushort *)(param_5 + 0x90) = uVar3 & 0xfffe | 4;
    fVar12 = *(float *)(param_5 + 100);
  }
  else {
    if ((*(ushort *)(param_5 + 0x90) & 1) == 0) goto LAB_003766ec;
    *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) & 0xfffe | 4;
    fVar12 = *(float *)(param_5 + 100);
  }
  if ((fVar12 < fVar1) && ((param_6 & 0x10) != 0)) {
    *(float *)(param_5 + 100) = fVar1;
  }
LAB_003766ec:
  local_3c = *(float *)(param_5 + 0x2c);
  iVar6 = FUN_0033eeb8(*(undefined4 *)(param_5 + 0x28),*(undefined4 *)(param_5 + 0x30),param_4,iVar6
                       ,&local_3c,&local_38);
  if (iVar6 == 0) {
    *(undefined4 *)(param_5 + 0x88) = uVar8;
    *(float *)(param_5 + 0x8c) = fVar1;
    uVar3 = *(ushort *)(param_5 + 0x90) & 0xff9f;
  }
  else {
    fVar12 = local_3c - *(float *)(param_5 + 0x2c);
    *(float *)(param_5 + 0x88) = fVar12;
    *(float *)(param_5 + 0x8c) = local_3c;
    uVar3 = *(ushort *)(param_5 + 0x90);
    if (fVar12 < fVar1) {
      *(ushort *)(param_5 + 0x90) = uVar3 & 0xff9f;
      return;
    }
    if (((uVar3 & 0x20) == 0) && (*(ushort *)(param_5 + 0x90) = uVar3 | 0x40, (param_6 & 0x40) == 0)
       ) {
      local_48 = *(int *)(param_5 + 0x28);
      local_44 = local_3c;
      local_40 = *(undefined4 *)(param_5 + 0x30);
      FUN_00362068(param_4,&local_48,100,500,0);
      FUN_00362068(param_4,&local_48,100,500,4);
      FUN_00362068(param_4,&local_48,100,500,8);
    }
    uVar3 = *(ushort *)(param_5 + 0x90) | 0x20;
  }
  *(ushort *)(param_5 + 0x90) = uVar3;
  return;
}

