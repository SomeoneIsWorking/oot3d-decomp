// OoT3D decomp @ 00154108  name=FUN_00154108  size=396

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00154108(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int extraout_r1;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;

  FUN_003731e0(param_1 + 0x1a4);
  uVar5 = DAT_001542a4;
  uVar4 = DAT_001542a0;
  iVar2 = DAT_00154298;
  fVar13 = *(float *)(param_1 + 0x6c) * DAT_00154294;
  *(float *)(param_1 + 0x6c) = fVar13;
  if (iVar2 < (int)fVar13) {
    fVar13 = DAT_0015429c;
  }
  *(float *)(param_1 + 0x6c) = fVar13;
  fVar10 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 8),uVar5,param_1 + 0x28);
  fVar11 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 0x10),uVar5,*(undefined4 *)(param_1 + 0x6c)
                               ,uVar4,param_1 + 0x30);
  fVar12 = DAT_001542ac;
  fVar13 = DAT_001542a8;
  if (*(short *)(param_1 + 0x234) == 0) {
    uVar6 = FUN_00370378(param_1 + 0xbe,(int)*(short *)(param_1 + 0x16),0x200);
    uVar7 = FUN_00370378(param_1 + 0xc0,(int)*(short *)(param_1 + 0x18),0x200);
    uVar8 = FUN_00370378(param_1 + 0x23c,0,0x800);
    FUN_00373264(param_1,DAT_001542bc);
    fVar13 = (float)FUN_0036e168(fVar13,DAT_001542c8,DAT_001542c4,DAT_001542c0,param_1 + 0x2c);
    if ((int)fVar13 < 0x3f800000) {
      bVar9 = (uVar6 & uVar7 & uVar8) != 0;
      iVar2 = 0;
      iVar3 = extraout_r1;
      if (bVar9) {
        iVar2 = (int)(fVar11 + fVar10) - DAT_001542cc;
        fVar13 = fVar11 + fVar10;
        iVar3 = DAT_001542cc;
      }
      if (iVar2 < 0 != (bVar9 && SBORROW4((int)fVar13,iVar3))) {
        *(undefined2 *)(param_1 + 0x234) = 0xc;
      }
    }
  }
  else {
    sVar1 = *(short *)(param_1 + 0x234) + -1;
    *(short *)(param_1 + 0x234) = sVar1;
    fVar10 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar12 = (float)FUN_003727f0(fVar10 * fVar12 * DAT_001542b0);
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar12 * fVar13;
    uVar4 = DAT_0035bac8;
    iVar2 = DAT_0035bac4;
    if (*(short *)(param_1 + 0x234) == 0) {
      *(undefined4 *)(DAT_0035bac4 + *(short *)(param_1 + 0x1c) * 4) = 0;
      *(byte *)(param_1 + 0xefc) = *(byte *)(param_1 + 0xefc) & 0xfc;
      FUN_00370350(uVar4,param_1 + 0x1a4,
                   *(undefined4 *)(iVar2 + 0x10 + *(short *)(param_1 + 0x1c) * 4));
      *(undefined1 *)(param_1 + 0x231) = 0;
      *(undefined2 *)(param_1 + 0x234) = 0x1e;
      *(undefined4 *)(param_1 + 0x22c) = DAT_0035bacc;
      return;
    }
    if (*(short *)(param_1 + 0x234) == 4) {
      FUN_00370350(DAT_001542b8,param_1 + 0x1a4,
                   *(undefined4 *)(DAT_001542b4 + *(short *)(param_1 + 0x1c) * 4));
      return;
    }
  }
  return;
}
