// OoT3D decomp @ 0022d9e0  name=FUN_0022d9e0  size=688

void FUN_0022d9e0(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;

  *(undefined1 *)(param_1 + 0xb24) = 1;
  FUN_00372f38(param_1,param_2,param_1 + 0x954,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x568,0x10);
  FUN_0035c358(param_1 + 0x958,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x8d4,param_1,DAT_0022dc90);
  *(undefined1 *)(param_1 + 0x1f) = 6;
  uVar1 = DAT_0022dc98;
  if (*(short *)(param_1 + 0x1c) < 0) {
    *(undefined2 *)(param_1 + 0x1c) = 0;
  }
  fVar4 = DAT_0022dca4;
  uVar3 = DAT_0022dca0;
  *(ushort *)(DAT_0022dc94 + param_1) = *(ushort *)(param_1 + 0x1c) >> 8;
  puVar2 = DAT_0022dc9c;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  if (((*puVar2 & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_0022dc9c), puVar5 = DAT_0022dca8, iVar6 != 0)) {
    *DAT_0022dca8 = uVar3;
    puVar5[1] = fVar4;
    puVar5[2] = fVar4;
    puVar5[3] = fVar4;
    puVar5[4] = fVar4;
    puVar5[5] = uVar3;
    puVar5[6] = fVar4;
    puVar5[7] = fVar4;
    puVar5[8] = fVar4;
    puVar5[9] = fVar4;
    puVar5[10] = uVar3;
    puVar5[0xb] = fVar4;
  }
  FUN_00372224(&local_68,DAT_0022dca8);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar7 * DAT_0022dcac * DAT_0022dcb0;
  local_68 = uVar3;
  local_60 = fVar4;
  if (fVar7 != fVar4) {
    fVar8 = (float)FUN_003727f0(fVar7);
    local_68 = FUN_00372674(fVar7);
    local_60 = fVar8;
  }
  local_64 = fVar4;
  local_5c = fVar4;
  local_48 = -local_60;
  local_54 = uVar3;
  local_58 = fVar4;
  local_50 = fVar4;
  local_4c = fVar4;
  local_44 = fVar4;
  local_3c = fVar4;
  local_30 = fVar4;
  local_34 = fVar4;
  local_38 = fVar4;
  local_28 = fVar4;
  local_2c = fVar4;
  local_24 = DAT_0022dcb4;
  local_40 = local_68;
  FUN_003735ac(&local_38,&local_68,&local_2c);
  iVar6 = FUN_0036aa20(*(float *)(param_1 + 0x28) + local_38,*(float *)(param_1 + 0x2c) + local_34,
                       *(float *)(param_1 + 0x30) + local_30,param_2 + 0x208c,param_1,param_2,0x19,0
                       ,(int)*(short *)(param_1 + 0x36),0,10);
  *(int *)(param_1 + 0x8d0) = iVar6;
  if (iVar6 != 0) {
    *(undefined1 *)(param_1 + 0xb6) = 0xff;
    *(undefined4 *)(param_1 + 0x8a8) = DAT_0022dcb8;
    return;
  }
  FUN_00374428(param_1);
  return;
}
