// OoT3D decomp @ 00317708  name=FUN_00317708  size=380

void FUN_00317708(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  short sVar6;
  uint in_fpscr;
  undefined4 uVar7;
  float fVar8;
  float fVar9;

  uVar5 = (uint)((int)*(short *)(param_1 + 0x1c) << 0x16) >> 0x1e;
  *(short *)(param_1 + 0x238) = *(short *)(param_1 + 0x23a);
  sVar6 = *(short *)(param_1 + 0x23a) + *(short *)(param_1 + 0x23c);
  *(short *)(param_1 + 0x23a) = sVar6;
  if (sVar6 < 0) {
    if (1 < uVar5) {
      if (uVar5 == 3) {
        *(undefined2 *)(param_1 + 0x238) = 0;
        *(undefined2 *)(param_1 + 0x23a) = 1;
        *(undefined2 *)(param_1 + 0x23c) = 1;
      }
      goto LAB_00317814;
    }
    *(short *)(param_1 + 0x238) = *(short *)(param_1 + 0x236);
    *(short *)(param_1 + 0x23a) = *(short *)(param_1 + 0x236) + -1;
    *(undefined2 *)(param_1 + 0x23c) = 0xffff;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x236);
    if (sVar1 < sVar6) {
      if (1 < uVar5) {
        if (uVar5 == 3) {
          *(short *)(param_1 + 0x238) = sVar1;
          *(short *)(param_1 + 0x23a) = sVar1 + -1;
          *(undefined2 *)(param_1 + 0x23c) = 0xffff;
        }
        goto LAB_00317814;
      }
      *(undefined2 *)(param_1 + 0x238) = 0;
      *(undefined2 *)(param_1 + 0x23a) = 1;
      *(undefined2 *)(param_1 + 0x23c) = 1;
    }
  }
  if (uVar5 < 2) {
    uVar3 = (uint)*(short *)(param_1 + 0x238);
    if (uVar3 != 0) {
      uVar5 = (uint)*(short *)(param_1 + 0x236);
    }
    if (uVar3 == 0 || uVar3 == uVar5) {
      psVar4 = (short *)(*(int *)(*(int *)(param_2 + 0x5c20) +
                                  ((int)*(short *)(param_1 + 0x1c) & 0xffU) * 8 + 4) + uVar3 * 6);
      uVar7 = VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x28) = uVar7;
      uVar7 = VectorSignedToFloat((int)psVar4[1],(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x2c) = uVar7;
      uVar7 = VectorSignedToFloat((int)psVar4[2],(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x30) = uVar7;
    }
  }
LAB_00317814:
  psVar4 = (short *)(*(int *)(*(int *)(param_2 + 0x5c20) + (*(ushort *)(param_1 + 0x1c) & 0xff) * 8
                             + 4) + *(short *)(param_1 + 0x23a) * 6);
  fVar8 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)psVar4[2],(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = FUN_003758b0(fVar9 - *(float *)(param_1 + 0x30),fVar8 - *(float *)(param_1 + 0x28));
  *(undefined2 *)(param_1 + 0x36) = uVar2;
  return;
}
