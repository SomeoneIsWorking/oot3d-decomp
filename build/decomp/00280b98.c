// OoT3D decomp @ 00280b98  name=FUN_00280b98  size=608

void FUN_00280b98(int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float fVar9;

  iVar8 = *(int *)(DAT_00280dcc + param_2);
  if (*(short *)(param_1 + 0x1e2) != 0) {
    *(short *)(param_1 + 0x1e2) = *(short *)(param_1 + 0x1e2) + -1;
  }
  if (*(short *)(param_1 + 0x1e0) != 0) {
    *(short *)(param_1 + 0x1e0) = *(short *)(param_1 + 0x1e0) + -1;
  }
  (**(code **)(param_1 + 0x1c0))(param_1,param_2);
  iVar5 = DAT_00280ddc;
  fVar4 = DAT_00280dd8;
  fVar9 = DAT_00280dd4;
  uVar3 = DAT_00280dd0;
  if (*(short *)(param_1 + 0x1e4) != 5) {
    *(float *)(param_1 + 0x1b0) = *(float *)(param_1 + 0x1b0) + *(float *)(param_1 + 0x1a4);
    *(float *)(param_1 + 0x1b4) = *(float *)(param_1 + 0x1b4) + *(float *)(param_1 + 0x1a8);
    *(float *)(param_1 + 0x1b8) = *(float *)(param_1 + 0x1b8) + *(float *)(param_1 + 0x1ac);
    *(undefined4 *)(param_1 + 0x1cc) = uVar3;
    fVar9 = fVar4 + *(float *)(param_1 + 0x1c4) * fVar9;
    *(float *)(param_1 + 0xcc) = fVar9;
    iVar6 = DAT_00280de0;
    if ((int)fVar9 <= iVar5) {
      fVar9 = fVar4;
    }
    *(float *)(param_1 + 0xcc) = fVar9;
    if (iVar6 < (int)fVar9) {
      fVar9 = DAT_00280de4;
    }
    *(float *)(param_1 + 0xcc) = fVar9;
    if (*(short *)(param_1 + 0x1e4) == 0 || *(short *)(param_1 + 0x1e4) == 3) {
      *(float *)(param_1 + 0x70) = DAT_00280dec - *(float *)(param_1 + 0x1c4) * DAT_00280de8;
    }
    if (*(short *)(param_1 + 0x1e4) != 6) {
      FUN_00376864(param_1);
      FUN_00376340(DAT_00280df4,DAT_00280df4,DAT_00280df0,param_2,param_1,0x1c);
    }
    iVar5 = DAT_00280df8;
    bVar2 = false;
    if ((*(int *)(param_1 + 0x1c0) != DAT_00280df8) &&
       (sVar1 = *(short *)(param_1 + 0x1e4), (sVar1 == 0 || sVar1 == 3) || sVar1 == 1)) {
      if ((*(byte *)(param_1 + 0x1fc) & 4) != 0) {
        *(byte *)(param_1 + 0x1fc) = *(byte *)(param_1 + 0x1fc) & 0xfb;
        FUN_00375bcc(param_1,DAT_00280dfc);
        uVar3 = DAT_00280e00;
        *(undefined4 *)(param_1 + 0x6c) = DAT_00280e00;
        *(undefined4 *)(param_1 + 100) = uVar3;
        *(int *)(param_1 + 0x1c0) = iVar5;
        return;
      }
      bVar2 = true;
    }
    if (*(short *)(param_1 + 0x1e4) == 6) {
      if (((*(byte *)(param_1 + 0x1fc) & 2) == 0) ||
         (*(byte *)(param_1 + 0x1fc) = *(byte *)(param_1 + 0x1fc) & 0xfd, uVar7 = DAT_00280e08,
         *(int *)(param_1 + 0x1f0) != iVar8)) {
LAB_00280d90:
        FUN_0037632c(param_1,param_1 + 0x1ec);
        FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1ec);
        FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1ec);
        return;
      }
      if ((*(uint *)(DAT_00280e04 + iVar8) & 0x4000000) == 0) {
        sVar1 = *(short *)(iVar8 + 0x36);
        iVar8 = *(int *)(param_2 + 0x20ac);
        *(undefined1 *)(iVar8 + 0x2290) = 4;
        *(undefined1 *)(iVar8 + 0x2291) = 1;
        *(undefined4 *)(iVar8 + 0x2294) = uVar7;
        *(short *)(iVar8 + 0x2292) = -sVar1;
        *(undefined4 *)(iVar8 + 0x2298) = uVar3;
        return;
      }
    }
    else if (bVar2) goto LAB_00280d90;
  }
  return;
}
