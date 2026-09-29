// OoT3D decomp @ 0029ee98  name=FUN_0029ee98  size=672

void FUN_0029ee98(int param_1)

{
  float fVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined1 auStack_4c [48];

  FUN_00372224(auStack_4c,param_1 + 0x148);
  iVar2 = *(int *)(param_1 + 0x128);
  if (*(char *)(param_1 + 0x271) == '\0') {
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(iVar2 + 0x238),(byte)(in_fpscr >> 0x15) & 3);
    FUN_003735e8(fVar3 * DAT_0029f138,auStack_4c,1);
  }
  fVar4 = DAT_0029f14c;
  fVar1 = DAT_0029f148;
  fVar5 = DAT_0029f144;
  fVar3 = DAT_0029f140;
  if (*(int *)(param_1 + 0x238) == DAT_0029f13c) {
    fVar5 = *(float *)(param_1 + 0x288) * DAT_0029f140;
    fVar3 = DAT_0029f148;
    if (fVar5 <= DAT_0029f148) {
      fVar3 = fVar5;
    }
    fVar5 = DAT_0029f144;
    if (DAT_0029f144 < fVar3) {
      fVar5 = fVar3;
    }
    FUN_0033dd8c(DAT_0029f144,DAT_0029f144,DAT_0029f144,fVar5,param_1 + 0x1a4,2,5,0);
  }
  else {
    if ((*(ushort *)(param_1 + 0x248) & 4) == 0) {
      FUN_0034e988(*(undefined4 *)(param_1 + 0x178));
      local_5c = *(float *)(iVar2 + 0x240) * fVar3;
      local_58 = *(float *)(iVar2 + 0x244) * fVar3;
      local_54 = *(float *)(iVar2 + 0x248) * fVar3;
      fVar3 = fVar1 - (local_5c + local_58 + local_54) * fVar4;
    }
    else {
      FUN_0036879c();
      local_5c = fVar1;
      local_58 = DAT_0029f150;
      local_54 = fVar5;
      fVar3 = DAT_0029f154;
    }
    fVar4 = fVar1;
    if (local_5c <= fVar1) {
      fVar4 = local_5c;
    }
    local_5c = fVar5;
    if (fVar5 < fVar4) {
      local_5c = fVar4;
    }
    fVar4 = fVar1;
    if (local_58 <= fVar1) {
      fVar4 = local_58;
    }
    local_58 = fVar5;
    if (fVar5 < fVar4) {
      local_58 = fVar4;
    }
    fVar4 = fVar1;
    if (local_54 <= fVar1) {
      fVar4 = local_54;
    }
    local_54 = fVar5;
    if (fVar5 < fVar4) {
      local_54 = fVar4;
    }
    fVar4 = fVar1;
    if (fVar3 <= fVar1) {
      fVar4 = fVar3;
    }
    local_50 = fVar5;
    if (fVar5 < fVar4) {
      local_50 = fVar4;
    }
    if (*(int *)(param_1 + 0x238) == DAT_0029f158) {
      local_6c = fVar1;
      local_68 = fVar1;
      local_64 = fVar1;
      local_60 = *(undefined4 *)(param_1 + 0x29c);
      iVar2 = 0;
      do {
        FUN_00358778(*(undefined4 *)(param_1 + 0x1cc),(int)(char)iVar2,4,&local_6c,2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 8);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x178);
      *(undefined1 *)(iVar2 + 0x1b7) = *(undefined1 *)(iVar2 + 0x1b6);
      *(undefined1 *)(iVar2 + 0x1b6) = 0;
      FUN_00357388(param_1,&local_5c,5,0);
      *(undefined1 *)(*(int *)(param_1 + 0x178) + 0x1b6) =
           *(undefined1 *)(*(int *)(param_1 + 0x178) + 0x1b7);
    }
  }
  local_6c = 0.0;
  FUN_0035e240(param_1 + 0x1a4,auStack_4c,DAT_0029f160,DAT_0029f15c,param_1);
  return;
}
