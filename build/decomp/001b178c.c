// OoT3D decomp @ 001b178c  name=FUN_001b178c  size=176

void FUN_001b178c(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;

  FUN_003731e0(param_1 + 0x1a4);
  if ((*(uint *)(param_1 + 4) & 0x2000) != 0) {
    return;
  }
  FUN_00376864(param_1);
  FUN_00376340(DAT_001b1844,DAT_001b1840,DAT_001b183c,param_2,param_1,5);
  (**(code **)(param_1 + 0x638))(param_1,param_2);
  uVar1 = param_1 + 0x600;
  bVar2 = *(short *)(param_1 + 0x6c0) == 0;
  if (bVar2) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x6c2);
  }
  bVar3 = bVar2 && uVar1 == 0;
  if (bVar2 && uVar1 == 0) {
    bVar3 = *(int *)(param_1 + 0x638) == DAT_001b1848;
  }
  if (bVar3) {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x63c);
  }
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x63c);
  return;
}
