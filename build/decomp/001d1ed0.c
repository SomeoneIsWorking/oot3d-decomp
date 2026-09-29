// OoT3D decomp @ 001d1ed0  name=FUN_001d1ed0  size=340

void FUN_001d1ed0(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;

  local_2c = DAT_001d2024;
  local_28 = DAT_001d2028;
  local_24 = DAT_001d202c;
  local_20 = DAT_001d202c;
  FUN_003534b8(&local_1c,0xbc,0xff,0xff,*(undefined1 *)(param_1 + 0x289),0,100,0xff);
  FUN_003429c8(*(undefined4 *)(param_1 + 0x2d0),1,&local_2c);
  iVar1 = *(int *)(param_1 + 0x2d0);
  *(undefined4 *)(iVar1 + 0xf0) = local_1c;
  *(undefined4 *)(iVar1 + 0xf4) = uStack_18;
  *(undefined4 *)(iVar1 + 0xf8) = uStack_14;
  *(undefined4 *)(iVar1 + 0xfc) = uStack_10;
  FUN_00372224(&local_5c,param_1 + 0x148);
  FUN_0036c174(&local_5c,&local_5c,param_2 + 0x2fc);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(DAT_001d2030 + param_1),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001d2034 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if (*(short *)(DAT_001d2030 + param_1) < 1) {
    fVar2 = fVar2 * fVar3 * DAT_001d2038 - DAT_001d203c;
  }
  else {
    fVar2 = DAT_001d203c + fVar2 * fVar3 * DAT_001d2038;
  }
  fVar2 = (float)VectorSignedToFloat((int)fVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00371234(fVar2 * DAT_001d2040,&local_5c,1);
  FUN_00371348(DAT_001d2044,DAT_001d2044,DAT_001d2044,&local_5c,1);
  *(uint *)(*(int *)(param_1 + 0x2d0) + 0x178) = *(uint *)(*(int *)(param_1 + 0x2d0) + 0x178) | 2;
  iVar1 = *(int *)(param_1 + 0x2d0);
  *(undefined4 *)(iVar1 + 0xc) = local_5c;
  *(undefined4 *)(iVar1 + 0x10) = uStack_58;
  *(undefined4 *)(iVar1 + 0x14) = uStack_54;
  *(undefined4 *)(iVar1 + 0x18) = uStack_50;
  *(undefined4 *)(iVar1 + 0x1c) = uStack_4c;
  *(undefined4 *)(iVar1 + 0x20) = local_48;
  *(undefined4 *)(iVar1 + 0x24) = uStack_44;
  *(undefined4 *)(iVar1 + 0x28) = uStack_40;
  *(undefined4 *)(iVar1 + 0x2c) = uStack_3c;
  *(undefined4 *)(iVar1 + 0x30) = uStack_38;
  *(undefined4 *)(iVar1 + 0x34) = local_34;
  *(undefined4 *)(iVar1 + 0x38) = uStack_30;
  FUN_00371eac(*(undefined4 *)(param_1 + 0x2d0),0);
  return;
}
