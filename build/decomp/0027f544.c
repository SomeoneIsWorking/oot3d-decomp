// OoT3D decomp @ 0027f544  name=FUN_0027f544  size=336

void FUN_0027f544(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint in_fpscr;
  float fVar4;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [16];
  float local_1c;
  float local_18;

  iVar1 = (int)*(short *)((int)param_3 + 0x52);
  if (0x10 < iVar1) {
    iVar1 = 0x10;
  }
  fVar4 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x5a),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar4 = fVar4 * DAT_0027f694;
  local_1c = (float)VectorSignedToFloat(iVar1 % 8,(byte)(in_fpscr >> 0x15) & 3);
  local_1c = local_1c * DAT_0027f698;
  local_18 = (float)VectorSignedToFloat((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1d)) >> 3,
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_18 = local_18 * DAT_0027f69c;
  FUN_00332fc0(param_1,auStack_2c,(int)*(short *)(param_3 + 0x11),
               (int)*(short *)((int)param_3 + 0x46),(int)*(short *)(param_3 + 0x12),
               (int)*(short *)((int)param_3 + 0x4a),(int)*(short *)(param_3 + 0x13),
               (int)*(short *)((int)param_3 + 0x4e),(int)*(short *)(param_3 + 0x14));
  local_38 = *param_3;
  local_34 = param_3[1];
  local_30 = param_3[2];
  local_44 = fVar4 * DAT_0027f6a0;
  iVar1 = 0;
  local_40 = local_44 * DAT_0027f6a4;
  if (*(short *)(param_3 + 0x17) != 0) {
    iVar1 = 2;
  }
  local_3c = local_44;
  uVar2 = FUN_00371f1c(*(undefined4 *)(param_3[0x1a] + iVar1 * 4),&local_38,0,&local_44,auStack_2c,
                       &local_1c);
  bVar3 = uVar2 == 0;
  if (bVar3) {
    uVar2 = (uint)*(ushort *)(param_3 + 0x17);
  }
  if (bVar3 && uVar2 == 0) {
    FUN_00371f1c(*(undefined4 *)(param_3[0x1a] + iVar1 * 4 + 4),&local_38,0,&local_44,auStack_2c,
                 &local_1c);
  }
  return;
}
