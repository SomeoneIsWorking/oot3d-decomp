// OoT3D decomp @ 001acbdc  name=FUN_001acbdc  size=344

void FUN_001acbdc(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;

  if (((int)*(short *)(param_1 + 0x36) - 1U < 0x40) &&
     (iVar4 = FUN_0036e864(param_2,*(short *)(param_1 + 0x36) + -1), iVar4 != 0)) {
    sVar1 = *(short *)(param_1 + 0x1c);
  }
  else {
    if ((*(short *)(param_1 + 0x36) != -1) ||
       (iVar4 = FUN_0036cf6c(param_2,(int)*(char *)(param_1 + 3)), iVar4 == 0)) {
      if (((~((int)*(short *)(param_1 + 0x1c) >> 8) & 0x3fU) == 0) ||
         (iVar4 = FUN_0036e864(param_2,(uint)((int)*(short *)(param_1 + 0x1c) << 0x12) >> 0x1a),
         iVar4 == 0)) {
        FUN_003510b0(param_1,DAT_001acd34);
        fVar3 = DAT_001acd3c;
        uVar2 = DAT_001acd38;
        if (*(short *)(param_1 + 0x34) == 0) {
          *(undefined4 *)(param_1 + 0x5c) = DAT_001acd38;
          *(undefined4 *)(param_1 + 0x54) = uVar2;
        }
        else {
          fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x34),
                                             (byte)(in_fpscr >> 0x15) & 3);
          fVar5 = fVar5 * DAT_001acd3c;
          *(float *)(param_1 + 0x5c) = fVar5;
          *(float *)(param_1 + 0x54) = fVar5;
        }
        if (*(short *)(param_1 + 0x38) == 0) {
          *(undefined4 *)(param_1 + 0x58) = uVar2;
        }
        else {
          fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x38),
                                             (byte)(in_fpscr >> 0x15) & 3);
          *(float *)(param_1 + 0x58) = fVar5 * fVar3;
        }
        if ((*(ushort *)(param_1 + 0x1c) & 0x4000) == 0) {
          *(undefined4 *)(param_1 + 0x1a4) = DAT_001acd44;
        }
        else {
          *(undefined4 *)(param_1 + 0x1a4) = DAT_001acd40;
        }
        *(undefined2 *)(param_1 + 0xc0) = 0;
        *(undefined2 *)(param_1 + 0xbe) = 0;
        *(undefined2 *)(param_1 + 0xbc) = 0;
        return;
      }
      goto LAB_001acc98;
    }
    sVar1 = *(short *)(param_1 + 0x1c);
  }
  if ((~((int)sVar1 >> 8) & 0x3fU) != 0) {
    FUN_00375c10(param_2,(uint)((int)sVar1 << 0x12) >> 0x1a);
  }
LAB_001acc98:
  FUN_00374428(param_1);
  return;
}
