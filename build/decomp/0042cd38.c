// OoT3D decomp @ 0042cd38  name=FUN_0042cd38  size=864

void FUN_0042cd38(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_84 [4];
  float fStack_74;
  float fStack_70;
  float local_6c [4];
  float fStack_5c;
  float fStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [48];

  uVar3 = DAT_0042d0a0;
  puVar1 = DAT_0042d098;
  if (DAT_0042d098[0xe] != 0) {
    if (((*DAT_0042d09c & 1) == 0) &&
       (iVar2 = FUN_003679b4(DAT_0042d09c), puVar5 = DAT_0042d0a8, uVar4 = DAT_0042d0a4, iVar2 != 0)
       ) {
      *DAT_0042d0a8 = DAT_0042d0a4;
      puVar5[1] = uVar3;
      puVar5[2] = uVar3;
      puVar5[3] = uVar3;
      puVar5[4] = uVar3;
      puVar5[5] = uVar4;
      puVar5[6] = uVar3;
      puVar5[7] = uVar3;
      puVar5[8] = uVar3;
      puVar5[9] = uVar3;
      puVar5[10] = uVar4;
      puVar5[0xb] = uVar3;
    }
    FUN_00372224(auStack_48,DAT_0042d0a8);
    local_54 = uVar3;
    local_50 = uVar3;
    local_4c = uVar3;
    iVar2 = FUN_002f1268();
    if (iVar2 == 0) {
      puVar5 = (undefined4 *)FUN_002fc3fc(puVar1[4],0);
      uVar4 = DAT_0042d0b0;
      iVar2 = DAT_0042d0ac;
      if (*(char *)(DAT_0042d0ac + 0xe) == '\x01') {
        *puVar5 = DAT_0042d0b0;
        puVar5[3] = uVar3;
        puVar5[6] = uVar4;
        puVar5[9] = uVar3;
      }
      else {
        *puVar5 = uVar3;
        puVar5[3] = uVar4;
        puVar5[6] = uVar3;
        puVar5[9] = uVar4;
      }
      local_6c[0] = *DAT_0042d0b4;
      local_6c[1] = DAT_0042d0b4[1];
      local_6c[2] = DAT_0042d0b4[2];
      local_6c[3] = DAT_0042d0b4[3];
      fStack_5c = DAT_0042d0b4[4];
      fStack_58 = DAT_0042d0b4[5];
      local_84[0] = *DAT_0042d0b8;
      local_84[1] = DAT_0042d0b8[1];
      local_84[2] = DAT_0042d0b8[2];
      local_84[3] = DAT_0042d0b8[3];
      fStack_74 = DAT_0042d0b8[4];
      fStack_70 = DAT_0042d0b8[5];
      pfVar6 = (float *)FUN_002fc3fc(puVar1[4],0xc);
      fVar11 = DAT_0042d0bc;
      pfVar8 = local_84;
      iVar9 = 6;
      pfVar7 = local_6c;
      if (*(char *)(iVar2 + 0xe) == '\x01') {
        do {
          fVar10 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          fVar13 = *pfVar8;
          iVar9 = iVar9 + -1;
          pfVar8 = pfVar8 + 1;
          fVar12 = fVar10 - fVar11;
          *pfVar6 = fVar12;
          fVar10 = (fVar10 + fVar13) - fVar11;
          pfVar6[3] = fVar10;
          pfVar6[6] = fVar12;
          pfVar6[9] = fVar10;
          pfVar6 = pfVar6 + 0xc;
        } while (iVar9 != 0);
      }
      else {
        do {
          fVar11 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          fVar10 = *pfVar8;
          iVar9 = iVar9 + -1;
          *pfVar6 = fVar11;
          pfVar8 = pfVar8 + 1;
          pfVar6[3] = fVar11 + fVar10;
          pfVar6[6] = fVar11;
          pfVar6[9] = fVar11 + fVar10;
          pfVar6 = pfVar6 + 0xc;
        } while (iVar9 != 0);
      }
      FUN_002f9a1c(puVar1[4]);
      uVar3 = *(undefined4 *)(puVar1[4] + 0x10);
      uVar4 = FUN_002f9a0c(puVar1[4]);
      FUN_0036759c(*puVar1,uVar4,uVar3);
      uVar3 = FUN_002fc3f0(puVar1[4],0);
      uVar4 = FUN_002f9a00(puVar1[4]);
      FUN_00317d1c(*puVar1,uVar4,uVar3);
      uVar3 = FUN_002fc3e4(puVar1[4],0);
      uVar4 = FUN_002f99f4(puVar1[4]);
      FUN_002f9934(*puVar1,uVar4,uVar3);
      (**(code **)(*(int *)puVar1[1] + 8))((int *)puVar1[1],auStack_48,auStack_48,&local_54);
      if (puVar1[10] != 0) {
        FUN_002f0e08();
      }
      if (puVar1[0xb] != 0) {
        FUN_002f0c84();
      }
      if (puVar1[0x13] != 0) {
        FUN_002f94a8();
      }
      if (puVar1[0x14] != 0) {
        FUN_002f0b2c();
      }
      return;
    }
    FUN_002f9a1c(puVar1[5]);
    uVar3 = *(undefined4 *)(puVar1[5] + 0x10);
    uVar4 = FUN_002f9a0c(puVar1[5]);
    FUN_0036759c(puVar1[2],uVar4,uVar3);
    uVar3 = FUN_002fc3f0(puVar1[5],0);
    uVar4 = FUN_002f9a00(puVar1[5]);
    FUN_00317d1c(puVar1[2],uVar4,uVar3);
    uVar3 = FUN_002fc3e4(puVar1[5],0);
    uVar4 = FUN_002f99f4(puVar1[5]);
    FUN_002f9934(puVar1[2],uVar4,uVar3);
    (**(code **)(*(int *)puVar1[3] + 8))((int *)puVar1[3],auStack_48,auStack_48,&local_54);
    FUN_002f94a8(puVar1[7]);
  }
  return;
}
