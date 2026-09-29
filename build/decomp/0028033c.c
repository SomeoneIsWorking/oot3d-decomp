// OoT3D decomp @ 0028033c  name=FUN_0028033c  size=440

void FUN_0028033c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined1 auStack_4c [48];
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;

  FUN_0035e3a4(param_1 + 0x380,0,*(undefined1 *)(DAT_002804f4 + *(short *)(param_1 + 0x1f8)));
  FUN_0035e330(param_1 + 0x380);
  iVar1 = DAT_002804f8 + *(short *)(param_1 + 0x1fa) * 4;
  local_1c = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar1 + -4),(byte)(in_fpscr >> 0x15) & 3);
  local_1c = local_1c * DAT_002804fc;
  local_18 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar1 + -3),(byte)(in_fpscr >> 0x15) & 3);
  local_18 = local_18 * DAT_002804fc;
  local_14 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(DAT_002804f8 + *(short *)(param_1 + 0x1fa) * 4 + -2),
                               (byte)(in_fpscr >> 0x15) & 3);
  local_14 = local_14 * DAT_002804fc;
  local_10 = DAT_00280500;
  FUN_0035e240(param_1 + 0x2fc,param_1 + 0x148,DAT_00280508,DAT_00280504,param_1,0);
  local_70 = *(undefined4 *)(param_1 + 0x1ac);
  local_60 = *(undefined4 *)(param_1 + 0x1b0);
  local_50 = *(undefined4 *)(param_1 + 0x1b4);
  local_7c = 0x3f800000;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  uStack_68 = 0x3f800000;
  local_64 = 0;
  local_58 = 0;
  uStack_54 = 0x3f800000;
  local_5c = 0;
  local_ac = DAT_0028050c;
  local_a8 = 0;
  local_94 = 0;
  local_98 = DAT_0028050c;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_80 = 0;
  local_84 = DAT_0028050c;
  FUN_0036c174(auStack_4c,&local_7c,&local_ac);
  uVar2 = FUN_003687a8(*(undefined4 *)(param_1 + 0x8f4));
  FUN_003589cc(uVar2,4);
  FUN_00358964(uVar2,4,&local_1c);
  *(undefined1 *)(*(int *)(param_1 + 0x8f4) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x8f4),auStack_4c);
  FUN_00372170(*(undefined4 *)(param_1 + 0x8f4),0);
  return;
}
