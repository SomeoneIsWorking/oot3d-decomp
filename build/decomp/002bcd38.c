// OoT3D decomp @ 002bcd38  name=FUN_002bcd38  size=496

undefined4 FUN_002bcd38(int param_1,float *param_2,short *param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar6 = (uint)(short)(*param_3 - *(short *)(param_1 + 0x2222));
  uVar2 = uVar6;
  if ((int)uVar6 < 0) {
    uVar2 = -uVar6;
  }
  iVar3 = FUN_0033bd6c(param_1);
  fVar9 = DAT_002bcf28;
  if (iVar3 == 0) {
    uVar4 = *(uint *)(param_1 + 0x1710);
    bVar7 = (uVar4 & 0x1000000) != 0;
    if (bVar7) {
      uVar4 = (uint)*(ushort *)(param_1 + 0x2218);
    }
    if (!bVar7 || uVar4 == 0) {
      if (*(int *)(param_1 + 0x16f8) == 0) {
        FUN_002ddba0(param_1,param_4);
        bVar7 = fVar9 <= *param_2;
        if (*param_2 != fVar9) {
          bVar7 = DAT_002bcf40 <= (uVar2 & 0xffff);
        }
        if (bVar7) {
          fVar9 = (float)FUN_002cfca0((int)(short)(0x4000 - (short)((uVar2 & 0xffff) >> 1)));
          if (*param_2 <= fVar9 * DAT_002bcf44) {
            return 0;
          }
          return 0xffffffff;
        }
        return 1;
      }
      goto LAB_002bce90;
    }
  }
  if (*(int *)(param_1 + 0x16f8) == 0) {
    fVar8 = (float)FUN_002cfca0((int)(short)uVar2);
    fVar10 = *param_2;
    *param_2 = fVar8 * fVar10;
    uVar2 = in_fpscr & 0xfffffff | (uint)(fVar8 * fVar10 == fVar9) << 0x1e;
    if (SUB41(uVar2 >> 0x1e,0)) {
      sVar1 = *(short *)(param_1 + 0xbe);
    }
    else {
      if ((int)uVar6 < 0) {
        sVar1 = -1;
      }
      else {
        sVar1 = 1;
      }
      sVar1 = *(short *)(param_1 + 0xbe) + sVar1 * 0x4000;
    }
    *param_3 = sVar1;
    if (*(int *)(param_1 + 0x16f8) == 0) {
      fVar9 = DAT_002bcf2c;
      if (*(char *)(DAT_002bcf30 + 0x3d8) == '\0') {
        fVar9 = DAT_002bcf34;
      }
      fVar8 = (float)VectorSignedToFloat((int)*(float *)(*(int *)(DAT_002bcf38 + param_1) + 0x2c),
                                         (byte)(uVar2 >> 0x15) & 3);
      FUN_00375a18(param_1 + 0x48,(int)(short)(int)(fVar8 * DAT_002bcf3c * fVar9),0xe,4000,0x1e);
      FUN_002bf67c(param_1,1);
    }
    else {
      FUN_003341e4(param_1,1);
    }
    return 0;
  }
LAB_002bce90:
  uVar5 = FUN_002c3b94(*param_2,param_1,(int)*param_3);
  return uVar5;
}

