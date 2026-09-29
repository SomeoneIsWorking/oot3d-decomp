// OoT3D decomp @ 0043794c  name=FUN_0043794c  size=404

void FUN_0043794c(undefined2 *param_1,undefined2 *param_2,int param_3,int param_4,undefined4 param_5
                 ,int param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  iVar3 = param_3 * param_3;
  fVar5 = (float)VectorSignedToFloat(param_4 * param_4 + iVar3,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff;
  uVar2 = uVar1 | (uint)(fVar5 == DAT_00437ae0) << 0x1e;
  if (!SUB41(uVar2 >> 0x1e,0)) {
    if (iVar3 - param_4 * param_4 == 0 || iVar3 < param_4 * param_4) {
      fVar8 = DAT_00437ae4;
      if (-1 < param_4) {
        fVar8 = DAT_00437ae8;
      }
      fVar4 = (float)VectorSignedToFloat(param_3,(byte)(uVar2 >> 0x15) & 3);
      fVar7 = (float)VectorSignedToFloat(param_4,(byte)(uVar2 >> 0x15) & 3);
      fVar7 = (fVar8 * fVar4) / fVar7;
    }
    else if (param_3 < 0) {
      fVar7 = (float)VectorSignedToFloat(param_4,(byte)(uVar2 >> 0x15) & 3);
      fVar8 = (float)VectorSignedToFloat(param_3,(byte)(uVar2 >> 0x15) & 3);
      fVar8 = (DAT_00437ae4 * fVar7) / fVar8;
      fVar7 = DAT_00437ae4;
    }
    else {
      fVar7 = (float)VectorSignedToFloat(param_4,(byte)(uVar2 >> 0x15) & 3);
      fVar8 = (float)VectorSignedToFloat(param_3,(byte)(uVar2 >> 0x15) & 3);
      fVar8 = (DAT_00437ae8 * fVar7) / fVar8;
      fVar7 = DAT_00437ae8;
    }
    fVar8 = fVar7 * fVar7 + fVar8 * fVar8;
    if (DAT_00437aec <= fVar8) {
      fVar8 = DAT_00437aec;
    }
    uVar2 = uVar1 | (uint)(fVar8 <= fVar5) << 0x1d;
    if (SUB41(uVar2 >> 0x1d,0)) {
      fVar11 = (float)VectorSignedToFloat(param_6,(byte)(uVar2 >> 0x15) & 3);
      fVar10 = (float)VectorSignedToFloat(param_6 * param_6,(byte)(uVar2 >> 0x15) & 3);
      fVar7 = SQRT(fVar5);
      uVar1 = uVar1 | (uint)(fVar5 < fVar10) << 0x1f;
      fVar9 = fVar7 - SQRT(fVar8);
      fVar4 = (float)VectorSignedToFloat(param_6 + -0x28,(byte)(uVar1 >> 0x15) & 3);
      fVar6 = (float)VectorSignedToFloat(param_3,(byte)(uVar1 >> 0x15) & 3);
      if (SUB41(uVar1 >> 0x1f,0) == (NAN(fVar5) || NAN(fVar10))) {
        *param_1 = (short)(int)((fVar6 * fVar4) / fVar7);
        fVar5 = (float)VectorSignedToFloat(param_4,(byte)(uVar1 >> 0x15) & 3);
        *param_2 = (short)(int)((fVar5 * fVar4) / fVar7);
        return;
      }
      fVar7 = (fVar11 - SQRT(fVar8)) * fVar7;
      *param_1 = (short)(int)((fVar6 * fVar4 * fVar9) / fVar7);
      fVar5 = (float)VectorSignedToFloat(param_4,(byte)(uVar1 >> 0x15) & 3);
      *param_2 = (short)(int)((fVar5 * fVar4 * fVar9) / fVar7);
      return;
    }
  }
  *param_1 = 0;
  *param_2 = 0;
  return;
}
