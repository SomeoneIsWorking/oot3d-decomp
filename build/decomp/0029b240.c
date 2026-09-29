// OoT3D decomp @ 0029b240  name=FUN_0029b240  size=572

void FUN_0029b240(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  float local_28 [2];
  float local_20;

  uVar1 = DAT_0029b480;
  fVar4 = DAT_0029b47c;
  if ((*(byte *)(param_1 + 0x1bc) & 2) == 0) {
    if (*(char *)(param_1 + 0x1a8) == '\0') goto LAB_0029b2cc;
  }
  else {
    *(byte *)(param_1 + 0x1bc) = *(byte *)(param_1 + 0x1bc) & 0xfd;
    FUN_00374bb8(DAT_0029b484,fVar4,param_2,param_1,(int)*(short *)(param_1 + 0x36));
    if (*(char *)(param_1 + 0x1a8) == '\0') goto LAB_0029b2cc;
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  }
  if (*(char *)(DAT_0029b488 + param_2) == *(char *)(param_1 + 3)) {
    *(undefined1 *)(param_1 + 0x1a9) = 2;
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  }
LAB_0029b2cc:
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  if (*(float *)(param_1 + 0xc) - DAT_0029b48c < *(float *)(param_1 + 0x2c)) {
    if (*(int *)(DAT_0029b490 + 0x4e8) < 4) {
      FUN_00373264(param_1,DAT_0029b494);
    }
    else if ((short)(int)*(float *)(param_1 + 0x28) == -0x201) {
      FUN_00373264(param_1,DAT_0029b498);
    }
    FUN_0036c5d8(param_1,local_28,*(int *)(DAT_0029b49c + param_2) + 0x28);
    fVar2 = DAT_0029b4a0;
    if (local_20 < DAT_0029b4a0) {
      fVar4 = DAT_0029b4a4;
    }
    local_20 = fVar4 * DAT_0029b4a8;
    if (*(char *)(param_1 + 0x1a8) == '\0') {
      fVar4 = DAT_0029b4b0;
      if (((uint)local_28[0] <= (uint)DAT_0029b4ac) &&
         (fVar4 = local_28[0], DAT_0029b4b4 < (int)local_28[0])) {
        fVar4 = DAT_0029b4b8;
      }
    }
    else {
      fVar4 = DAT_0029b4c0;
      if (((uint)local_28[0] <= (uint)DAT_0029b4bc) &&
         (fVar4 = local_28[0], DAT_0029b4c4 < (int)local_28[0])) {
        fVar4 = DAT_0029b4c8;
      }
    }
    local_28[0] = fVar4;
    fVar4 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x1f8) =
         local_28[0] * fVar5 + local_20 * fVar4 + *(float *)(param_1 + 0x28);
    *(float *)(param_1 + 0x200) =
         (*(float *)(param_1 + 0x30) - local_28[0] * fVar4) + local_20 * fVar5;
    *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0x2c);
    sVar3 = *(short *)(param_1 + 0xbe);
    if (fVar2 <= local_20) {
      sVar3 = sVar3 + -0x8000;
    }
    *(short *)(param_1 + 0x36) = sVar3;
    FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1ac);
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1ac);
    return;
  }
  return;
}
