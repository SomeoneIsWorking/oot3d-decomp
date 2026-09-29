// OoT3D decomp @ 003f4d9c  name=FUN_003f4d9c  size=1108

void FUN_003f4d9c(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;

  iVar1 = DAT_003f5198;
  iVar6 = *(int *)(param_2 + 0x20ac);
  iVar8 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(iVar6 + 0x2240);
  uVar5 = *(undefined4 *)(iVar6 + 0x2344);
  uVar9 = *(undefined4 *)(iVar6 + 0x2348);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar6 + 0x2340);
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar9;
  iVar7 = DAT_003f5194;
  *(short *)(param_1 + 0xbe) = *(short *)(iVar6 + 0xbe) + -0x8000;
  if ((*(char *)(param_1 + 0x236) == '\0') && (iVar1 <= *(int *)(iVar6 + 0x2240))) {
    if ((*(short *)(iVar7 + 0x80) != 0) ||
       ((((int)*(short *)(param_1 + 0x1c) & 0xff00U) != 0 &&
        (iVar3 = FUN_003318bc(param_2,((int)*(short *)(param_1 + 0x1c) & 0xff00U) >> 8,4),
        iVar3 == 0)))) {
      iVar7 = *(int *)(param_2 + 0x20ac);
      if ((*(uint *)(iVar7 + 0x1714) & 0x20000) == 0) {
        if ((*(uint *)(iVar7 + 0x1710) & 0x1000) == 0) goto LAB_003f4ec0;
      }
      else {
        if ('\x17' < *(char *)(DAT_003f519c + iVar7)) {
          FUN_0037547c(DAT_003f51a8,iVar7 + 0x28,4,DAT_003f51a4,DAT_003f51a4,DAT_003f51a0);
          FUN_0037547c(DAT_003f51ac,iVar7 + 0x28,4,DAT_003f51a4,DAT_003f51a4,DAT_003f51a0);
        }
LAB_003f4ec0:
        FUN_00374428(param_1);
      }
      uVar5 = DAT_003f51b4;
      *(undefined4 *)(param_1 + 0x22c) = DAT_003f51b0;
      *(undefined4 *)(param_1 + 0x228) = uVar5;
      *(undefined1 *)(param_1 + 0x234) = 0;
      goto LAB_003f5040;
    }
    *(undefined1 *)(param_1 + 0x236) = 1;
  }
  fVar2 = DAT_003f51f4;
  fVar12 = DAT_003f51e8;
  iVar3 = DAT_003f51b8;
  uVar4 = *(uint *)(iVar6 + 0x1714);
  if ((uVar4 & 0x20000) == 0) {
    if ((*(uint *)(iVar6 + 0x1710) & 0x1000) == 0) {
      if (*(int *)(param_1 + 0x128) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x128) + 0x124) = 0;
      }
    }
    else {
      fVar11 = *(float *)(iVar6 + 0x2240);
      if (DAT_003f51b8 < (int)fVar11) {
        *(undefined1 *)(param_1 + 0x234) = 0xff;
        if (*(int *)(param_1 + 0x128) == 0) {
          FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                       *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,DAT_003f51d0
                       ,0,(int)*(short *)(param_1 + 0xbe),0,*(byte *)(param_1 + 0x233) + 2);
        }
        fVar12 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003f51e0 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x228) =
             *(float *)(param_1 + 0x228) +
             ((*(float *)(iVar6 + 0x2240) - DAT_003f51d4) * DAT_003f51d8 -
             *(float *)(param_1 + 0x228)) * DAT_003f51dc * fVar12 * DAT_003f51e4;
      }
      else if (iVar1 < (int)fVar11) {
        *(char *)(param_1 + 0x234) =
             (char)(int)((fVar11 - DAT_003f51e8) * DAT_003f51ec * DAT_003f51f0);
        *(float *)(param_1 + 0x218) = (*(float *)(iVar6 + 0x2240) - fVar12) * fVar2;
      }
      else {
        *(undefined1 *)(param_1 + 0x234) = 0;
      }
      iVar7 = *(int *)(iVar6 + 0x2240);
      if (DAT_003f51bc < iVar7) {
        FUN_00314988(iVar6 + 0x28,2);
      }
      else if (iVar3 < iVar7) {
        FUN_00314988(iVar6 + 0x28,1);
      }
      else if (iVar1 < iVar7) {
        FUN_00314988(iVar6 + 0x28,0);
      }
      iVar7 = FUN_0037577c(param_2);
      if (iVar7 == 0) {
        return;
      }
    }
LAB_003f5244:
    FUN_00374428(param_1);
    return;
  }
  if (iVar8 != 0) {
    uVar4 = *(uint *)(iVar8 + 0x13c);
  }
  if (iVar8 != 0 && uVar4 != 0) {
    *(undefined4 *)(iVar8 + 0x124) = 0;
  }
  iVar8 = *(int *)(iVar6 + 0x2240);
  if (iVar8 <= iVar3) {
    bVar10 = SBORROW4(iVar8,iVar1);
    iVar7 = iVar8 - iVar1;
    if (iVar1 <= iVar8) {
      bVar10 = SBORROW4((int)*(char *)(DAT_003f519c + iVar6),0x18);
      iVar7 = *(char *)(DAT_003f519c + iVar6) + -0x18;
    }
    if (iVar7 < 0 == bVar10) {
      FUN_0037547c(DAT_003f51a8,iVar6 + 0x28,4,DAT_003f51a4,DAT_003f51a4,DAT_003f51a0);
      FUN_0037547c(DAT_003f51ac,iVar6 + 0x28,4,DAT_003f51a4,DAT_003f51a4,DAT_003f51a0);
    }
    goto LAB_003f5244;
  }
  *(uint *)(iVar6 + 0x1714) = *(uint *)(iVar6 + 0x1714) & 0xfffdffff;
  iVar1 = DAT_003f51c0;
  if ((*(ushort *)(param_1 + 0x1c) & 0xff00) != 0) {
    *(undefined2 *)(iVar7 + 0x80) = 1;
  }
  uVar4 = (uint)*(byte *)(param_1 + 0x233);
  if (*(int *)(iVar6 + 0x2240) < DAT_003f51bc) {
    uVar5 = *(undefined4 *)(iVar1 + uVar4 * 4);
    *(undefined4 *)(param_1 + 0x1bc) = uVar5;
    if (uVar4 == 1) {
      uVar5 = 2;
    }
    *(undefined1 *)(param_1 + 0x232) = 1;
    if (uVar4 == 1) {
      *(char *)(param_1 + 0x235) = (char)uVar5;
    }
    else {
LAB_003f5000:
      *(undefined1 *)(param_1 + 0x235) = 4;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(iVar1 + uVar4 * 4 + 0xc);
    *(undefined1 *)(param_1 + 0x232) = 0;
    if (uVar4 == 1) goto LAB_003f5000;
    *(undefined1 *)(param_1 + 0x235) = 8;
  }
  iVar7 = DAT_003f51c8;
  uVar5 = DAT_003f51a0;
  *(undefined4 *)(param_1 + 0x22c) = DAT_003f51c4;
  *(undefined2 *)(param_1 + 0x230) = 8;
  FUN_0037547c(*(undefined4 *)(iVar7 + (uint)*(byte *)(param_1 + 0x232) * 4),iVar6 + 0x28,4,
               DAT_003f51a4,DAT_003f51a4,uVar5);
  uVar5 = DAT_003f51cc;
LAB_003f5040:
  *(undefined4 *)(param_1 + 0x218) = uVar5;
  return;
}
