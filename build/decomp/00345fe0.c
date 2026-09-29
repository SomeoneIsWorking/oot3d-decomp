// OoT3D decomp @ 00345fe0  name=FUN_00345fe0  size=292

void FUN_00345fe0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_1c [2];
  float local_14;

  FUN_0036c5d8(param_1,local_1c,*(int *)(DAT_00346104 + param_2) + 0x28);
  fVar1 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar2 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  if (*(short *)(param_1 + 0x1c) == 0) {
    fVar3 = DAT_00346118;
    if (((uint)local_1c[0] <= (uint)DAT_00346114) &&
       (fVar3 = local_1c[0], DAT_0034611c < (int)local_1c[0])) {
      fVar3 = DAT_00346120;
    }
    fVar4 = DAT_00346108;
    if (local_14 < DAT_00346110) {
      fVar4 = DAT_0034610c;
    }
    local_14 = fVar4 * DAT_00346124;
    local_1c[0] = fVar3;
  }
  else {
    fVar3 = DAT_0034612c;
    if (((uint)local_1c[0] <= (uint)DAT_00346128) &&
       (fVar3 = local_1c[0], DAT_00346130 < (int)local_1c[0])) {
      fVar3 = DAT_00346134;
    }
    local_1c[0] = -fVar3;
    fVar3 = DAT_00346108;
    if (local_14 < DAT_00346110) {
      fVar3 = DAT_0034610c;
    }
    local_14 = fVar3 * DAT_00346138;
  }
  *(float *)(param_1 + 0x21c) = local_1c[0] * fVar2 + local_14 * fVar1 + *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x224) = local_1c[0] * fVar1 + local_14 * fVar2 + *(float *)(param_1 + 0x30);
  return;
}
