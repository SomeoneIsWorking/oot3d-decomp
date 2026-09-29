// OoT3D decomp @ 001bede8  name=FUN_001bede8  size=756

void FUN_001bede8(int param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  uint in_fpscr;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;

  uVar6 = DAT_001bf0dc;
  *(ushort *)(param_1 + 0x1a8) = *(ushort *)(param_1 + 0x1c) >> 8;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff;
  FUN_0037572c(uVar6,param_1);
  *(undefined4 *)(param_1 + 0x70) = DAT_001bf0e0;
  FUN_00372f38(param_1,param_2,param_1 + 0x250,1,0);
  fVar7 = DAT_001bf0f0;
  fVar5 = DAT_001bf0ec;
  uVar6 = DAT_001bf0e4;
  if ((*(ushort *)(param_1 + 0x1c) & 0x10) == 0) {
    if ((*(ushort *)(param_1 + 0x1c) & 0x20) == 0) {
      uVar2 = (uint)*(short *)(param_1 + 0x1a8);
      if (uVar2 == 0) {
        *(undefined2 *)(param_1 + 0x1c) = 0xf;
        fVar8 = fVar5;
      }
      else {
        fVar7 = (float)VectorSignedToFloat(((int)uVar2 >> 4) * 0x28,(byte)(in_fpscr >> 0x15) & 3);
        fVar8 = (float)VectorUnsignedToFloat(uVar2 & 0xf,(byte)(in_fpscr >> 0x15) & 3);
      }
      FUN_00376340(fVar5,DAT_001bf0f4,DAT_001bf0f4,param_2,param_1,0x1d);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x30);
      fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
      *(float *)(param_1 + 0x1b0) = *(float *)(param_1 + 0x28) + fVar5 * fVar7;
      fVar5 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
      *(float *)(param_1 + 0x1b8) = *(float *)(param_1 + 0x30) - fVar5 * fVar7;
      fVar5 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x36) + -0x8000));
      *(float *)(param_1 + 0x1bc) = *(float *)(param_1 + 0x28) + fVar5 * fVar7;
      fVar5 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x36) + -0x8000));
      *(float *)(param_1 + 0x1c4) = *(float *)(param_1 + 0x30) - fVar5 * fVar7;
      fVar5 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
      *(float *)(param_1 + 0x1c8) = *(float *)(param_1 + 0x28) + fVar5 * fVar7;
      fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
      *(float *)(param_1 + 0x1d0) = *(float *)(param_1 + 0x30) + fVar5 * fVar7;
      fVar5 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x36) + -0x8000));
      *(float *)(param_1 + 0x1d4) = *(float *)(param_1 + 0x28) + fVar5 * fVar7;
      fVar5 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x36) + -0x8000));
      *(float *)(param_1 + 0x1dc) = *(float *)(param_1 + 0x30) + fVar5 * fVar7;
      fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
      sVar3 = (short)(int)(fVar5 * fVar8);
      fVar5 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
      if (sVar3 < 0) {
        sVar3 = -sVar3;
      }
      sVar1 = (short)(int)(fVar5 * fVar8);
      if (sVar1 < 0) {
        sVar1 = -sVar1;
      }
      uVar6 = VectorSignedToFloat((int)sVar3,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 500) = uVar6;
      *(undefined4 *)(param_1 + 0x1e0) = uVar6;
      uVar6 = VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x1ec) = uVar6;
      *(undefined4 *)(param_1 + 0x1e8) = uVar6;
    }
    else {
      fVar5 = (float)VectorUnsignedToFloat
                               (*(ushort *)(param_1 + 0x1a8) & 0xf,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x1ac) = fVar5 * DAT_001bf0e8;
      *(ushort *)(param_1 + 0x1a8) = (*(ushort *)(param_1 + 0x1a8) & 0xf0) * 0x20 + 0x200;
      fVar5 = (float)FUN_002cfca0(0);
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar5 * *(float *)(param_1 + 0x1ac);
      fVar5 = (float)FUN_00338f60(0);
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar5 * *(float *)(param_1 + 0x1ac);
    }
  }
  else {
    uVar4 = VectorUnsignedToFloat(*(ushort *)(param_1 + 0x1a8) & 0xf,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 500) = uVar4;
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    FUN_00375bcc(param_1,uVar6);
  }
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  FUN_00353dd0(param_2,param_1 + 0x1f8);
  FUN_00353d24(param_2,param_1 + 0x1f8,param_1,DAT_001bf0f8);
  FUN_00372d4c(DAT_001bf0fc,DAT_001bf0fc,param_1 + 0xbc,DAT_001bf100);
  *(undefined1 *)(param_1 + 0x1f) = 3;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  return;
}
