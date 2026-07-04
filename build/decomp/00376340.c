// OoT3D decomp @ 00376340  name=FUN_00376340  size=1204

/* WARNING: Type propagation algorithm not settling */

void FUN_00376340(undefined4 param_1,undefined4 param_2,float param_3,uint param_4,int param_5,
                 uint param_6)

{
  char cVar1;
  float fVar2;
  undefined2 uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  int local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  
  cVar1 = *(char *)(param_5 + 0x81);
  fVar14 = *(float *)(param_5 + 0x2c) - *(float *)(param_5 + 0x10c);
  uVar5 = param_4;
  if (cVar1 != '2') {
    uVar5 = (uint)*(ushort *)(param_5 + 0x90);
  }
  iVar8 = param_4 + 0xa98;
  if (cVar1 != '2' && (uVar5 & 1) != 0) {
    FUN_00330454(iVar8,cVar1,param_5);
  }
  if ((param_6 & 1) != 0) {
    local_48 = param_5;
    if ((param_6 & 0x80) == 0) {
      iVar6 = FUN_002bb780();
    }
    else {
      iVar6 = FUN_00496d48(param_2,param_1,iVar8,&local_34,param_5 + 0x28,param_5 + 0x108,
                           param_5 + 0x78,&local_38);
    }
    if (iVar6 == 0) {
      *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) & 0xfff7;
    }
    else {
      iVar6 = *(int *)(param_5 + 0x78);
      FUN_0036df4c(param_5 + 0x28,&local_34);
      uVar13 = VectorSignedToFloat((int)*(short *)(iVar6 + 10),(byte)(in_fpscr >> 0x15) & 3);
      uVar10 = VectorSignedToFloat((int)*(short *)(iVar6 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
      uVar3 = FUN_003758b0(uVar10,uVar13);
      *(undefined2 *)(param_5 + 0x82) = uVar3;
      *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) | 8;
      *(char *)(param_5 + 0x80) = SUB41(local_38,0);
    }
  }
  fVar2 = DAT_003767d4;
  local_34 = *(undefined4 *)(param_5 + 0x28);
  local_2c = *(undefined4 *)(param_5 + 0x30);
  if ((param_6 & 2) != 0) {
    local_30 = *(float *)(param_5 + 0x10c) + DAT_003767d4;
    iVar6 = FUN_002c1ce4((param_3 + fVar14) - DAT_003767d4,iVar8,&local_38,&local_34,
                         DAT_003767d8 + -4,DAT_003767d8,param_5);
    if (iVar6 == 0) {
      *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) & 0xffef;
    }
    else {
      *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) | 0x10;
      *(float *)(param_5 + 0x2c) = (local_38 + fVar14) - fVar2;
    }
  }
  if ((param_6 & 4) == 0) {
    return;
  }
  local_30 = *(float *)(param_5 + 0x10c) + DAT_003767dc;
  fVar11 = (float)FUN_00316c18(param_4,iVar8,param_5 + 0x7c,&local_38,param_5,&local_34);
  *(float *)(param_5 + 0x84) = fVar11;
  uVar10 = DAT_003767e4;
  fVar14 = DAT_003767e0;
  *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) & 0xff79;
  fVar2 = DAT_003767e8;
  if ((uint)fVar11 < (uint)fVar14) {
    *(char *)(param_5 + 0x81) = SUB41(local_38,0);
    fVar14 = DAT_003767f8;
    fVar11 = fVar11 - *(float *)(param_5 + 0x2c);
    fVar12 = fVar11;
    if ((*(byte *)(param_5 + 0x20) & 1) != 0) {
      fVar12 = (float)VectorSignedToFloat((int)fVar11,(byte)(in_fpscr >> 0x15) & 3);
    }
    if (fVar2 <= fVar12) {
      uVar4 = *(ushort *)(param_5 + 0x90);
      *(ushort *)(param_5 + 0x90) = uVar4 | 0x80;
      if ((uVar4 & 0x10) != 0) {
        if (*(float *)(DAT_003767ec + 0x8c) == local_38) {
          *(undefined4 *)(param_5 + 0x28) = *(undefined4 *)(param_5 + 0x108);
          *(undefined4 *)(param_5 + 0x30) = *(undefined4 *)(param_5 + 0x110);
        }
        else {
          psVar7 = (short *)FUN_00359690(iVar8);
          if ((DAT_003767f0 < (int)fVar11) && ((psVar7 == (short *)0x0 || (*psVar7 != 10)))) {
            *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) | 0x100;
          }
        }
      }
      *(undefined4 *)(param_5 + 0x2c) = *(undefined4 *)(param_5 + 0x84);
      if (*(float *)(param_5 + 100) <= fVar2) {
        if ((*(ushort *)(param_5 + 0x90) & 1) == 0) {
          *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) | 2;
        }
        else {
          bVar9 = true;
          if ((param_6 & 8) != 0) {
            bVar9 = fVar2 <= *(float *)(param_5 + 0x70);
          }
          if (bVar9) {
            *(float *)(param_5 + 100) = fVar2;
          }
          else {
            *(undefined4 *)(param_5 + 100) = DAT_003767f4;
          }
        }
        *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) | 1;
        FUN_002bb728(iVar8,param_5,*(undefined1 *)(param_5 + 0x81));
      }
      goto LAB_003766ec;
    }
    if (((*(ushort *)(param_5 + 0x90) & 1) != 0) && ((uint)fVar11 <= (uint)DAT_003767f8)) {
      FUN_002bb728(iVar8,param_5);
    }
    uVar4 = *(ushort *)(param_5 + 0x90);
    bVar9 = (uVar4 & 1) != 0;
    fVar12 = (float)(uVar4 & 1);
    if (bVar9) {
      fVar12 = fVar11;
    }
    if (!bVar9 || (uint)fVar12 <= (uint)fVar14) goto LAB_003766ec;
    *(ushort *)(param_5 + 0x90) = uVar4 & 0xfffe | 4;
    fVar14 = *(float *)(param_5 + 100);
  }
  else {
    if ((*(ushort *)(param_5 + 0x90) & 1) == 0) goto LAB_003766ec;
    *(ushort *)(param_5 + 0x90) = *(ushort *)(param_5 + 0x90) & 0xfffe | 4;
    fVar14 = *(float *)(param_5 + 100);
  }
  if ((fVar14 < fVar2) && ((param_6 & 0x10) != 0)) {
    *(float *)(param_5 + 100) = fVar2;
  }
