// OoT3D decomp @ 0027b820  name=FUN_0027b820  size=668

void FUN_0027b820(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;

  local_40 = 0;
  FUN_003510b0(param_1,DAT_0027babc);
  FUN_0034f910(param_2,param_1 + 0x1c4);
  FUN_0034f760(param_2,param_1 + 0x1c4,param_1,DAT_0027bac0,param_1 + 0x1e4);
  uVar1 = *(ushort *)(param_1 + 0x1c);
  *(char *)(param_1 + 0x29e) = (char)uVar1;
  *(ushort *)(param_1 + 0x1c) = uVar1 >> 8;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  local_44 = DAT_0027bac4;
  FUN_00372f38(param_1,param_2,param_1 + 0x1c0,
               *(undefined1 *)((int)&local_44 + (((uint)uVar1 << 0x10) >> 0x18)),0);
  iVar4 = DAT_0027bad0;
  iVar2 = DAT_0027bac8;
  if (*(short *)(param_1 + 0x1c) == 0) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0027bacc;
    iVar4 = iVar2;
  }
  else {
    FUN_003532e8(param_1,0);
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_0027bad4 + iVar2) != 0)) {
      iVar2 = iVar2 + 0x3a5c;
    }
    else {
      iVar2 = 0;
    }
    local_40 = FUN_003532c0(iVar2 + 0x10,3);
    uVar3 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,local_40);
    *(undefined4 *)(param_1 + 0x1a4) = uVar3;
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + DAT_0027bad8;
    iVar2 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x29e));
    uVar3 = DAT_0027bae0;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_0027badc;
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0x1bc) = uVar3;
    }
  }
  fVar5 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar6 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  local_3c = *(float *)(param_1 + 0x28) + fVar6 * *(float *)(iVar4 + 0x18);
  local_38 = *(float *)(param_1 + 0x2c) + *(float *)(iVar4 + 0x1c);
  local_34 = *(float *)(param_1 + 0x30) - fVar5 * *(float *)(iVar4 + 0x18);
  local_30 = *(float *)(param_1 + 0x28) + fVar6 * *(float *)(iVar4 + 0x24);
  local_2c = *(float *)(param_1 + 0x2c) + *(float *)(iVar4 + 0x28);
  local_28 = *(float *)(param_1 + 0x30) - fVar5 * *(float *)(iVar4 + 0x24);
  local_24 = *(float *)(param_1 + 0x28) + fVar6 * *(float *)(iVar4 + 0x30);
  local_20 = *(float *)(param_1 + 0x2c) + *(float *)(iVar4 + 0x34);
  local_1c = *(float *)(param_1 + 0x30) - fVar5 * *(float *)(iVar4 + 0x30);
  FUN_00362434(param_1 + 0x1c4,0,&local_3c,&local_30,&local_24);
  local_30 = *(float *)(param_1 + 0x28) + fVar6 * *(float *)(iVar4 + 0x30);
  local_2c = *(float *)(param_1 + 0x2c) + *(float *)(iVar4 + 0x1c);
  local_28 = *(float *)(param_1 + 0x30) - fVar5 * *(float *)(iVar4 + 0x30);
  FUN_00362434(param_1 + 0x1c4,1,&local_3c,&local_24,&local_30);
  return;
}
