// OoT3D decomp @ 0035e600  name=FUN_0035e600  size=156

ushort FUN_0035e600(float param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_28 [12];

  FUN_0036df4c(auStack_28,param_2 + 0x28);
  uVar1 = *(undefined2 *)(param_2 + 0x90);
  fVar3 = (float)FUN_002cfca0(param_4);
  fVar4 = (float)FUN_00338f60(param_4);
  *(float *)(param_2 + 0x28) = *(float *)(param_2 + 0x28) + fVar3 * param_1;
  *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) + fVar4 * param_1;
  FUN_00376340(DAT_0035e69c,DAT_0035e69c,DAT_0035e69c,param_3,param_2,4);
  FUN_0036df4c(param_2 + 0x28,auStack_28);
  uVar2 = *(ushort *)(param_2 + 0x90);
  *(undefined2 *)(param_2 + 0x90) = uVar1;
  return uVar2 & 1;
}
