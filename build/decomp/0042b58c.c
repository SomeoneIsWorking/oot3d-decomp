// OoT3D decomp @ 0042b58c  name=FUN_0042b58c  size=652

void FUN_0042b58c(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  float *pfVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 auStack_68 [48];
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;

  fVar5 = DAT_0042b828;
  fVar4 = DAT_0042b820;
  iVar3 = DAT_0042b818;
  bVar1 = *(byte *)(DAT_0042b818 + 1);
  if (bVar1 < 0x10) {
    cVar11 = *(char *)(DAT_0042b818 + 4);
    pfVar12 = (float *)(DAT_0042b818 + 0x94);
    cVar10 = *(char *)(DAT_0042b818 + 3) + '3';
    cVar2 = *(char *)(DAT_0042b818 + 2);
    if (bVar1 < 5) {
      *(char *)(DAT_0042b818 + 2) = cVar2 + '3';
      *(char *)(iVar3 + 3) = cVar10;
      *(char *)(iVar3 + 4) = cVar11 + '3';
    }
    else {
      fVar13 = *DAT_0042b81c;
      fVar14 = DAT_0042b81c[1];
      cVar11 = *(char *)(DAT_0042b818 + 4) + -0x19;
      if (bVar1 < 10) {
        *(char *)(DAT_0042b818 + 2) = cVar2 + -0x18;
        *(char *)(iVar3 + 3) = cVar10;
        *(char *)(iVar3 + 4) = cVar11;
        *pfVar12 = fVar13 + fVar4;
        *(float *)(iVar3 + 0x98) = fVar14 + DAT_0042b824;
      }
      else if (bVar1 < 0xf) {
        *(char *)(DAT_0042b818 + 2) = cVar2 + -0x1b;
        *(char *)(iVar3 + 4) = cVar11;
        *pfVar12 = fVar13 + fVar5;
        *(float *)(iVar3 + 0x98) = fVar14 + DAT_0042b82c;
      }
    }
    fVar4 = DAT_0042b834;
    local_2c = *DAT_0042b830;
    uStack_28 = DAT_0042b830[1];
    uStack_24 = DAT_0042b830[2];
    local_20 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 2),(byte)(in_fpscr >> 0x15) & 3)
    ;
    local_20 = local_20 * DAT_0042b834;
    FUN_0035bae4(*(undefined4 *)(iVar3 + 0x80),1,&local_2c);
    local_20 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 3),(byte)(in_fpscr >> 0x15) & 3)
    ;
    local_20 = local_20 * fVar4;
    FUN_0035bae4(*(undefined4 *)(iVar3 + 0x80),3,&local_2c);
    local_20 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 4),(byte)(in_fpscr >> 0x15) & 3)
    ;
    local_20 = local_20 * fVar4;
    FUN_0035bae4(*(undefined4 *)(iVar3 + 0x88),1,&local_2c);
    uVar7 = DAT_0042b840;
    uVar6 = DAT_0042b838;
    local_38 = *pfVar12;
    local_34 = *(undefined4 *)(iVar3 + 0x98);
    local_30 = DAT_0042b838;
    iVar9 = *(int *)(iVar3 + 0x88);
    *(float *)(iVar9 + 0x48) = local_38;
    *(undefined4 *)(iVar9 + 0x4c) = local_34;
    *(undefined4 *)(iVar9 + 0x50) = uVar6;
    if (((*DAT_0042b83c & 1) == 0) &&
       (iVar9 = FUN_003679b4(DAT_0042b83c), puVar8 = DAT_0042b844, iVar9 != 0)) {
      *DAT_0042b844 = uVar6;
      puVar8[1] = uVar7;
      puVar8[2] = uVar7;
      puVar8[3] = uVar7;
      puVar8[4] = uVar7;
      puVar8[5] = uVar6;
      puVar8[6] = uVar7;
      puVar8[7] = uVar7;
      puVar8[8] = uVar7;
      puVar8[9] = uVar7;
      puVar8[10] = uVar6;
      puVar8[0xb] = uVar7;
    }
    FUN_00372224(auStack_68,DAT_0042b844);
    local_74 = uVar7;
    local_70 = uVar7;
    local_6c = uVar7;
    (**(code **)(**(int **)(iVar3 + 0x80) + 8))
              (*(int **)(iVar3 + 0x80),auStack_68,auStack_68,&local_74);
    (**(code **)(**(int **)(iVar3 + 0x88) + 8))
              (*(int **)(iVar3 + 0x88),auStack_68,auStack_68,&local_74);
    *(char *)(iVar3 + 1) = *(char *)(iVar3 + 1) + '\x01';
  }
  return;
}
