// OoT3D decomp @ 002985f0  name=FUN_002985f0  size=144

undefined4 FUN_002985f0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = param_1 + *(int *)(param_3 + 4);
  if (*(byte *)(param_3 + 1) != 0) {
    uVar1 = *(byte *)(param_3 + 1) & 1;
    if (uVar1 == 1) {
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + param_1;
    }
    uVar5 = (uint)(uVar1 == 1);
    if (uVar1 < *(byte *)(param_3 + 1)) {
      do {
        iVar2 = iVar4 + uVar5 * 8;
        iVar3 = iVar4 + (uVar5 + 1) * 8;
        uVar1 = uVar1 + 2;
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + param_1;
        uVar5 = uVar5 + 2;
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + param_1;
      } while ((int)uVar1 < (int)(uint)*(byte *)(param_3 + 1));
    }
  }
  *(int *)(iRam00298680 + param_2) = iVar4;
  return 1;
}

