// OoT3D decomp @ 00211e84  name=FUN_00211e84  size=732

void FUN_00211e84(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;

  iVar4 = *(int *)(param_1 + 0x128);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 0x13c) == 0)) && (iVar4 != param_1)) {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  if (0 < *(short *)(param_1 + 0x64a)) {
    *(short *)(param_1 + 0x64a) = *(short *)(param_1 + 0x64a) + -1;
  }
  if (0 < *(short *)(param_1 + 0x64c)) {
    *(short *)(param_1 + 0x64c) = *(short *)(param_1 + 0x64c) + -1;
  }
  (**(code **)(param_1 + 0x640))(param_1,param_2);
  if (*(int *)(param_1 + 0x13c) == 0) {
    return;
  }
  FUN_00376864(param_1);
  if (((*(ushort *)(param_1 + 0x644) & 0x100) != 0) &&
     (((*(ushort *)(param_1 + 0x644) & 1) == 0 || ((*(ushort *)(param_1 + 0x90) & 1) != 0)))) {
    FUN_0021ea58(param_1);
  }
  uVar1 = DAT_00212160;
  uVar5 = 0;
  if ((*(ushort *)(param_1 + 0x644) & 1) != 0) {
    uVar5 = 4;
  }
  if ((*(ushort *)(param_1 + 0x644) & 2) != 0) {
    uVar5 = uVar5 | 1;
  }
  if (uVar5 != 0) {
    FUN_00376340(DAT_00212168,DAT_00212164,DAT_00212160,param_2,param_1,uVar5 | 0x40);
  }
  iVar6 = FUN_00371e40(param_1,param_2);
  iVar4 = DAT_0021216c;
  if (iVar6 == 0) {
    if ((*(int *)(param_1 + 0x98) < DAT_0021218c) && (*(int *)(param_1 + 0x640) != DAT_0021216c)) {
      if (((*(ushort *)(param_1 + 0x644) & 0x20) == 0) && (*(short *)(param_1 + 0x64c) < 0xb4)) {
        FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
      }
      if ((((*(ushort *)(param_1 + 0x644) & 8) == 0) && (*(short *)(param_2 + 0x7f58) < 4)) &&
         (iVar4 = *(int *)(DAT_00212190 + param_2), *(int *)(param_1 + 0x98) < 0x42000000)) {
        fVar9 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x92) + -0x8000));
        fVar3 = DAT_00212194;
        fVar11 = *(float *)(iVar4 + 0x28);
        fVar9 = fVar9 * DAT_00212194;
        fVar10 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x92) + -0x8000));
        fVar11 = (fVar11 + fVar9) - *(float *)(param_1 + 0x28);
        fVar9 = (*(float *)(iVar4 + 0x30) + fVar10 * fVar3) - *(float *)(param_1 + 0x30);
        if (((int)(fVar11 * fVar11 + fVar9 * fVar9) <= DAT_00212198) &&
           (iVar4 = FUN_003724dc(DAT_002121a0,DAT_0021219c,param_1,param_2,0x7e), iVar4 != 0)) {
          *(short *)(param_2 + 0x7f58) = *(short *)(param_2 + 0x7f58) + 1;
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x124) = 0;
    uVar2 = DAT_00212180;
    uVar7 = *(ushort *)(param_1 + 0x1c) & 3;
    bVar8 = uVar7 != 2;
    if (bVar8) {
      uVar7 = 3;
    }
    if (bVar8 && (uVar7 & ~*(ushort *)(param_1 + 0x1c)) != 0) {
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00212170 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x64a) =
           (short)(int)(DAT_0021217c + (DAT_00212174 / fVar9) * DAT_00212178);
      FUN_0037572c(uVar2,param_1);
      *(undefined4 *)(param_1 + 0x140) = 0;
      uVar2 = DAT_00212184;
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      FUN_00375c08(uVar2,uVar1,uVar1,uVar1,param_1 + 0x214,10,1);
      *(undefined4 *)(param_1 + 0x254) = DAT_00212188;
      *(int *)(param_1 + 0x640) = iVar4;
      *(ushort *)(param_1 + 0x644) = *(ushort *)(param_1 + 0x644) & 0xfeff;
    }
    else {
      FUN_00374428(param_1);
    }
  }
  FUN_0037322c(uVar1,param_1);
  return;
}
