// OoT3D decomp @ 00278b20  name=FUN_00278b20  size=576

void FUN_00278b20(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c [2];
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_2c;
  short local_24;
  undefined2 local_22;
  undefined2 local_20;

  uVar2 = DAT_00278d60;
  *(undefined4 *)(param_1 + 0x222c) = DAT_00278d60;
  FUN_00373bec();
  FUN_00331284(*(undefined4 *)(DAT_00278d64 + param_2),*(undefined4 *)(param_1 + 0x178));
  FUN_0033e2a0(param_2,param_1,*(undefined4 *)(param_1 + 0x221c));
  FUN_00372224(local_4c,param_1 + 0x148);
  if (*(int *)(param_1 + 0x2210) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x2210) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x2210),local_4c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x2210),0);
  }
  FUN_00372224(local_4c,param_1 + 0x148);
  if (*(int *)(param_1 + 0x2214) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x2214) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x2214),local_4c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x2214),0);
  }
  if ((*(ushort *)(param_1 + 0x1c) & 3) == 2) {
    iVar3 = *(int *)(param_1 + 0x124);
    bVar1 = 0;
    if (iVar3 != 0) {
      bVar1 = *(byte *)(iVar3 + 0x1b4);
    }
    if ((iVar3 == 0 || (bVar1 & 4) == 0) || (bVar1 & 1) == 0) goto LAB_00278c10;
  }
  FUN_001170b8(param_1,param_2);
LAB_00278c10:
  if (DAT_00278d68 < *(float *)(param_1 + 0x1e4)) {
    FUN_00372224(&local_54,param_1 + 0x148);
    local_24 = *(short *)(param_1 + 0xbc) +
               *(short *)(DAT_00278d6c + (*(ushort *)(param_1 + 0x1c) & 3) * 2);
    local_22 = *(undefined2 *)(param_1 + 0xbe);
    local_20 = *(undefined2 *)(param_1 + 0xc0);
    FUN_003679d0(*(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1dc),
                 *(undefined4 *)(param_1 + 0x1e0),&local_54,&local_24);
    fVar4 = *(float *)(param_1 + 0x1e8);
    local_54 = local_54 * DAT_00278d70;
    local_44 = local_44 * DAT_00278d70;
    local_34 = local_34 * DAT_00278d70;
    local_50 = local_50 * DAT_00278d70;
    local_40 = local_40 * DAT_00278d70;
    local_30 = local_30 * DAT_00278d70;
    local_4c[0] = local_4c[0] * fVar4;
    local_3c = local_3c * fVar4;
    local_2c = local_2c * fVar4;
    if (*(int *)(param_1 + 0x2218) != 0) {
      local_64 = uVar2;
      local_60 = uVar2;
      local_5c = uVar2;
      local_58 = *(float *)(param_1 + 0x1e4) * DAT_00278d74;
      FUN_00358778(*(undefined4 *)(param_1 + 0x2218),0,5,&local_64,2);
      *(undefined1 *)(*(int *)(param_1 + 0x2218) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x2218),&local_54);
      FUN_00372170(*(undefined4 *)(param_1 + 0x2218),0);
    }
  }
  return;
}
