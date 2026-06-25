// OoT3D decomp @ 003343ec  name=FUN_003343ec  size=236

void FUN_003343ec(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  
  uVar1 = DAT_003344d8;
  uVar2 = *(uint *)(param_2 + 0x1710);
  bVar4 = (uVar2 & 0x8000000) == 0;
  if (!bVar4) {
    uVar2 = (uint)*(byte *)(param_2 + 0x1a7);
  }
  if (bVar4 || uVar2 == 1) {
    iVar3 = *(int *)(param_2 + 0x284) + -0x19b;
    bVar4 = iVar3 != 0;
    if (bVar4) {
      iVar3 = *(int *)(param_2 + 0x284) + -0x100;
    }
    uVar5 = DAT_003344e8;
    if (!bVar4 || iVar3 == 0x99) {
      *(short *)(param_2 + 0xbe) = *(short *)(param_2 + 0xbe) + -0x8000;
      uVar5 = uVar1;
    }
    FUN_003551b4(uVar5,param_2,param_1);
    iVar3 = FUN_00354f70(param_2,param_1);
    if (iVar3 == 0) {
      FUN_00354894(param_2,param_1);
    }
  }
  else {
    FUN_0036055c(param_1,param_2,DAT_003344dc,1);
    FUN_00360190(DAT_003344e4,uVar1,uVar1,DAT_003344e0,param_2 + 0x254,param_1,0x34,0);
    FUN_00355264(param_1,param_2);
  }
  iVar3 = DAT_003344f0;
  uVar1 = DAT_003344ec;
  *(undefined *)(param_2 + 0x12bc) = 0;
  *(undefined *)(param_2 + 0x1749) = 0;
  *(undefined4 *)(iVar3 + 0xcc) = uVar1;
  *(undefined *)(iVar3 + 0xd4) = 0;
  return;
}

