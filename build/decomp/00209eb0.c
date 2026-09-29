// OoT3D decomp @ 00209eb0  name=FUN_00209eb0  size=1112

void FUN_00209eb0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;

  local_58 = 0;
  FUN_003510b0(param_1,DAT_0020a308);
  *(byte *)(param_1 + 0x2c4) = (byte)*(undefined2 *)(param_1 + 0x1c) & 0x3f;
  *(byte *)(param_1 + 0x2c5) = (byte)(((uint)*(ushort *)(param_1 + 0x1c) << 0x14) >> 0x1a);
  *(byte *)(param_1 + 0x2c7) = ~(byte)((uint)(int)*(short *)(param_1 + 0x1c) >> 0xf) & 1;
  *(char *)(param_1 + 0x2c8) = (char)((*(ushort *)(param_1 + 0x1c) & 0x4000) >> 0xe);
  uVar1 = (uint)*(ushort *)(param_1 + 0x1c) << 0x12;
  *(ushort *)(param_1 + 0x1c) = (ushort)(uVar1 >> 0x1e);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0020a30c + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  local_5c = DAT_0020a310;
  FUN_00372f38(param_1,param_2,param_1 + 0x1c0,*(undefined1 *)((int)&local_5c + (uVar1 >> 0x1e)),0);
  if (*(short *)(param_1 + 0x1c) != 1) {
    FUN_00372f38(param_1,param_2,param_1 + 0x1c4,2,param_1 + 0x1c8,2,param_1 + 0x1cc,2,
                 param_1 + 0x1d0,2,param_1 + 0x1d4,2,param_1 + 0x1d8,2,param_1 + 0x1dc,2,
                 param_1 + 0x1e0,2,0);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x400000;
  }
  FUN_003532e8(param_1,1);
  FUN_0034f910(param_2,param_1 + 0x1ec);
  FUN_0034f760(param_2,param_1 + 0x1ec,param_1,DAT_0020a314,param_1 + 0x20c);
  if (*(short *)(param_1 + 0x1c) == 0) {
    local_58 = FUN_003532c0(iVar2 + 0x10,2);
    iVar2 = DAT_0020a31c;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0020a318;
    local_54 = *(float *)(param_1 + 0x28) + *(float *)(iVar2 + 0x18);
    local_50 = *(float *)(param_1 + 0x2c) + *(float *)(iVar2 + 0x1c);
    local_4c = *(float *)(param_1 + 0x30) + *(float *)(iVar2 + 0x20);
    local_48 = *(float *)(param_1 + 0x28) + *(float *)(iVar2 + 0x24);
    local_44 = *(float *)(param_1 + 0x2c) + *(float *)(iVar2 + 0x28);
    local_40 = *(float *)(param_1 + 0x30) + *(float *)(iVar2 + 0x2c);
    local_3c = *(float *)(param_1 + 0x28) + *(float *)(iVar2 + 0x30);
    local_38 = *(float *)(param_1 + 0x2c) + *(float *)(iVar2 + 0x34);
    local_34 = *(float *)(param_1 + 0x30) + *(float *)(iVar2 + 0x38);
    FUN_00362434(param_1 + 0x1ec,0,&local_54,&local_48,&local_3c);
    local_48 = local_54;
    local_40 = local_34;
    FUN_00362434(param_1 + 0x1ec,1,&local_54,&local_3c,&local_48);
    *(undefined4 *)(param_1 + 0x1e4) = DAT_0020a320;
  }
  else {
    local_58 = FUN_003532c0(iVar2 + 0x10,1);
    uVar3 = DAT_0020a328;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0020a324;
    FUN_0037322c(uVar3,param_1);
    iVar2 = DAT_0020a32c;
    fVar4 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbc));
    fVar7 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbc));
    fVar9 = fVar4 * -fVar6;
    fVar8 = *(float *)(iVar2 + 0x1c);
    local_54 = (*(float *)(param_1 + 0x28) + fVar5 * *(float *)(iVar2 + 0x18)) - fVar8 * fVar9;
    local_50 = *(float *)(param_1 + 0x2c) + fVar8 * fVar7;
    fVar10 = fVar5 * -fVar6;
    local_4c = (*(float *)(param_1 + 0x30) - fVar4 * *(float *)(iVar2 + 0x18)) + fVar8 * fVar10;
    fVar6 = *(float *)(iVar2 + 0x28);
    local_48 = (*(float *)(param_1 + 0x28) + fVar5 * *(float *)(iVar2 + 0x24)) - fVar6 * fVar9;
    local_44 = *(float *)(param_1 + 0x2c) + fVar6 * fVar7;
    local_40 = (*(float *)(param_1 + 0x30) - fVar4 * *(float *)(iVar2 + 0x24)) + fVar6 * fVar10;
    fVar6 = *(float *)(iVar2 + 0x34);
    local_3c = (*(float *)(param_1 + 0x28) + fVar5 * *(float *)(iVar2 + 0x30)) - fVar6 * fVar9;
    local_38 = *(float *)(param_1 + 0x2c) + fVar6 * fVar7;
    local_34 = (*(float *)(param_1 + 0x30) - fVar4 * *(float *)(iVar2 + 0x30)) + fVar6 * fVar10;
    FUN_00362434(param_1 + 0x1ec,0,&local_54,&local_48,&local_3c);
    fVar6 = *(float *)(iVar2 + 0x34);
    local_48 = (*(float *)(param_1 + 0x28) + fVar5 * *(float *)(iVar2 + 0x18)) - fVar6 * fVar9;
    local_44 = *(float *)(param_1 + 0x2c) + fVar6 * fVar7;
    local_40 = (*(float *)(param_1 + 0x30) - fVar4 * *(float *)(iVar2 + 0x18)) + fVar6 * fVar10;
    FUN_00362434(param_1 + 0x1ec,1,&local_54,&local_3c,&local_48);
  }
  uVar3 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,local_58);
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  *(undefined1 *)(param_1 + 0x2c6) = 0;
  iVar2 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x2c4));
  if (iVar2 != 0) {
    FUN_00374428(param_1);
  }
  return;
}
