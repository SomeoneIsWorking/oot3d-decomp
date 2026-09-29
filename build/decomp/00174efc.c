// OoT3D decomp @ 00174efc  name=FUN_00174efc  size=580

void FUN_00174efc(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  FUN_003731e0(param_1 + 0x2fc);
  fVar7 = DAT_00175154;
  fVar8 = DAT_00175140;
  if (*(short *)(param_1 + 0x1e8) == 0) {
    if (*(short *)(param_1 + 500) == 0) {
      fVar10 = *(float *)(param_1 + 0x218) - *(float *)(param_1 + 0x28);
      fVar11 = *(float *)(param_1 + 0x220) - *(float *)(param_1 + 0x30);
      fVar7 = ABS(fVar10);
      iVar5 = (int)fVar7 - DAT_00175144;
      if ((int)fVar7 < DAT_00175144) {
        fVar7 = ABS(fVar11);
        iVar5 = (int)fVar7 - DAT_00175144;
      }
      if ((iVar5 < 0 != SBORROW4((int)fVar7,DAT_00175144)) &&
         (iVar5 = FUN_003769d8(param_2 + 0x28a0), iVar5 != 0)) {
        *(float *)(param_1 + 0x6c) = fVar8;
        *(undefined2 *)(param_1 + 0x204) = 5;
        *(undefined4 *)(param_1 + 0x1a4) = DAT_00175148;
        return;
      }
      fVar8 = (float)FUN_003696ec(fVar10,fVar11);
      FUN_00375a18(param_1 + 0xbe,(int)(short)(int)(fVar8 * DAT_0017514c),1,DAT_00175150,0);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
      goto LAB_001750d8;
    }
  }
  else if (*(short *)(param_1 + 0x1e8) == 1) {
    fVar9 = (float)FUN_00371e50(DAT_00175154);
    fVar11 = DAT_0017515c;
    fVar10 = DAT_00175158;
    fVar9 = (float)VectorSignedToFloat((int)(short)(int)fVar9,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = fVar9 + fVar7;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 < fVar8) << 0x1f | (uint)(fVar9 == fVar8) << 0x1e;
    uVar6 = uVar1 | (uint)(NAN(fVar9) || NAN(fVar8)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar6 >> 0x1c) & 1)) {
      fVar8 = (float)FUN_00371e50(fVar7);
      fVar8 = (float)VectorSignedToFloat((int)(short)(int)fVar8,(byte)(uVar6 >> 0x15) & 3);
      uVar4 = (undefined2)(int)((fVar8 + fVar7) * fVar10 * fVar11 - fVar11);
    }
    else {
      fVar8 = (float)FUN_00371e50(fVar7);
      fVar8 = (float)VectorSignedToFloat((int)(short)(int)fVar8,(byte)(uVar6 >> 0x15) & 3);
      uVar4 = (undefined2)(int)(fVar11 + (fVar8 + fVar7) * fVar10 * fVar11);
    }
    *(undefined2 *)(param_1 + 500) = uVar4;
  }
  uVar3 = DAT_00175160;
  FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),0x14,DAT_00175160,0);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),3,uVar3,0);
LAB_001750d8:
  if (*(ushort *)(param_1 + 0x1ee) == 0) {
    *(undefined2 *)(param_1 + 0x1ee) = 0x1e;
    if ((*(ushort *)(param_1 + 0x1fa) & 1) == 0) {
      FUN_00375bcc(param_1,DAT_00175164);
    }
  }
  else if ((*(ushort *)(param_1 + 0x1ee) & 3) == 0) {
    FUN_00375bcc(param_1,DAT_00175168);
  }
  if ((*(ushort *)(param_1 + 0x90) & 8) == 0 || (*(ushort *)(param_1 + 0x90) & 1) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 100) = DAT_0017516c;
  return;
}
