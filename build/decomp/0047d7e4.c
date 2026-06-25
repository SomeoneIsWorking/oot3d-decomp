// OoT3D decomp @ 0047d7e4  name=FUN_0047d7e4  size=116

int FUN_0047d7e4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int local_10;
  
  local_10 = param_4;
  FUN_0030ee14(&local_10,DAT_0047d858 + param_1 * 4);
  if ((local_10 == 0) || (iVar2 = FUN_002d3c88(local_10,param_2,0,DAT_0047d85c), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  iVar2 = DAT_0047d860;
  bVar4 = uVar3 != 0;
  if (bVar4) {
    uVar3 = (int)*(short *)(DAT_0047d860 + 6) - 2;
  }
  if (!bVar4 || 0xd < uVar3) {
    *(undefined2 *)(DAT_0047d860 + 6) = 0xf;
  }
  sVar1 = *(short *)(iVar2 + 6);
  FUN_0030ede0(&local_10);
  return (int)sVar1;
}

