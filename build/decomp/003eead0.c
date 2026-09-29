// OoT3D decomp @ 003eead0  name=FUN_003eead0  size=796

void FUN_003eead0(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float afStack_b4 [33];
  float local_30;
  float local_2c;
  float local_28;

  FUN_00371738(afStack_b4,DAT_003eedec,0x84);
  fVar4 = DAT_003eee08;
  uVar3 = DAT_003eee00;
  uVar2 = DAT_003eedfc;
  iVar8 = DAT_003eedf8;
  fVar12 = DAT_003eedf4;
  fVar13 = DAT_003eedf0;
  uVar7 = param_2 + 0x5300;
  uVar1 = (undefined2)DAT_003eee04;
  if (*(short *)(param_2 + 0x53f0) < 0xff) {
    if (((*(short *)(param_2 + 0x53f0) == 0) && (0xfe < *(short *)(param_2 + 0x53f2))) &&
       (iVar5 = *(int *)(param_2 + 0x20ac), fVar14 = *(float *)(iVar5 + 0x28) - DAT_003eedf0,
       fVar10 = *(float *)(iVar5 + 0x2c) - DAT_003eee08,
       fVar11 = *(float *)(iVar5 + 0x30) - DAT_003eedf4,
       (int)SQRT(fVar14 * fVar14 + fVar10 * fVar10 + fVar11 * fVar11) < DAT_003eedf8)) {
      *(undefined4 *)(iVar5 + 0x108) = DAT_003eedfc;
      *(undefined4 *)(iVar5 + 8) = uVar2;
      *(undefined4 *)(iVar5 + 0x28) = uVar2;
      *(float *)(iVar5 + 0x10c) = fVar4;
      *(float *)(iVar5 + 0xc) = fVar4;
      *(float *)(iVar5 + 0x2c) = fVar4;
      *(undefined4 *)(iVar5 + 0x110) = uVar3;
      *(undefined4 *)(iVar5 + 0x10) = uVar3;
      *(undefined4 *)(iVar5 + 0x30) = uVar3;
      *(undefined2 *)(iVar5 + 0xbe) = uVar1;
    }
    *(short *)(param_2 + 0x53f0) = *(short *)(param_2 + 0x53f0) + 5;
  }
  if (*(short *)(param_2 + 0x53f2) < 0xff) {
    bVar9 = *(short *)(param_2 + 0x53f0) == 0xff;
    if (0xfe < *(short *)(param_2 + 0x53f0)) {
      bVar9 = *(short *)(param_2 + 0x53f2) == 0;
    }
    if ((bVar9) &&
       (iVar5 = *(int *)(param_2 + 0x20ac), fVar13 = *(float *)(iVar5 + 0x28) - fVar13,
       fVar12 = *(float *)(iVar5 + 0x30) - fVar12, fVar10 = *(float *)(iVar5 + 0x2c) - fVar4,
       (int)SQRT(fVar13 * fVar13 + fVar10 * fVar10 + fVar12 * fVar12) < iVar8)) {
      *(undefined4 *)(iVar5 + 0x108) = uVar2;
      *(undefined4 *)(iVar5 + 8) = uVar2;
      *(undefined4 *)(iVar5 + 0x28) = uVar2;
      *(float *)(iVar5 + 0x10c) = fVar4;
      *(float *)(iVar5 + 0xc) = fVar4;
      *(float *)(iVar5 + 0x2c) = fVar4;
      *(undefined4 *)(iVar5 + 0x110) = uVar3;
      *(undefined4 *)(iVar5 + 0x10) = uVar3;
      *(undefined4 *)(iVar5 + 0x30) = uVar3;
      *(undefined2 *)(iVar5 + 0xbe) = uVar1;
    }
    *(short *)(param_2 + 0x53f2) = *(short *)(param_2 + 0x53f2) + 5;
  }
  uVar2 = DAT_003eee10;
  bVar9 = *(short *)(param_2 + 0x53f0) == 0xff;
  if (bVar9) {
    uVar7 = (uint)*(ushort *)(param_2 + 0x53f2);
  }
  if (bVar9 && uVar7 == 0xff) {
    if (*(int *)(DAT_003eee0c + 4) == 0x6c) {
      iVar8 = 10;
      do {
        local_30 = *(float *)(param_1 + 0x28) + afStack_b4[iVar8 * 3];
        local_2c = *(float *)(param_1 + 0x2c) + afStack_b4[iVar8 * 3 + 1];
        local_28 = *(float *)(param_1 + 0x30) + afStack_b4[iVar8 * 3 + 2];
        FUN_0037378c(uVar2,param_2,&local_30,3,200,0x4b,1);
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
    fVar4 = DAT_003eee1c;
    fVar12 = DAT_003eee18;
    fVar13 = DAT_003eee14;
    local_30 = *(float *)(param_1 + 0x28) + DAT_003eee14;
    local_2c = *(float *)(param_1 + 0x2c) - DAT_003eee18;
    local_28 = *(float *)(param_1 + 0x30) + DAT_003eee1c;
    FUN_00314ab8(&local_30,param_2);
    local_30 = *(float *)(param_1 + 0x28) - fVar13;
    local_2c = *(float *)(param_1 + 0x2c) - fVar12;
    local_28 = *(float *)(param_1 + 0x30) + fVar4;
    FUN_00314ab8(&local_30,param_2);
    FUN_00372aa8(param_1 + 0x1bc,100,3);
    iVar8 = FUN_00375a18(param_1 + 0xbc,DAT_003eee20,
                         (int)(short)(0x6e - *(short *)(param_1 + 0x1bc)),1000,0x32);
    uVar3 = DAT_003eee2c;
    uVar2 = DAT_003eee28;
    uVar6 = DAT_003eee34;
    if (iVar8 == 0) {
      *(undefined4 *)(param_1 + 0x2c8) = DAT_003eee24;
      uVar6 = DAT_003eee30;
    }
    FUN_0037547c(uVar6,param_1 + 0x28,4,uVar3,uVar3,uVar2);
  }
  else {
    *(int *)(DAT_003eee0c + 4) = *(int *)(DAT_003eee0c + 4) + -1;
  }
  return;
}
