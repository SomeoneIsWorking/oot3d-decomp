// OoT3D decomp @ 001033d4  name=FUN_001033d4  size=278

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_001033d4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr4;
  undefined4 in_cr13;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float unaff_s22;
  int iStack_30;
  
  uVar1 = DAT_003cf500;
  fVar2 = DAT_003cf4f0;
  if ((*(ushort *)(param_1 + 0x1010) & 1) != 0) {
    fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(param_3 + 0x18),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_3 + 0x1c),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(param_3 + 0x20),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar10 = *(float *)(param_1 + 0x28) - fVar9;
    fVar6 = *(float *)(param_1 + 0x2c) - fVar5;
    fVar8 = *(float *)(param_1 + 0x30) - fVar7;
    if ((int)SQRT(fVar10 * fVar10 + fVar6 * fVar6 + fVar8 * fVar8) < 0x41000001) {
      *(float *)(param_1 + 0x28) = fVar9;
      *(float *)(param_1 + 0x2c) = fVar5;
      *(float *)(param_1 + 0x30) = fVar7;
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
    }
    else {
      FUN_003326f0(param_1,&stack0xffffffe4,DAT_003cf4f4);
      *(undefined4 *)(param_1 + 0x6c) = DAT_003cf4f8;
      FUN_003731e8(DAT_003cf4fc,param_1 + 0x1c4);
    }
    iVar11 = FUN_003731e0(param_1 + 0x1c4);
    iVar4 = 0;
    if (iVar11 != 0) {
      if (*(char *)(DAT_003cf504 + param_1) == '\0') {
        FUN_0037547c(DAT_003cf510,param_1 + 0x28,4,DAT_003cf50c);
      }
      iVar4 = FUN_0037422c(*(float *)(param_1 + 0x6c) * fVar2,param_1 + 0x1c4,
                           *(undefined4 *)
                            (*(int *)(DAT_003cf514 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                            (uint)*(byte *)(param_1 + 0xe74) * 4));
    }
    return iVar4;
  }
  *(undefined1 *)(param_1 + 0x1006) = 1;
  uVar1 = uRam001035d0;
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 4;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  fVar2 = fRam001035dc;
  iVar4 = iRam001035d4;
  iVar11 = *(int *)(param_1 + 0x200);
  if (iRam001035d4 < iVar11) {
    *(undefined4 *)(param_1 + 0x70) = uRam001035d8;
    fVar5 = fRam001035e4;
    if (*(float *)(param_1 + 100) == fVar2) {
      *(undefined4 *)(param_1 + 100) = uRam001035e0;
    }
    if (*(float *)(param_1 + 0x2c) < *(float *)(param_1 + 0x84) + fVar5) {
      *(float *)(param_1 + 0x2c) = fVar2;
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 4) + unaff_s22;
      coprocessor_loadlong(2,in_cr1,0x1e0);
      goto LAB_001034f0;
    }
    FUN_003731e8(param_1 + 0x1c4,param_2);
  }
  else {
    *(float *)(param_1 + 0x2c) =
         (*(float *)(param_1 + 0xe48) - *(float *)(param_1 + 0xed8)) + *(float *)(param_1 + 0xed8);
  }
  iVar3 = FUN_003731e0(param_1 + 0x1c4);
  if (iVar3 != 0) {
    return iStack_30;
  }
  if (iVar11 <= iVar4) {
    return iVar11;
  }
LAB_001034f0:
  coprocessor_movefromRt(10,5,0,in_cr4,in_cr0);
  coprocessor_function(0,0xf,1,in_cr0,in_cr1,in_cr13);
  return iStack_30;
}

