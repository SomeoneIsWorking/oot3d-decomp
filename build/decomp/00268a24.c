// OoT3D decomp @ 00268a24  name=FUN_00268a24  size=692

void FUN_00268a24(int param_1,int param_2)

{
  short sVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;

  fVar3 = DAT_00268cdc;
  fVar2 = DAT_00268cd8;
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 0x24) {
    FUN_003695cc(DAT_00268cdc,DAT_00268cdc,DAT_00268cdc,*(float *)(param_1 + 0x1b8) * DAT_00268cd8,
                 *(undefined4 *)(param_1 + 0x278),0,4,2);
    *(undefined1 *)(*(int *)(param_1 + 0x278) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x278),param_1 + 0x148);
    FUN_00372170(*(undefined4 *)(param_1 + 0x278),0);
    return;
  }
  if (sVar1 != 0x26 && sVar1 != 0x32) {
    if ((sVar1 != 0x27 && sVar1 != 0x28) && sVar1 != 0x29) {
      local_20 = DAT_00268cdc;
      local_1c = (float)DAT_00268cf4;
      local_18 = DAT_00268cdc;
      FUN_00372070(param_1 + 0x148,param_1 + 0x148,&local_20);
      FUN_003695cc(fVar3,fVar3,fVar3,*(float *)(param_1 + 0x1b8) * fVar2,
                   *(undefined4 *)(param_1 + 0x280),0,4,2);
      *(undefined1 *)(*(int *)(param_1 + 0x280) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x280),param_1 + 0x148);
      FUN_00372170(*(undefined4 *)(param_1 + 0x280),0);
      return;
    }
    FUN_003695cc(DAT_00268cdc,DAT_00268cdc,DAT_00268cdc,*(float *)(param_1 + 0x1e0) * DAT_00268cd8,
                 *(undefined4 *)(param_1 + 0x274),0,4,2);
    *(undefined1 *)(*(int *)(param_1 + 0x274) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x274),param_1 + 0x148);
    FUN_00372170(*(undefined4 *)(param_1 + 0x274),0);
    return;
  }
  FUN_00371fac(param_1 + 0x148,param_2 + 0x2fc);
  if (*(short *)(param_1 + 0x1b0) < 1) {
    local_24 = DAT_00268ce4;
    local_1c = DAT_00268ce8;
  }
  else {
    local_24 = fVar3;
    local_1c = DAT_00268ce0;
  }
  local_20 = DAT_00268ce0;
  local_18 = *(float *)(param_1 + 0x1b8) * fVar2;
  FUN_00358778(*(undefined4 *)(param_1 + 0x27c),0,0,&local_24,1);
  FUN_00358778(*(undefined4 *)(param_1 + 0x27c),0,4,&local_24,2);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xc0),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = fVar2 * DAT_00268cec * DAT_00268cf0;
  if (fVar2 != fVar3) {
    fVar3 = (float)FUN_003727f0(fVar2);
    fVar2 = (float)FUN_00372674(fVar2);
    fVar4 = *(float *)(param_1 + 0x148);
    *(float *)(param_1 + 0x148) = fVar4 * fVar2 + *(float *)(param_1 + 0x14c) * fVar3;
    *(float *)(param_1 + 0x14c) = *(float *)(param_1 + 0x14c) * fVar2 - fVar4 * fVar3;
    fVar4 = *(float *)(param_1 + 0x158);
    *(float *)(param_1 + 0x158) = fVar4 * fVar2 + *(float *)(param_1 + 0x15c) * fVar3;
    *(float *)(param_1 + 0x15c) = *(float *)(param_1 + 0x15c) * fVar2 - fVar4 * fVar3;
    fVar4 = *(float *)(param_1 + 0x168);
    *(float *)(param_1 + 0x168) = fVar4 * fVar2 + *(float *)(param_1 + 0x16c) * fVar3;
    *(float *)(param_1 + 0x16c) = *(float *)(param_1 + 0x16c) * fVar2 - fVar4 * fVar3;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x27c) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x27c),param_1 + 0x148);
  FUN_00372170(*(undefined4 *)(param_1 + 0x27c),0);
  return;
}
