// OoT3D decomp @ 001be63c  name=FUN_001be63c  size=572

void FUN_001be63c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [12];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [48];

  uVar3 = DAT_001be884;
  uVar2 = DAT_001be880;
  uVar1 = DAT_001be87c;
  iVar10 = DAT_001be878;
  if ((*(ushort *)(param_1 + 0x1c) & 0x80) != 0) {
    if (((*(uint *)(DAT_001be878 + 8) & 1) == 0) &&
       (iVar9 = FUN_003679b4(DAT_001be878 + 8), puVar4 = DAT_001be888, iVar9 != 0)) {
      *DAT_001be888 = uVar1;
      puVar4[1] = uVar2;
      puVar4[2] = uVar3;
    }
    uVar5 = DAT_001be88c;
    if (((*(uint *)(iVar10 + 4) & 1) == 0) &&
       (iVar10 = FUN_003679b4(DAT_001be890), puVar4 = DAT_001be894, iVar10 != 0)) {
      *DAT_001be894 = uVar1;
      puVar4[1] = uVar5;
      puVar4[2] = uVar3;
    }
    local_64 = DAT_001be898;
    local_60 = uVar2;
    local_5c = uVar3;
    local_70 = DAT_001be898;
    local_6c = uVar5;
    local_68 = uVar3;
    FUN_00372224(auStack_b8,param_1 + 0x148);
    FUN_003735ac(auStack_7c,auStack_b8,DAT_001be888);
    FUN_003735ac(auStack_88,auStack_b8,DAT_001be894);
    FUN_003735ac(param_1 + 0x750,auStack_b8,&local_64);
    FUN_003735ac(param_1 + 0x744,auStack_b8,&local_70);
    FUN_0035479c(param_1 + 0x704,auStack_88,auStack_7c,param_1 + 0x744,param_1 + 0x750);
  }
  iVar10 = FUN_003695f8();
  if (iVar10 == 0) {
    *(undefined4 *)(param_1 + 0x3d4) = DAT_001be8a0;
    *(short *)(param_1 + 0x62e) = *(short *)(param_1 + 0x62e) + -2000;
    fVar12 = (float)FUN_00338f60();
    fVar8 = DAT_001be8ac;
    fVar7 = DAT_001be8a8;
    fVar6 = DAT_001be8a4;
    iVar10 = 3;
    fVar12 = DAT_001be8a8 + fVar12 * DAT_001be8a4;
    *(float *)(param_1 + 0x54) = fVar12;
    *(float *)(param_1 + 0x5c) = fVar12;
    do {
      fVar12 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x62e) + (short)iVar10 * 0x2000
                                               ));
      iVar11 = param_1 + iVar10 * 0xc;
      iVar9 = param_1 + iVar10 * 6;
      fVar12 = fVar7 + fVar12 * fVar6 * fVar8;
      *(float *)(iVar11 + 0x668) = fVar12;
      *(float *)(iVar11 + 0x66c) = fVar12;
      *(undefined2 *)(iVar9 + 0x694) = *(undefined2 *)(param_1 + 0xbe);
      *(undefined2 *)(iVar9 + 0x696) = *(undefined2 *)(param_1 + 0xbc);
      *(undefined2 *)(iVar9 + 0x698) = *(undefined2 *)(param_1 + 0xc0);
      iVar10 = (int)(short)((short)iVar10 + -1);
    } while (-1 < iVar10);
    FUN_00373bec(param_1 + 0x3c8);
  }
  else {
    *(undefined4 *)(param_1 + 0x3d4) = DAT_001be89c;
  }
  FUN_0035e240(param_1 + 0x1a4,auStack_58,0,DAT_001be8b0,param_1,0);
  return;
}
