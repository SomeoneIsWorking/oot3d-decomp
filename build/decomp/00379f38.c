// OoT3D decomp @ 00379f38  name=FUN_00379f38  size=416

void FUN_00379f38(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  uint uVar5;
  float fVar6;

  bVar1 = *(byte *)(param_1 + 0x1c0);
  sVar2 = *(short *)(*(int *)(param_2 + 0xa54) + 0x18a);
  iVar3 = DAT_0037a0d8 + (uint)*(byte *)(param_1 + 0x1aa) * 0x10;
  if (sVar2 == 0x28 || sVar2 == 0x38) {
    *(byte *)(param_1 + 0x1c0) = bVar1 & 0xfd;
  }
  else {
    if ((bVar1 & 2) != 0) {
      *(byte *)(param_1 + 0x1c0) = bVar1 & 0xfd;
      FUN_00374bb8(DAT_0037a0e0,DAT_0037a0dc,param_2,param_1,(int)*(short *)(param_1 + 0x92));
    }
    fVar4 = DAT_0037a0e4;
    if (*(char *)(param_1 + 0x1a8) == '\x04' || *(char *)(param_1 + 0x1a8) == '\x05') {
      *(float *)(param_1 + 0x2c) =
           (*(float *)(param_1 + 0xc) * DAT_0037a0e4 - *(float *)(iVar3 + 8)) -
           *(float *)(param_1 + 0x2c);
    }
    (**(code **)(param_1 + 0x1a4))(param_1,param_2);
    if (*(char *)(param_1 + 0x1a8) == '\x04' || *(char *)(param_1 + 0x1a8) == '\x05') {
      *(float *)(param_1 + 0x2c) =
           (*(float *)(param_1 + 0xc) * fVar4 - *(float *)(iVar3 + 8)) - *(float *)(param_1 + 0x2c);
    }
    fVar4 = (*(float *)(iVar3 + 8) - (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x2c))) /
            *(float *)(iVar3 + 8);
    uVar5 = VectorFloatToUnsigned(fVar4 * DAT_0037a0e8,3);
    *(char *)(param_1 + 0x1ab) = (char)uVar5;
    if ((uVar5 & 0xff) < 0x33) {
      if ((*(char *)(param_1 + 0x1a8) == '\x01') &&
         (iVar3 = FUN_0036bcb4(param_2,*(undefined1 *)(param_1 + 0x1a9)), iVar3 != 0)) {
        FUN_00374428(param_1);
      }
    }
    else {
      fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 2),(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 500) = fVar6 * fVar4;
      FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1b0);
      FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1b0);
      if (*(int *)(DAT_0037a0ec + 0x4e8) < 4) {
        FUN_00373264(param_1,DAT_0037a0f0);
      }
    }
    *(short *)(param_1 + 0x1ae) = *(short *)(param_1 + 0x1ae) + 1;
  }
  return;
}
