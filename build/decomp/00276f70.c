// OoT3D decomp @ 00276f70  name=FUN_00276f70  size=468

void FUN_00276f70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [48];

  FUN_00372224(auStack_44,param_1 + 0x148);
  if (*(short *)(param_1 + 0x1c) == 0) {
    if (*(int *)(param_1 + 0x1d0) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x1d0) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1d0),auStack_44);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1d0),0);
    }
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(DAT_00277144 + param_1),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar4 * DAT_00277148;
    local_50 = DAT_0027714c;
    local_4c = DAT_00277150;
    local_48 = DAT_00277154;
    FUN_00372070(auStack_44,auStack_44,&local_50);
    FUN_00371234(fVar4,auStack_44,1);
    if (*(int *)(param_1 + 0x1d4) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x1d4) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1d4),auStack_44);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1d4),0);
    }
    local_50 = DAT_00277158;
    local_4c = DAT_00277158;
    local_48 = DAT_0027715c;
    FUN_00372070(auStack_44,auStack_44,&local_50);
    FUN_00371234(fVar4 * DAT_00277160,auStack_44,1);
    if (*(int *)(param_1 + 0x1d8) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x1d8) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1d8),auStack_44);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1d8),0);
    }
  }
  else if (*(int *)(param_1 + 0x1dc) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1dc) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1dc),auStack_44);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1dc),0);
  }
  uVar2 = DAT_0027717c;
  local_50 = DAT_00277178;
  local_4c = DAT_00277174;
  iVar3 = *(int *)(param_1 + 0x1bc);
  iVar1 = DAT_00277164;
  if (iVar3 != DAT_00277164) {
    iVar1 = DAT_00277168;
  }
  if (iVar3 == DAT_00277164 || iVar3 == iVar1) {
    fVar4 = *(float *)(param_1 + 0x28) + DAT_0027716c;
    fVar5 = *(float *)(param_1 + 0x2c) + DAT_00277170;
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x30);
    *(float *)(param_1 + 0x1c8) = fVar5;
    *(float *)(param_1 + 0x1c4) = fVar4;
    FUN_0037547c(uVar2,param_1 + 0x1c4,4,local_50);
  }
  return;
}
