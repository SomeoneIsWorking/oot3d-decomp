// OoT3D decomp @ 002b4c60  name=FUN_002b4c60  size=832

void FUN_002b4c60(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;

  iVar9 = DAT_002b4f80;
  uVar3 = DAT_002b4f7c;
  uVar2 = DAT_002b4f78;
  uVar1 = DAT_002b4f74;
  uVar10 = DAT_002b4f70;
  fVar15 = DAT_002b4f6c;
  uVar18 = DAT_002b4f68;
  iVar14 = FUN_00363e64(param_1,DAT_002b4f80 + *(short *)(param_1 + 0xa6e) * 0xc);
  iVar13 = *(int *)(param_1 + 0xa50);
  if ((*(uint *)(DAT_002b4f84 + param_2) & 0x5f) == 0) {
    FUN_00375bcc(param_1,DAT_002b4f88);
  }
  if (DAT_002b4f8c <= *(int *)(param_1 + 0x2c)) {
    fVar15 = DAT_002b4f90;
  }
  uVar7 = FUN_00367358(param_1,iVar9 + *(short *)(param_1 + 0xa6e) * 0xc);
  fVar4 = DAT_002b4f98;
  iVar9 = DAT_002b4f94;
  iVar11 = *(int *)(param_1 + 0xa50);
  if (iVar11 != 0) {
    if (iVar11 == 1) {
      if ((*(ushort *)(param_1 + 0x90) & 3) == 0) {
        FUN_00375a18(param_1 + 0x36,uVar7,1,4000,0);
        *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0x36) + -0x8000;
        *(int *)(iVar9 + 0x28) = *(int *)(iVar9 + 0x28) + 1;
        goto LAB_002b4d30;
      }
      FUN_00375bcc(param_1,DAT_002b4fb8);
      uVar18 = DAT_002b4fbc;
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
      *(float *)(param_1 + 100) = fVar4;
      uVar10 = DAT_002b4fc0;
      *(float *)(param_1 + 0x6c) = fVar4;
      FUN_0036f00c(uVar10,uVar18,param_2,param_1,param_1 + 0xb68,2,0,0,0);
      FUN_0036f00c(uVar10,uVar18,param_2,param_1,param_1 + 0xb5c,2,0,0,0);
      if (*(float *)(param_1 + 0x98) < fVar15) {
        if (iVar14 < DAT_002b4fc4) {
          uVar10 = FUN_00373fa4(param_1 + 0x28,(int)*(short *)(param_1 + 0xa6a));
          *(short *)(param_1 + 0xa6a) = (short)uVar10;
          uVar6 = FUN_00373d98(param_1 + 0x28,uVar10,(int)*(short *)(param_1 + 0xa6c),param_2);
          *(undefined2 *)(param_1 + 0xa6e) = uVar6;
        }
      }
      else {
        FUN_00320e28(param_1);
      }
    }
    else if ((iVar11 != 2) || (*(float *)(param_1 + 0x1e0) != *(float *)(param_1 + 0x1ec)))
    goto LAB_002b4d30;
    *(undefined4 *)(param_1 + 0xa50) = 0;
    goto LAB_002b4d30;
  }
  *(short *)(param_1 + 0x36) = (short)uVar7;
  *(short *)(param_1 + 0xbe) = (short)uVar7 + -0x8000;
  *(undefined4 *)(iVar9 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0xa6c) = *(undefined2 *)(param_1 + 0xa6a);
  uVar8 = FUN_003740fc(uVar1,param_1,param_2);
  uVar12 = 1 - uVar8;
  if (1 < uVar8) {
    uVar12 = 0;
  }
  uVar8 = FUN_003740fc(uVar10,param_1,param_2);
  iVar9 = 1 - uVar8;
  if (1 < uVar8) {
    iVar9 = 0;
  }
  *(int *)(param_1 + 0xa50) = *(int *)(param_1 + 0xa50) + 1;
  uVar10 = DAT_002b4fa0;
  uVar12 = uVar12 | iVar9 << 1;
  *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffc;
  fVar5 = DAT_002b4fb0;
  fVar15 = DAT_002b4fa8;
  if (uVar12 != 1) {
    if (uVar12 == 2) {
      *(undefined4 *)(param_1 + 100) = DAT_002b4fa4;
      *(undefined4 *)(param_1 + 0x6c) = uVar3;
      goto LAB_002b4d30;
    }
    if (uVar12 != 3) {
      iVar9 = 0x14;
      fVar16 = DAT_002b4fb4;
      fVar17 = DAT_002b4fac;
      do {
        iVar14 = FUN_003740fc(fVar17,param_1,param_2);
        if (iVar14 == 0) {
          *(undefined4 *)(param_1 + 100) = uVar10;
          *(float *)(param_1 + 0x6c) = fVar16;
          break;
        }
        fVar17 = fVar17 + fVar15;
        fVar16 = fVar16 + fVar5;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
      if (*(float *)(param_1 + 0x6c) == fVar4) {
        FUN_00320e28(param_1);
      }
      goto LAB_002b4d30;
    }
  }
  *(undefined4 *)(param_1 + 100) = uVar10;
  if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
    *(undefined4 *)(param_1 + 100) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
LAB_002b4d30:
  if (*(int *)(param_1 + 0xa50) != iVar13) {
    FUN_0037422c(uVar18,param_1 + 0x1a4,
                 *(undefined4 *)(DAT_002b4f9c + *(int *)(param_1 + 0xa50) * 4));
  }
  FUN_003731e0(param_1 + 0x1a4);
  return;
}
