// OoT3D decomp @ 00363108  name=FUN_00363108  size=192

ushort FUN_00363108(float param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;

  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar4 = *(undefined4 *)(param_2 + 0x2c);
  uVar5 = *(undefined4 *)(param_2 + 0x30);
  uVar1 = *(undefined2 *)(param_2 + 0x90);
  fVar6 = (float)FUN_002cfca0(param_4);
  fVar7 = (float)FUN_00338f60(param_4);
  *(float *)(param_2 + 0x28) = *(float *)(param_2 + 0x28) + fVar6 * param_1;
  *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) + fVar7 * param_1;
  FUN_00376340(DAT_003631c8,DAT_003631c8,DAT_003631c8,param_3,param_2,4);
  *(undefined4 *)(param_2 + 0x28) = uVar3;
  *(undefined4 *)(param_2 + 0x2c) = uVar4;
  *(undefined4 *)(param_2 + 0x30) = uVar5;
  uVar2 = *(ushort *)(param_2 + 0x90) & 1;
  if (((*(ushort *)(param_2 + 0x90) & 1) == 0) &&
     (*(float *)(param_2 + 0x46c) - DAT_003631cc <= *(float *)(param_2 + 0x84))) {
    uVar2 = 1;
  }
  *(undefined2 *)(param_2 + 0x90) = uVar1;
  return uVar2;
}
