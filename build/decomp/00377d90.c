// OoT3D decomp @ 00377d90  name=FUN_00377d90  size=1184

void FUN_00377d90(int param_1,int param_2)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;

  uVar1 = *(ushort *)(param_1 + 0x224);
  if ((*(ushort *)(param_1 + 0x1c) & 1) != 0) {
    FUN_00357750(0,param_1 + 0x1a8,param_1 + 0x148);
  }
  FUN_00331284(*(undefined4 *)(DAT_00378110 + param_2),*(undefined4 *)(param_1 + 0x178));
  fVar2 = DAT_00378118;
  if (((~(*(short *)(param_1 + 0x1c) >> 4) & 3U) == 0) && (((uint)uVar1 << 0x12) >> 0x18 < 0xff)) {
    uVar5 = *(undefined4 *)(param_1 + 0x28);
    fVar6 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0x58);
    uVar7 = *(undefined4 *)(param_1 + 0x30);
    FUN_0035e3a4(param_1 + 0x238,0,*(undefined2 *)(DAT_00378114 + *(short *)(param_1 + 0x21c) * 2));
    FUN_0035e330(param_1 + 0x238);
    local_40 = (float)VectorUnsignedToFloat
                                (((uint)*(ushort *)(param_1 + 0x21e) << 0x12) >> 0x18,
                                 (byte)(in_fpscr >> 0x15) & 3);
    local_40 = local_40 * fVar2;
    local_3c = (float)VectorUnsignedToFloat
                                (((uint)*(ushort *)(param_1 + 0x220) << 0x12) >> 0x18,
                                 (byte)(in_fpscr >> 0x15) & 3);
    local_3c = local_3c * fVar2;
    fVar4 = (float)VectorUnsignedToFloat
                             (((uint)*(ushort *)(param_1 + 0x222) << 0x12) >> 0x18,
                              (byte)(in_fpscr >> 0x15) & 3);
    local_38 = fVar4 * fVar2;
    local_34 = (float)VectorUnsignedToFloat
                                (((uint)*(ushort *)(param_1 + 0x224) << 0x12) >> 0x18,
                                 (byte)(in_fpscr >> 0x15) & 3);
    local_34 = local_34 * fVar2;
    iVar3 = FUN_003687a8(*(undefined4 *)(param_1 + 0x22c));
    *(undefined1 *)(iVar3 + 0x1ba) = 0;
    FUN_003589cc(iVar3,4);
    FUN_00358964(iVar3,4,&local_40);
    *(undefined1 *)(*(int *)(param_1 + 0x22c) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x22c),param_1 + 0x148);
    FUN_00372170(*(undefined4 *)(param_1 + 0x22c),0);
    local_30 = *(float *)(param_1 + 0xbc);
    local_2c._0_2_ = *(short *)(param_1 + 0xc0) + *(short *)(param_1 + 0x226);
    FUN_003679d0(uVar5,fVar6,uVar7,param_1 + 0x148,&local_30);
    FUN_00371348(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                 *(undefined4 *)(param_1 + 0x5c),param_1 + 0x148,1);
    *(undefined1 *)(*(int *)(param_1 + 0x230) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x230),param_1 + 0x148);
    FUN_00372170(*(undefined4 *)(param_1 + 0x230),0);
    local_2c = CONCAT22(local_2c._2_2_,*(short *)(param_1 + 0xc0) - *(short *)(param_1 + 0x226));
    FUN_003679d0(uVar5,fVar6,uVar7,param_1 + 0x148,&local_30);
    FUN_00371348(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                 *(undefined4 *)(param_1 + 0x5c),param_1 + 0x148,1);
    *(undefined1 *)(*(int *)(param_1 + 0x234) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x234),param_1 + 0x148);
    FUN_00372170(*(undefined4 *)(param_1 + 0x234),0);
    return;
  }
  FUN_0035e3a4(param_1 + 0x238,0,*(undefined2 *)(DAT_00378114 + *(short *)(param_1 + 0x21c) * 2));
  FUN_0035e330(param_1 + 0x238);
  local_4c = (float)VectorUnsignedToFloat
                              (((uint)*(ushort *)(param_1 + 0x21e) << 0x12) >> 0x18,
                               (byte)(in_fpscr >> 0x15) & 3);
  local_4c = local_4c * fVar2;
  local_48 = (float)VectorUnsignedToFloat
                              (((uint)*(ushort *)(param_1 + 0x220) << 0x12) >> 0x18,
                               (byte)(in_fpscr >> 0x15) & 3);
  local_48 = local_48 * fVar2;
  local_44 = (float)VectorUnsignedToFloat
                              (((uint)*(ushort *)(param_1 + 0x222) << 0x12) >> 0x18,
                               (byte)(in_fpscr >> 0x15) & 3);
  local_44 = local_44 * fVar2;
  local_40 = (float)VectorUnsignedToFloat
                              (((uint)*(ushort *)(param_1 + 0x224) << 0x12) >> 0x18,
                               (byte)(in_fpscr >> 0x15) & 3);
  local_40 = local_40 * fVar2;
  iVar3 = FUN_003687a8(*(undefined4 *)(param_1 + 0x22c));
  *(undefined1 *)(iVar3 + 0x1ba) = 0;
  FUN_003589cc(iVar3,4);
  FUN_00358964(iVar3,4,&local_4c);
  fVar2 = DAT_0037811c;
  if ((*(ushort *)(param_1 + 0x1c) & 1) == 0) {
    local_34 = *(float *)(param_1 + 0x28);
    local_30 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0x58);
    local_2c = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x128);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar3 + 0x28);
    *(float *)(param_1 + 0x2c) = *(float *)(iVar3 + 0x2c) + fVar2;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar3 + 0x30);
    FUN_0036df4c(&local_34,param_1 + 0x28);
    FUN_003679d0(local_34,local_30,local_2c,param_1 + 0x148,param_1 + 0xbc);
    FUN_00371348(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                 *(undefined4 *)(param_1 + 0x5c),param_1 + 0x148,1);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x22c) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x22c),param_1 + 0x148);
  FUN_00372170(*(undefined4 *)(param_1 + 0x22c),0);
  local_3c = *(float *)(param_1 + 0xbc);
  local_38._0_2_ = *(short *)(param_1 + 0xc0) + *(short *)(param_1 + 0x226);
  FUN_003679d0(local_34,local_30,local_2c,param_1 + 0x148,&local_3c);
  FUN_00371348(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0x5c),param_1 + 0x148,1);
  *(undefined1 *)(*(int *)(param_1 + 0x230) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x230),param_1 + 0x148);
  FUN_00372170(*(undefined4 *)(param_1 + 0x230),0);
  local_38 = (float)CONCAT22(local_38._2_2_,*(short *)(param_1 + 0xc0) - *(short *)(param_1 + 0x226)
                            );
  FUN_003679d0(local_34,local_30,local_2c,param_1 + 0x148,&local_3c);
  FUN_00371348(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0x5c),param_1 + 0x148,1);
  *(undefined1 *)(*(int *)(param_1 + 0x234) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x234),param_1 + 0x148);
  FUN_00372170(*(undefined4 *)(param_1 + 0x234),0);
  return;
}
