// OoT3D decomp @ 001173a4  name=FUN_001173a4  size=816

void FUN_001173a4(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;

  fVar1 = DAT_001176b0;
  uVar8 = *(ushort *)(param_1 + 0x1c) & 0x1f;
  iVar6 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001176b0,param_1 + 0x1a4);
  fVar2 = DAT_001176b4;
  if (iVar6 != 0) {
    if ((*(ushort *)(param_1 + 0x1c) & 0x1f) == 2) {
      uVar7 = FUN_0036f848(*(undefined4 *)(param_2 + *(short *)(DAT_001176b8 + param_2) * 4 + 0xa54)
                           ,3);
      FUN_0036f7c0(uVar7,DAT_001176bc);
      FUN_0036f6b0(uVar7,8,0,0,0);
      FUN_0036f628(uVar7,0x10);
    }
    else {
      FUN_00371b34(param_1,1);
    }
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1ec);
    *(float *)(param_1 + 0x1e4) = fVar2;
  }
  if ((int)*(float *)(param_1 + 0x1e0) == 0) {
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(DAT_001176c0 + uVar8 * 10 + 8),
                                       (byte)(in_fpscr >> 0x15) & 3);
    uVar7 = VectorSignedToFloat((int)(short)(int)(fVar9 * DAT_001176c4),(byte)(in_fpscr >> 0x15) & 3
                               );
    *(undefined4 *)(param_1 + 0xc2c) = uVar7;
  }
  else {
    iVar6 = (int)*(short *)(DAT_001176c0 + uVar8 * 10 + 8);
    fVar9 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    uVar7 = VectorSignedToFloat((int)(short)(int)((*(float *)(param_1 + 0x1e0) /
                                                  *(float *)(param_1 + 0x1e8)) *
                                                  fVar9 * DAT_001176c8 + fVar10 * DAT_001176c4),
                                (byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0xc2c) = uVar7;
  }
  uVar5 = DAT_001176d8;
  uVar4 = DAT_001176d4;
  uVar3 = DAT_001176d0;
  uVar7 = DAT_001176cc;
  if (((int)*(short *)(param_1 + 0x1c) & 0x1fU) == 3) {
    fVar9 = fVar1;
    if ((*(uint *)(param_2 + 0xf8) & 1) == 0) {
      fVar9 = DAT_001176dc;
    }
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar9;
    iVar6 = FUN_0036e864(param_2,((int)*(short *)(param_1 + 0x1c) & 0xfc00U) >> 10);
    if (iVar6 != 0) {
      *(undefined1 *)(param_1 + 0xc47) = 0;
      if (*(float *)(param_1 + 0x1e4) == fVar2) {
        if ((*(ushort *)(param_1 + 0x1c) & 0x1f) == 2) {
          FUN_00371af0(DAT_001176e0,uVar7,0x3c);
        }
        else {
          FUN_00375bcc(param_1,uVar7);
        }
      }
      if ((*(ushort *)(param_1 + 0x1c) & 0x1f) == 2) {
        FUN_00371808(param_2,uVar3,0xffffff9d,param_1,0);
        FUN_003717ac(param_1 + 0x1a4,DAT_001176e4,10);
        *(undefined4 *)(param_1 + 0x1e4) = uVar4;
      }
      else {
        FUN_003717ac(param_1 + 0x1a4,DAT_001176e4,1);
        *(float *)(param_1 + 0x1e4) = fVar1;
      }
      *(undefined4 *)(param_1 + 0xbbc) = uVar5;
    }
    if ((*(ushort *)(param_1 + 0x1c) & 0x1f) == 3) {
      return;
    }
  }
  iVar6 = FUN_003676fc(param_1);
  if (iVar6 != 0) {
    if (*(float *)(param_1 + 0x1e4) == fVar2) {
      if ((*(ushort *)(param_1 + 0x1c) & 0x1f) == 2) {
        FUN_00371af0(DAT_001176e0,uVar7,0x3c);
      }
      else {
        FUN_00375bcc(param_1,uVar7);
      }
    }
    if ((*(ushort *)(param_1 + 0x1c) & 0x1f) == 2) {
      FUN_00371808(param_2,uVar3,0xffffff9d,param_1,0);
      FUN_003717ac(param_1 + 0x1a4,DAT_001176e4,10);
      *(undefined4 *)(param_1 + 0x1e4) = uVar4;
    }
    else {
      FUN_003717ac(param_1 + 0x1a4,DAT_001176e4,1);
      *(float *)(param_1 + 0x1e4) = fVar1;
    }
    *(undefined4 *)(param_1 + 0xbbc) = uVar5;
  }
  return;
}
