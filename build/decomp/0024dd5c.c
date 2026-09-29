// OoT3D decomp @ 0024dd5c  name=FUN_0024dd5c  size=416

void FUN_0024dd5c(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;

  FUN_00372224(&local_48,param_1 + 0x148);
  uVar6 = DAT_0024defc;
  iVar2 = FUN_003695f8();
  local_50 = *(undefined4 *)(param_1 + 0x1c8);
  if (iVar2 != 0) {
    uVar6 = DAT_0024df00;
  }
  local_54 = DAT_0024df00;
  local_4c = DAT_0024df00;
  FUN_00372070(&local_48,&local_48,&local_54);
  fVar3 = *(float *)(param_1 + 0x200);
  fVar4 = *(float *)(param_1 + 0x204);
  fVar5 = *(float *)(param_1 + 0x208);
  local_48 = local_48 * fVar3;
  local_38 = local_38 * fVar3;
  local_28 = local_28 * fVar3;
  local_44 = local_44 * fVar4;
  local_34 = local_34 * fVar4;
  local_24 = local_24 * fVar4;
  local_40 = local_40 * fVar5;
  local_30 = local_30 * fVar5;
  local_20 = local_20 * fVar5;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1f8) + 0xc) + 0xc) = uVar6;
  *(undefined1 *)(*(int *)(param_1 + 0x1f8) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1f8),&local_48);
  FUN_00372170(*(undefined4 *)(param_1 + 0x1f8),0);
  if ((*(byte *)(param_1 + 500) & 1) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1c) >> 0xc;
    if (uVar1 == 0) {
      fVar3 = (*(float *)(param_1 + 0x1d8) - DAT_0024df14) * DAT_0024df18;
      if ((*(short *)(param_2 + 0x104) == 2) && ((int)fVar3 < DAT_0024df1c)) {
        return;
      }
    }
    else {
      if (uVar1 != 1) {
        return;
      }
      if ((uint)DAT_0024df0c <= (uint)*(float *)(param_1 + 0x1d8)) {
        return;
      }
      fVar3 = (*(float *)(param_1 + 0x1d8) - DAT_0024df10) /
              (*(float *)(param_1 + 0x1f0) - DAT_0024df10);
    }
    FUN_0036ef10(fVar3 + DAT_0024df08,param_1 + 0x28,DAT_0024df04);
  }
  return;
}
