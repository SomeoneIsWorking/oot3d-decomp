// OoT3D decomp @ 00110a70  name=FUN_00110a70  size=924

void FUN_00110a70(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int aiStack_3c [8];

  if ((((int)*(short *)(param_1 + 0x1c) & 0x4000U) != 0) &&
     (iVar4 = FUN_0036e864(param_2,(uint)((int)*(short *)(param_1 + 0x1c) << 0x12) >> 0x1a),
     iVar4 == 0)) {
    if (*(short *)(param_1 + 0x1c4) != 1) {
      return;
    }
    FUN_00375c10(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
    return;
  }
  uVar1 = DAT_00110bb0;
  uVar7 = (uint)((int)*(short *)(param_1 + 0x1c) << 0x19) >> 0x1d;
  if (uVar7 == 0) {
    iVar4 = FUN_0036e864(param_2,(uint)((int)*(short *)(param_1 + 0x1c) << 0x12) >> 0x1a);
    if (iVar4 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1bc) = uVar1;
    *(undefined2 *)(param_1 + 0x1c4) = 0x96;
    return;
  }
  if (uVar7 == 1) {
    if ((*(byte *)(param_1 + 0x1b8) & 2) == 0) {
      return;
    }
    if ((*(byte *)(param_1 + 0x1d7) & 2) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00110bb0;
    *(undefined2 *)(param_1 + 0x1c4) = 0x96;
LAB_00110b50:
    FUN_0036a308(param_1,param_2);
    return;
  }
  if (uVar7 != 2 && uVar7 != 3) {
    return;
  }
  iVar4 = FUN_0036a83c(param_1);
  if ((iVar4 != 0) || (iVar4 = FUN_0036a7a0(param_2), iVar4 != 0)) {
    *(undefined2 *)(param_1 + 0x1c0) = 9;
    return;
  }
  if (0 < *(short *)(param_1 + 0x1c0)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  *(undefined2 *)(param_1 + 0x1c4) = 0x96;
  if (((uint)*(ushort *)(param_1 + 0x1c) << 0x19) >> 0x1d == 2) goto LAB_00110b50;
  iVar4 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
  uVar1 = DAT_0036a778;
  if (iVar4 != 0) {
    uVar2 = 0;
    goto LAB_0036a768;
  }
  uVar7 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x19) >> 0x1d;
  if (uVar7 == 0 || uVar7 == 4) {
    uVar3 = *(ushort *)(param_2 + 0x104);
    uVar8 = 0x3c;
    if (uVar3 == 0xd) {
      uVar7 = (uint)*(byte *)(param_1 + 3);
    }
    if (uVar3 == 0xd && uVar7 == 0x12) {
      uVar8 = 0xffffffff;
    }
    if (*(char *)(DAT_0036a774 + 0xe) != '\0') {
      bVar10 = uVar3 == 1;
      if (bVar10) {
        uVar3 = (ushort)*(byte *)(param_1 + 3);
      }
      if (bVar10 && uVar3 == 0) {
        uVar8 = 0xffffffff;
      }
    }
    uVar5 = FUN_0036a2dc(param_2,param_1,0);
    *(undefined4 *)(param_1 + 0x5c0) = uVar5;
    if ((((int)*(short *)(param_1 + 0x1c) & 0x8000U) == 0) && (-1 < (int)uVar8)) {
      if (((int)*(short *)(param_1 + 0x1c) & 8U) != 0) goto LAB_0036a738;
      FUN_00372244(param_2 + 0x5fcc,uVar8 & 0xffff,DAT_0036a77c);
    }
  }
  else {
    uVar3 = (ushort)*(byte *)(DAT_0036a774 + 0xe);
    uVar8 = 0x3c;
    bVar10 = uVar3 != 1;
    if (!bVar10) {
      uVar3 = *(ushort *)(param_2 + 0x104);
    }
    uVar5 = 0;
    iVar4 = param_1;
    if (bVar10 || uVar3 != 9) {
      uVar3 = *(ushort *)(param_2 + 0x104);
      if (uVar3 == 3) {
        if (*(char *)(param_1 + 3) == '\x0e') {
          uVar8 = 0xffffffff;
        }
      }
      else {
        bVar10 = uVar3 == 5;
        if (bVar10) {
          uVar3 = (ushort)*(byte *)(param_1 + 3);
        }
        if (bVar10 && uVar3 == 6) {
          iVar6 = *(int *)(DAT_0036a780 + param_2);
          fVar12 = *(float *)(iVar6 + 0x28) - DAT_0036a784;
          if (fVar12 < DAT_0036a788) {
            fVar12 = DAT_0036a784 - *(float *)(iVar6 + 0x28);
          }
          fVar11 = *(float *)(iVar6 + 0x2c) - DAT_0036a78c;
          if (fVar11 < DAT_0036a788) {
            fVar11 = DAT_0036a78c - *(float *)(iVar6 + 0x2c);
          }
          fVar13 = *(float *)(iVar6 + 0x30) - DAT_0036a790;
          if (fVar13 < DAT_0036a788) {
            fVar13 = DAT_0036a790 - *(float *)(iVar6 + 0x30);
          }
          bVar10 = SBORROW4((int)fVar12,DAT_0036a794);
          iVar6 = (int)fVar12 - DAT_0036a794;
          if ((int)fVar12 < DAT_0036a794) {
            bVar10 = SBORROW4((int)fVar11,DAT_0036a794 + 0x640000);
            iVar6 = (int)fVar11 - (DAT_0036a794 + 0x640000);
          }
          bVar9 = iVar6 < 0;
          if (bVar9 != bVar10) {
            bVar10 = SBORROW4((int)fVar13,DAT_0036a798);
            bVar9 = (int)fVar13 - DAT_0036a798 < 0;
          }
          if (bVar9 != bVar10) {
            uVar5 = DAT_0036a79c;
          }
        }
      }
    }
    else if (*(char *)(param_1 + 3) == '\x01') {
      uVar8 = 0x2d;
      aiStack_3c[0] = param_1;
      iVar4 = FUN_00360084(param_2 + 0x208c,0x1b4,6,aiStack_3c);
      if (1 < iVar4) {
        iVar4 = 2;
      }
      iVar4 = aiStack_3c[iVar4];
    }
    uVar5 = FUN_0036a2dc(param_2,iVar4,0,uVar5);
    *(undefined4 *)(param_1 + 0x5c0) = uVar5;
    if (((*(ushort *)(param_1 + 0x1c) & 0x8000) == 0) && (-1 < (int)uVar8)) {
LAB_0036a738:
      FUN_00372244(param_2 + 0x5fcc,uVar8 & 0xffff,uVar1);
    }
  }
  if (((int)*(short *)(param_1 + 0x1c) & 0x4000U) == 0) {
    FUN_00375c10(param_2,(uint)((int)*(short *)(param_1 + 0x1c) << 0x12) >> 0x1a);
  }
  uVar2 = 1;
LAB_0036a768:
  *(undefined1 *)(param_1 + 0x1c6) = uVar2;
  return;
}
