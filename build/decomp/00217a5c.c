// OoT3D decomp @ 00217a5c  name=FUN_00217a5c  size=408

undefined4 FUN_00217a5c(uint param_1,int param_2,int param_3)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  piVar1 = UNK_00217bf4;
  uVar5 = (uint)*(byte *)(param_3 + 4);
  if (uVar5 != 0xff) {
    param_1 = (uint)*(byte *)(param_3 + 5);
  }
  if (uVar5 != 0xff && param_1 != 0xff) {
    fVar6 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
    uVar7 = VectorFloatToUnsigned((fVar6 + fVar9 * UNK_00217bf8) * UNK_00217bfc * UNK_00217c00,3);
    *(short *)(UNK_00217bf4 + 3) = (short)uVar7;
    *(short *)(piVar1 + 0x56a) = (short)uVar7;
  }
  uVar2 = (ushort)*(byte *)(param_3 + 6);
  if (*(byte *)(param_3 + 6) == 0xff) {
    uVar2 = 0;
  }
  *(ushort *)(param_2 + 0x3192) = uVar2;
  if ((short)piVar1[0x56c] == 0) {
    *UNK_00217c04 = *(undefined2 *)(param_2 + 0x3192);
  }
  fVar9 = (float)FUN_002cfca0((int)(short)((short)piVar1[3] + -0x8000));
  fVar6 = UNK_00217c08;
  *(float *)(param_2 + 0x3194) = fVar9 * UNK_00217c08 * UNK_00217c0c;
  fVar8 = (float)FUN_00338f60((int)(short)((short)piVar1[3] + -0x8000));
  fVar9 = UNK_00217c10;
  *(float *)(param_2 + 0x3198) = fVar8 * fVar6 * UNK_00217c10;
  fVar6 = (float)FUN_00338f60((int)(short)((short)piVar1[3] + -0x8000));
  *(float *)(param_2 + 0x319c) = fVar6 * UNK_00217c14 * fVar9;
  uVar5 = UNK_00217c1c;
  if (((*(short *)(param_2 + 0x3192) == 0) && (piVar1[2] < UNK_00217c18)) || (*piVar1 == 0x604)) {
    *(ushort *)(piVar1 + 0x56a) = *(ushort *)(piVar1 + 3);
    uVar4 = (uint)*(ushort *)(piVar1 + 3);
    if (uVar4 - 0x2aac < uVar5) {
      sVar3 = 0x4000;
    }
    else if (uVar4 - 0x4aab < UNK_00217c20) {
      sVar3 = 0x6000;
    }
    else if (uVar4 - 0xa000 < UNK_00217c24) {
      sVar3 = (short)UNK_00217c24 + -0x6000;
    }
    else {
      if (UNK_00217c20 <= uVar4 - 0xc001) {
        return 1;
      }
      sVar3 = (short)UNK_00217c28;
    }
    *(short *)(piVar1 + 0x56a) = sVar3;
  }
  return 1;
}

