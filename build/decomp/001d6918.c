// OoT3D decomp @ 001d6918  name=FUN_001d6918  size=128

void FUN_001d6918(int param_1)

{
  uint uVar1;
  undefined4 local_30 [4];
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  local_30[0] = *DAT_001d6998;
  local_30[1] = DAT_001d6998[1];
  local_30[2] = DAT_001d6998[2];
  local_30[3] = DAT_001d6998[3];
  uStack_20 = DAT_001d6998[4];
  local_1c = DAT_001d6998[5];
  uStack_18 = DAT_001d6998[6];
  uStack_14 = DAT_001d6998[7];
  uVar1 = *(ushort *)(param_1 + 0x1c) & 0xf;
  FUN_0033dd8c(local_30[uVar1 * 4],local_30[uVar1 * 4 + 1],local_30[uVar1 * 4 + 2],
               local_30[uVar1 * 4 + 3],param_1 + 0x1a4,0,4);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,0,param_1,1);
  return;
}
