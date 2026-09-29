// OoT3D decomp @ 0038eec8  name=FUN_0038eec8  size=528

void FUN_0038eec8(undefined4 param_1,undefined4 param_2,int param_3)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 auStack_c0 [4];
  undefined4 auStack_b0 [15];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;

  pfVar1 = pfRam0038f0dc;
  uVar10 = uRam0038f0d8;
  *(undefined4 *)(param_3 + 0x18) = uRam0038f0d8;
  *(undefined4 *)(param_3 + 0x20) = uVar10;
  piVar2 = piRam0038f0e8;
  fVar13 = fRam0038f0e4;
  fVar8 = *pfVar1;
  *(float *)(param_3 + 0xc) = *(float *)(param_3 + 0xc) * fVar8;
  *(float *)(param_3 + 0x10) = *(float *)(param_3 + 0x10) * fVar8;
  *(float *)(param_3 + 0x14) = *(float *)(param_3 + 0x14) * fVar8;
  fVar11 = fRam0038f0f0;
  fVar8 = fRam0038f0ec;
  fVar9 = (float)VectorSignedToFloat(*(short *)(param_3 + 0x60) + 1,(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x5c),(byte)(in_fpscr >> 0x15) & 3);
  uVar10 = VectorFloatToUnsigned((fRam0038f0e0 - fVar9 / fVar12) * fVar13,3);
  *(short *)(param_3 + 0x54) = (short)uVar10;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x58),(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if (*(short *)(param_3 + 0x58) < 1) {
    fVar11 = fVar13 * fVar9 * fVar8 - fVar11;
  }
  else {
    fVar11 = fVar11 + fVar13 * fVar9 * fVar8;
  }
  *(short *)(param_3 + 0x56) = (short)(int)fVar11 + *(short *)(param_3 + 0x56);
  uStack_30 = uRam0038f0f4;
  uStack_2c = uRam0038f0f8;
  uStack_28 = uRam0038f0fc;
  uStack_24 = uRam0038f100;
  uStack_40 = uRam0038f104;
  uStack_3c = uRam0038f108;
  uStack_38 = uRam0038f10c;
  uStack_34 = uRam0038f110;
  auStack_b0[0xc] = *puRam0038f114;
  auStack_b0[0xd] = puRam0038f114[1];
  auStack_b0[0xe] = puRam0038f114[2];
  uStack_74 = puRam0038f114[3];
  uStack_70 = puRam0038f114[4];
  uStack_6c = puRam0038f114[5];
  uStack_68 = puRam0038f114[6];
  uStack_64 = puRam0038f114[7];
  uStack_60 = puRam0038f114[8];
  uStack_5c = puRam0038f114[9];
  uStack_58 = puRam0038f114[10];
  uStack_54 = puRam0038f114[0xb];
  uStack_50 = puRam0038f114[0xc];
  uStack_4c = puRam0038f114[0xd];
  uStack_48 = puRam0038f114[0xe];
  uStack_44 = puRam0038f114[0xf];
  auStack_c0[0] = *puRam0038f118;
  auStack_c0[1] = puRam0038f118[1];
  auStack_c0[2] = puRam0038f118[2];
  auStack_c0[3] = puRam0038f118[3];
  auStack_b0[0] = puRam0038f118[4];
  auStack_b0[1] = puRam0038f118[5];
  auStack_b0[2] = puRam0038f118[6];
  auStack_b0[3] = puRam0038f118[7];
  auStack_b0[4] = puRam0038f118[8];
  auStack_b0[5] = puRam0038f118[9];
  auStack_b0[6] = puRam0038f118[10];
  auStack_b0[7] = puRam0038f118[0xb];
  auStack_b0[8] = puRam0038f118[0xc];
  auStack_b0[9] = puRam0038f118[0xd];
  auStack_b0[10] = puRam0038f118[0xe];
  auStack_b0[0xb] = puRam0038f118[0xf];
  iVar7 = ((int)*(short *)(param_3 + 0x5c) - (int)*(short *)(param_3 + 0x60)) + -1;
  iVar6 = 0;
  do {
    if (iVar7 == 0) {
      *(ushort *)(param_3 + iVar6 * 2 + 0x44) = (ushort)*(byte *)((int)&uStack_30 + iVar6);
    }
    else {
      if ((int)(uint)*(byte *)((int)&uStack_3c + iVar6) < iVar7) {
        if ((int)(uint)*(byte *)((int)&uStack_38 + iVar6) < iVar7) {
          if ((int)(uint)*(byte *)((int)&uStack_34 + iVar6) < iVar7) {
            iVar3 = 4;
          }
          else {
            iVar3 = 3;
          }
        }
        else {
          iVar3 = 2;
        }
      }
      else {
        iVar3 = 1;
      }
      iVar4 = iVar3 * 4 + -4 + iVar6;
      iVar3 = iVar6 + iVar3 * 4;
      uVar5 = (uint)*(byte *)((int)&uStack_44 + iVar4 + 4);
      uVar15 = VectorSignedToFloat(iVar7 - uVar5,(byte)(in_fpscr >> 0x15) & 3);
      uVar16 = VectorSignedToFloat(*(byte *)((int)&uStack_40 + iVar3) - uVar5,
                                   (byte)(in_fpscr >> 0x15) & 3);
      uVar10 = VectorUnsignedToFloat
                         ((uint)*(byte *)((int)&uStack_34 + iVar4 + 4),(byte)(in_fpscr >> 0x15) & 3)
      ;
      uVar14 = VectorUnsignedToFloat
                         ((uint)*(byte *)((int)&uStack_30 + iVar3),(byte)(in_fpscr >> 0x15) & 3);
      uVar10 = FUN_0032d56c(uVar10,auStack_b0[iVar4 + 0xc],uVar14,auStack_c0[iVar3],uVar15,uVar16);
      uVar10 = VectorFloatToUnsigned(uVar10,3);
      *(ushort *)(param_3 + iVar6 * 2 + 0x44) = (ushort)uVar10 & 0xff;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  return;
}
