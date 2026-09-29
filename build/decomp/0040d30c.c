// OoT3D decomp @ 0040d30c  name=FUN_0040d30c  size=80

undefined4 FUN_0040d30c(int param_1,undefined4 param_2,uint param_3)

{
  short sVar1;
  short *psVar2;
  bool bVar3;
  bool bVar4;

  psVar2 = *(short **)(param_1 + 8);
  sVar1 = *psVar2;
  if (sVar1 == 0) {
    param_3 = (uint)(ushort)psVar2[-1];
  }
  if (sVar1 != 0 || param_3 != 0x2f) {
    if (sVar1 == 0x2e) {
      param_3 = (uint)(ushort)psVar2[1];
    }
    if (sVar1 != 0x2e || param_3 != 0) {
      bVar3 = sVar1 == 0x2e;
      if (bVar3) {
        sVar1 = psVar2[1];
      }
      bVar4 = bVar3 && sVar1 == 0x2e;
      if (bVar3 && sVar1 == 0x2e) {
        bVar4 = psVar2[2] == 0;
      }
      if (!bVar4) {
        return 0;
      }
    }
  }
  return 1;
}
