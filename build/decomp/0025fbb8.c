// OoT3D decomp @ 0025fbb8  name=FUN_0025fbb8  size=364

void FUN_0025fbb8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  undefined1 auStack_64 [48];
  float local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;

  FUN_00372224(auStack_64,param_1 + 0x148);
  uVar1 = DAT_0025fd24;
  uVar3 = (uint)*(byte *)(param_1 + 0x1c0);
  if (uVar3 == 3 || uVar3 == 2) {
    if (*(int *)(param_1 + 0x1bc) == DAT_0025fd28) {
      uVar2 = 0xff;
    }
    else if (*(int *)(param_1 + 0x1bc) == DAT_0025fd2c) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(ushort *)(param_1 + 0x1c4) & 0xff;
    }
    fVar5 = (float)VectorUnsignedToFloat(0xff - uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_003695cc(DAT_0025fd24,DAT_0025fd24,DAT_0025fd24,fVar5 * DAT_0025fd30,
                 *(undefined4 *)(param_1 + uVar3 * 4 + 0x2a0),
                 (int)(char)*(undefined4 *)(DAT_0025fd34 + uVar3 * 4),4,0);
  }
  iVar4 = param_1 + uVar3 * 4;
  if (*(int *)(iVar4 + 0x2a0) != 0) {
    *(undefined1 *)(*(int *)(iVar4 + 0x2a0) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(iVar4 + 0x2a0),auStack_64);
    FUN_00372170(*(undefined4 *)(iVar4 + 0x2a0),0);
  }
  if (uVar3 < 2) {
    fVar5 = (DAT_0025fd38 - *(float *)(param_1 + 0x2c)) * DAT_0025fd3c;
    if ((int)fVar5 < 0x3f800001) {
      local_28 = *(undefined4 *)(param_1 + 0x28);
      local_24 = *(float *)(param_1 + 0x2c) - DAT_0025fd40;
      local_20 = *(undefined4 *)(param_1 + 0x30);
      local_34 = DAT_0025fd48 + fVar5 * DAT_0025fd44;
      local_30 = uVar1;
      uVar3 = VectorFloatToUnsigned(DAT_0025fd50 + fVar5 * DAT_0025fd4c,3);
      local_2c = local_34;
      FUN_00357878(param_1,&local_28,&local_34,uVar3 & 0xff,param_2);
    }
  }
  return;
}