LAB_003766ec:
  local_3c = *(float *)(param_5 + 0x2c);
  iVar8 = FUN_0033eeb8(*(undefined4 *)(param_5 + 0x28),*(undefined4 *)(param_5 + 0x30),param_4,iVar8
                       ,&local_3c,&local_38);
  if (iVar8 == 0) {
    *(undefined4 *)(param_5 + 0x88) = uVar10;
    *(float *)(param_5 + 0x8c) = fVar2;
    uVar4 = *(ushort *)(param_5 + 0x90) & 0xff9f;
  }
  else {
    fVar14 = local_3c - *(float *)(param_5 + 0x2c);
    *(float *)(param_5 + 0x88) = fVar14;
    *(float *)(param_5 + 0x8c) = local_3c;
    uVar4 = *(ushort *)(param_5 + 0x90);
    if (fVar14 < fVar2) {
      *(ushort *)(param_5 + 0x90) = uVar4 & 0xff9f;
      return;
    }
    if (((uVar4 & 0x20) == 0) && (*(ushort *)(param_5 + 0x90) = uVar4 | 0x40, (param_6 & 0x40) == 0)
       ) {
      local_48 = *(int *)(param_5 + 0x28);
      local_44 = local_3c;
      local_40 = *(undefined4 *)(param_5 + 0x30);
      FUN_00362068(param_4,&local_48,100,500,0);
      FUN_00362068(param_4,&local_48,100,500,4);
      FUN_00362068(param_4,&local_48,100,500,8);
    }
    uVar4 = *(ushort *)(param_5 + 0x90) | 0x20;
  }
  *(ushort *)(param_5 + 0x90) = uVar4;
  return;
}

