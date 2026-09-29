// OoT3D decomp @ 003f1244  name=FUN_003f1244  size=224

void FUN_003f1244(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  uint uVar7;
  float fVar8;

  uVar3 = DAT_003f1334;
  if (*(short *)(DAT_003f1324 + param_2) == 0 || *(short *)(DAT_003f1324 + param_2) == 4) {
    iVar5 = *DAT_003f1328;
    uVar4 = *(ushort *)(param_1 + 0x7ae);
    if (*(short *)(iVar5 + 0x5be) == 0) {
      uVar4 = uVar4 & 0xfffb;
LAB_003f1310:
      *(ushort *)(param_1 + 0x7ae) = uVar4;
    }
    else if ((uVar4 & 4) == 0) {
      if ((DAT_003f132c <= *(int *)(param_1 + 0x98)) ||
         ((uint)(DAT_003f1330 * 2) <
          (uint)(DAT_003f1330 + (short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)))))
      {
        uVar4 = uVar4 | 4;
        goto LAB_003f1310;
      }
      *(undefined2 *)(iVar5 + 0x5be) = 0;
      uVar2 = DAT_003f1338;
      *(undefined4 *)(param_1 + 0x7b8) = uVar3;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
      FUN_0036bb28(uVar2,param_1,param_2);
      *(short *)(DAT_003f1340 + param_1) = (short)DAT_003f133c;
    }
    else {
      *(ushort *)(param_1 + 0x7ae) = uVar4 & 0xfffb;
      *(undefined2 *)(iVar5 + 0x5be) = 0;
    }
  }
  fVar1 = DAT_00314e70;
  if (*(short *)(param_1 + 0x7b0) == 0) {
    fVar6 = (float)FUN_00371e50(DAT_00314e74,0,param_2);
    uVar7 = VectorFloatToUnsigned(fVar6 + DAT_00314e78,3);
    fVar6 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00314e80 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x7b0) = (short)(int)((fVar6 * DAT_00314e7c) / fVar8 + DAT_00314e84);
    uVar3 = FUN_0036ae14(param_1 + 0x314,0);
    VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(param_1 + 0x314,0,2);
  }
  else {
    *(short *)(param_1 + 0x7b0) = *(short *)(param_1 + 0x7b0) + -1;
  }
  if (((*(int *)(param_1 + 0x98) < DAT_00314e88) && ((*(ushort *)(param_1 + 0x7ae) & 2) == 0)) &&
     (*(ushort *)(param_1 + 0x7ae) = *(ushort *)(param_1 + 0x7ae) | 2,
     *(int *)(param_1 + 0x344) == 0)) {
    *(undefined2 *)(param_1 + 0x7b0) = 0;
  }
  fVar6 = DAT_00314e8c;
  uVar4 = *(short *)(param_1 + 0x7b2) + 1;
  *(ushort *)(param_1 + 0x7b2) = uVar4;
  if (uVar4 < 0x31) {
    if (0x1f < uVar4) {
      *(float *)(param_1 + 0x54) = fVar6;
      goto LAB_00314e34;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x7b2) = 0;
  }
  fVar8 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x7b2) << 10));
  *(float *)(param_1 + 0x54) = (fVar1 + fVar8 * fVar6) * fVar6;
LAB_00314e34:
  if (*(ushort *)(param_1 + 0x7b2) < 0x11) {
    *(float *)(param_1 + 0x58) = fVar6;
    return;
  }
  fVar8 = (float)FUN_002cfca0((int)((uint)*(ushort *)(param_1 + 0x7b2) * 0x4000000 + -0x40000000) >>
                              0x10);
  *(float *)(param_1 + 0x58) = (fVar1 + fVar8 * fVar6) * fVar6;
  return;
}
