// OoT3D decomp @ 002341a8  name=FUN_002341a8  size=244

void FUN_002341a8(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [12];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;

  if ((((param_2 == 0) && (*(short *)(param_4 + 0x93c) != 0)) && (*(short *)(param_4 + 0x92c) == 0))
     && (1 < *(short *)(param_4 + 0x93c))) {
    local_1c = DAT_0023429c * *(float *)(param_4 + 0x970);
    local_14 = DAT_002342a0 * *(float *)(param_4 + 0x970);
    local_28 = DAT_0023429c * *(float *)(param_4 + 0x970);
    local_24 = DAT_002342a4 * *(float *)(param_4 + 0x970);
    local_20 = DAT_002342a0 * *(float *)(param_4 + 0x970);
    local_18 = local_1c;
    FUN_003735ac(auStack_34,param_3,&local_1c);
    FUN_003735ac(auStack_40,param_3,&local_28);
    uVar1 = FUN_00362384(*(undefined4 *)(param_4 + 0x96c));
    FUN_003620f0(uVar1,auStack_34,auStack_40);
  }
  FUN_00357750(param_2,param_4 + 0x8b4,param_3);
  return;
}
